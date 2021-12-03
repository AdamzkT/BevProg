#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
    {
        for(int i=0; i < 10; ++i)
            os << a[i] << endl;
    }

void print_array(ostream& os, int* a, int n)
    {
        for(int i=0; i < n; ++i)
            os << a[i] << endl;
    }

void print_vector(ostream& os, vector<int> v, int n)
    {
        for(int i=0; i < n; ++i)
            os << v[i] << endl;
    }

int main()
{
    //Drill part 1
    cout << "array a:" << endl; // 1.feladat array
    int* a = new int[10];
    for(int i=0; i < 10; ++i){
        a[i] = 0;
    }
    for(int i=0; i < 10; ++i){
        cout << a[i] << endl;
    }
    delete[] a;

    cout << "array b:" << endl; // 5.feladat array
    int* b = new int[10];
    for(int i=0; i < 10; ++i){
        b[i] = i+100;
    }
    print_array10(cout,b);
    delete[] b;

    cout << "array c:" << endl; // 6.feladat array
    int* c = new int[11];
    for(int i=0; i < 11; ++i){
        c[i] = i+100;
    }
    print_array(cout,c,11);
    delete[] c;

    cout << "array d:" << endl; // 8.feladat array
    int* d = new int[20];
    for(int i=0; i < 20; ++i){
        d[i] = i+100;
    }
    print_array(cout,d,20);
    delete[] d;

    cout << "vector 1:" << endl; // 5.feladat vector
    vector<int> v1(10);
    for(int i=0; i < 10; ++i){
        v1[i] = i+100;
    }
    print_vector(cout,v1,10);

    cout << "vector 2:" << endl; // 6.feladat vector
    vector<int> v2(11);
    for(int i=0; i < 11; ++i){
        v2[i] = i+100;
    }
    print_vector(cout,v2,11);

    cout << "vector 3:" << endl; // 8.feladat vector
    vector<int> v3(20);
    for(int i=0; i < 20; ++i){
        v3[i] = i+100;
    }
    print_vector(cout,v3,20);

    //Drill part 2
    int* p1 = new int(7);
    cout << "value of p1 = " << p1 << endl
        << "content of p1 = " << *p1 << endl;

    int* p2 = new int[7] {1,2,4,8,16,32,64};
    cout << "value of p2 = " << p2 << endl;
    cout << "contents of p2 =" << endl;
    print_array(cout,p2,7);

    int* p3 = p2;
    p1 = p2;
    p3 = p2;

    cout << "value of p1 = " << p1 << endl
        << "content of p1 = " << *p1 << endl;
    cout << "value of p2 = " << p2 << endl
        << "content of p2 = " << *p2 << endl;

    delete[] p2;

    p1 = new int[10] {1,2,4,8,16,32,64,128,256,512}; // 10-12.feladat array
    p2 = new int[10];
    for(int i=0; i < 10; ++i){
        p2[i] = p1[i];
    }

    vector<int> v4 = {1,2,4,8,16,32,64,128,256,512}; // 10-12.feladat vector
    vector<int> v5(10);
    for(int i=0; i < 10; ++i){
        v5[i] = v4[i];
    }

    return 0;
}
