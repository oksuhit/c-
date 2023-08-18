#include<bits/stdc++.h>
using namespace std;

class product
{
	private:
		int m,n;

	public:
		void set_data(int x,int y)
		{
			m=x;
			n=y;
		}

		int getm()
		{
			return(m);
		}

		int getn()
		{
			return(n);
		}
};


class Item
{
	private:
		int a,b;

	public:
		void show_data()
		{
			cout<<" \n a="<<a<<" b="<<b;
		}

		Item(product p)
		{
			a=p.getm();
			b=p.getn();
		}

		Item()
		{
			// default constructor
		}
};



int main()
{
	Item i1;
	product p1;
	p1.set_data(3,4);
	i1=p1;
	i1.show_data();
}