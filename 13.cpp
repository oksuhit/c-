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

		friend ostream& operator<<(ostream&,complex1);
		friend istream& operator>>(istream&,complex1&);

};

ostream& operator <<(ostream &dout,complex1 c)
{
	cout<<"\n a= "<<c.a<<" b= "<<c.b;

	return(dout);
}

istream& operator >>(istream &din,complex1 &c)
{
	cin>>c.a>>c.b;

	return(din);
}

int main()
{
	complex1 c1;
	cout<<"enter a complex no. \n";
	cin>>c1;
	cout<<"you entered: ";
	cout<<c1;
}