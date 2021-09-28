#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to:\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\nDid you see the game last night? Yeah, me neither.\n";
    cout << "Enter the name of another friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    cout << "Enter m or f accordingly, based on the gender of " << friend_name << ":\n";
    char friend_sex;
    cin >> friend_sex;
    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    else if(friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    cout << "Enter the age of " << first_name << ":\n";
    int age;
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if(age <= 0 || age >= 110)
        simple_error("you're kidding!");
    if(age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if(age == 17)
        cout << "Next year you will be able to vote.\n";
    if(age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\n\n""Mézes B. Ödön";
}