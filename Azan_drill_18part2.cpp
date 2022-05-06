// Drill 18.2
#include "std_lib_facilities.h"
using namespace std;
// 1. Global ininitialization of vector  
vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
//2.define function
void f(vector<int> v)
{
    vector<int> lv(10);
    cout<<"copy after initialize"<<endl;
    lv = v;
    for (auto& a : lv)
        cout << a << '\t';
    cout <<endl;
    cout <<"initialize it to be a copy"<< endl;
    vector<int> lv2 = v;
    for (auto& a : lv2)
        cout << a << '\t';
    cout << '\n';
}
//factorial funtion to genrate value for 
int fact(int n) 
{
    return n > 1 ? n * fact(n - 1) : 1; 
}

int main()
 {  
    cout << "DOUBLING array\n";
    f(gv);
    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
    {
        vv[i] = fact(i + 1);
    }
    cout << "Factorial array\n";
    f(vv);
    return 0;
}
