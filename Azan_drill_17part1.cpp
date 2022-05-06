#include "std_lib_facilities.h"
//4.
ostream& print_array10(ostream& os, int* a)
{
    cout <<"It is array values" <<endl;
	for (int i = 0;i < 10; i++)
		os << a[i] << "\t";
	cout << endl;
    return os;
}
//7.
ostream& print_array(ostream& os, int* a, int n)
{
    cout <<"It is array values" <<endl;
    for (int i = 0; i < n; ++i) os << a[i] << '\t';
    cout << endl;
    return os;
}
ostream& print_vector(ostream& os, vector<int>& v)
{
    cout <<"It is vector values" <<endl;
    for (int vs : v) os << vs << '\t';
    cout <<endl;
    return os;
}

int main()
{
	//1
	int* arr1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
    //2
	for (int i = 0;i < 10;i++)
		cout << arr1[i] << "\t";
	cout << endl;
    //3
	delete[] arr1;
    //5
    int* arr10 = new int[10];
    int x = 100;
    int y = 10;
    for (int i = 0; i < y; ++i) {
        arr10[i] = x;
        ++x;
    }
    print_array10(cout, arr10);
	delete[] arr10;
    //6
    int* arr11 = new int[11];
    y=11;
    x=100;
    for (int i = 0; i < y; ++i) {
        arr11[i] = x;
        ++x;
    }
    //8
    int* arr20 = new int[20];
    x = 100;
    for (int i = 0; i < 20; ++i) {
        arr20[i] = x;
        ++x;
    }
    print_array(cout, arr20, 20);
    delete[] arr20;
    // vector
    //
    vector<int> v10(10);
    x = 100;
    for (int& v : v10) {
        v = x;
        ++x;
    }
    print_vector(cout, v10);
    vector<int> v11(11);
    x = 100;
    for (int& v : v11) {
        v = x;
        ++x;
    }
    print_vector(cout, v11);
    vector<int> v20(20);
    x= 100;
    for (int& v : v20) {
        v = x;
        ++x;
    }
    print_vector(cout, v20);
    return 0;

}