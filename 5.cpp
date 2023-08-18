#include<bits/stdc++.h>
using namespace std;

class complex1
{
	private:
		int a,b;

	public:
		~complex1()
		{
			cout<<"destructor "<<endl;
		}
};

void fun()
{
	complex1 obj;
}

int main()
{
	fun();
}