#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	int *px;
	int a[10];
	a[0]=2;
	a[1]=4;
	px = &x;
	cin >> x;
	cout << "address of x: " << &x <<endl;
	cout << "value of px: " << px <<endl;
	cout << "value at address of px: " << *px << endl;
	*px = 6;
	cout << "x: " << x << endl;
	cout << " px+1= " << px+1 <<endl;
	cout << " *px+1= " << *px+1 <<endl;
	int **ppx = &px;
	cout << "address of px: " << &px << endl;
	cout << "value of ppx: " << ppx << endl;
	cout << "value *ppx: " << *ppx << endl;
	**ppx = 9;
	cout << "x: " << x << endl;
	cout << "a: " << a << endl;
	cout << "*a: " << *a << endl;
	cout << "&a[0]: " << &a[0] << endl;
	cout << "a+1: " << a+1 << endl;
    cout << "&a[1]: " << &a[1] << endl;
    cout << "*(a+1): " << *(a+1) << endl;
}