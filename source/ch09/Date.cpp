#include "std_lib_facilities.h"

namespace Chrono{

class Year {
    static constexpr int min = 1800;
    static constexpr int max = 2200;
public:
    class Invalid{};
    Year(int x): y(x) { if (x < min || x > max) throw Invalid{}; }
    int year() { return y; }
    void increment() { y++; if (y > max) throw Invalid{}; }
private:
    int y;
};

ostream& operator<<(ostream& os, Year year){
    return os << year.year();
}

Year operator++(Year& year){
    year.increment();
}

const vector<string> months =
{
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

enum class Month {
    jan, feb, mar, apr, maj, jun, july, aug, sept, oct, nov, dec
};

Month operator++(Month& m){
    m = ( m == Month::dec ) ? Month::jan : Month(int(m)+1);
    return m;
}

ostream& operator<<(ostream& os, Month m){
    return os << months[int(m)];
}

class Date {
private:
    Year year;
    Month month;
    int day;
public:
    class Invalid{};
    Date(): year(Year{2001}), month(Month::jan), day(1) {}
    Date(Year y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid{}; }
    bool is_valid();
    void add_day(int n);
    Year get_year() const { return year; }
    Month get_month() const { return month; }
    int get_day() const { return day; }
};

 bool Date::is_valid(){
    if (day < 1 || day > 31) return false;

    return true;
 }

void Date::add_day(int n){
    day += n;
    if (day > 31){
        ++month;
        day -= 31;
        if (month == Month::jan){
            ++year;
        }
    }
}

} //UDChrono end

int main()
try{
    Chrono::Date today {Chrono::Year{1978}, Chrono::Month::jun, 25};

    cout << "Date: " << today.get_year() << ". "
        << today.get_month() << ' ' << today.get_day() <<".\n";

    Chrono::Date tomorrow {today};
    tomorrow.add_day(1);

    cout << "Date: " << tomorrow.get_year() << ". "
        << tomorrow.get_month() << ' ' << tomorrow.get_day() <<".\n";

    return 0;
} catch (Chrono::Date::Invalid) {
    cout << "Invalid date\n";
    return 1;
} catch (Chrono::Year::Invalid) {
    cout << "Invalid year\n";
    return 1;
} catch (exception& e) {
    cout << e.what() << endl;
    return 1;
}
