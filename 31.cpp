#include<bits/stdc++.h>
using namespace std;

namespace myspace
{
	int a;
	int f1();
	class A
	{
		public:
			void fun1();
	};
}

int myspace::f1()
{
	cout<<"hello f1 \n";
}

void myspace::A::fun1()
{
	cout<<"hello fun1";
}

using namespace myspace;

int main()
{
	a=5;
	f1();
	A obj;
	obj.fun1();
}