#include "std_lib_facilities.h"
ostream& print_array(ostream& os, int* a, int n)
{
    cout <<"It is array values" <<endl;
    for (int i = 0; i < n; ++i) os << a[i] << '\t';
    cout << endl;
    return os;
}
int main()
{
    //.1
    int x = 7;
    int* p1 = &x;
    //.2
    cout << "pointer p1: " << p1 << " points to " << *p1 << '\n';
    //.3
    int n= 7;    
    int* p2 = new int[n];
    for (int i = 0; i < n; ++i) {
        p2[i] = pow(2,i);
    }
    //.4
    cout << "array ponter p2 :" << p2 << endl;
    cout << "points to p2 Array : " << endl;
    for (int j = 0; j < n; ++j)
        cout << p2[j] << '\t';
    cout << '\n';
    //.5
    int* p3 = p2;
    //.6
    p2 = p1;
    //.7
    p2 = p3;
    //.8
    cout << "pointer p1: " << p1 << " points to " << *p1 << '\n';
    cout << "pointer p2: " << p2 << " points to " << *p2 << '\n';
    //.9
    delete[] p2;
    //.10
    p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    //.11
    p2 = new int[10];
    //.12
    for (int m = 0; m < 10; ++m)
        p2[m] = p1[m];
    
    for (int k = 0; k < 10; ++k)
        cout << p2[k] << '\t';
    cout << '\n';

    //.12 vectors
    vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int> v2 (10);
    v2 = v1;

    for (int v : v2) cout << v << '\t';

    cout << '\n';


}