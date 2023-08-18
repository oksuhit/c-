#include<bits/stdc++.h>
using namespace std;

//primitive to class type conversion

class complex1
{
	private:
		int a,b;

	public:

		complex1()      //convert by using constructor
		{
			//default constructor
		}

		complex1(int k)
		{
			a=k;
			b=0;
		}

		void set_data(int x, int y)
		{
			a=x;
			b=y;
		}

		void show_data()
		{
			cout<<"\n a="<<a<<" b="<<b;
		}
};

int main()
{
	complex1 c1;
	int x=5;
	c1=x;
	c1.show_data();
}