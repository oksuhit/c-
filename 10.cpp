#include<bits/stdc++.h>
using namespace std;

class B;  //decleared such that void fun(A,B) can identify 
          // B is a class.
class A
{
	private:
		int a;

	public:
		void set_data(int x)
		{
			a=x;
		}
		friend void fun(A,B);
};

class B
{
	private:
		int b;

	public:
		void set_data(int y)
		{
			b=y;
		}
		friend void fun(A,B);
};

void fun(A o1,B o2)
{
	cout<<"sum is: "<<o1.a+o2.b;
}

int main()
{
	A obj1;
	obj1.set_data(3);
	B obj2;
	obj2.set_data(7);
	fun(obj1,obj2);
}