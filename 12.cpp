#include<bits/stdc++.h>
using namespace std;

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
			cout<<"\n a: "<<a<<" b: "<<b;
		}

		friend complex1 operator -(complex1);

};

complex1 operator -(complex1 X)
{
	complex1 temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return(temp);
}

int main()
{
	complex1 c1,c2;
	c1.set_data(3,4);
	c2=-c1;
	c2.show_data();
}