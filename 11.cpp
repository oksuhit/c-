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

		friend complex1 operator +(complex1,complex1);

};

complex1 operator +(complex1 X, complex1 Y)
{
	complex1 temp;
	temp.a=X.a + Y.b;
	temp.b=X.b + Y.b;
	return(temp);
}

int main()
{
	complex1 c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1+c2;
	c3.show_data();
}