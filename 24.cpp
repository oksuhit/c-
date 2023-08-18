#include<bits/stdc++.h>
using namespace std;

class dummy
{
	private:
		int a,b;
	public:
		void set_data(int x,int y)
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
	dummy d1;
	d1.set_data(3,4);

	dummy d2=d1;      //shallow copy
	d2.show_data();

}