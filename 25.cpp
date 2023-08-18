#include<bits/stdc++.h>
using namespace std;

class dummy
{
	private:
		int a,b;
		int *p;

	public:

		dummy()
		{
			p=new int;
		}

		void set_data(int x,int y,int z)
		{
			a=x;
			b=y;
			*p=z;
		}

		void show_data()
		{
			cout<<"\n a="<<a<<" b="<<b<<" c="<<*p;
		}

		dummy(dummy &d)      //deep copy,because new pointer is also coppied
		{
			a=d.a;
			b=d.b;
			p=new int;
			*p=*(d.p);
		}
};

int main()
{
	dummy d1;
	d1.set_data(3,4,5);
	dummy d2=d1;

	d2.show_data();
}