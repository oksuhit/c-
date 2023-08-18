#include<bits/stdc++.h>
using namespace std;

//class to primitive type conversion

class complex1
{
	private:
		int a,b;

	public:

		void set_data(int x, int y)
		{
			a=x;
			b=y;
		}

		void show_data()
		{
			cout<<"\n a="<<a<<" b="<<b;
		}

		operator int()  //by using casting operator
		{
			return(a);
		}
};

int main()
{
	complex1 c1;
	c1.set_data(3,4);
	c1.show_data();

	int x;
	x=c1;
	cout<<"\n x="<<x;
}