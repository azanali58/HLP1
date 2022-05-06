#include "std_lib_facilities.h"
//1. Define a global array of int type
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
//2 & 3
void f(int ai[], int n)
{
    int la[10] = { };
    for (int i = 0; i < n; ++i) la[i] = ai[i];

    cout << "Local copy\n";
    for (const auto& a : la)
        cout << a << ' ';
    cout << '\n';

    int* p = new int[n];
    for (int i = 0; i < n; ++i) p[i] = ai[i];
    
    cout << "Pointer to free store\n";
    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p;

}
//4.Main and calling things
int fact(int n) 
    {
        return n > 1 ? n*fact(n-1) : 1; 
    }
int main()
{
    try {
        
        cout << "DOUBLING array\n";
        f(ga, 10);

        int aa[10] = {};
        for (int i = 0; i < 10; ++i)
            aa[i] = fact(i + 1);

        cout << "Factorial array\n";
        f(aa, 10);
        return 0;
    }
    catch(std::exception& e) {
        cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    catch(...) {
        cerr << "Unknown exception\n";
        return 2;
    }
}