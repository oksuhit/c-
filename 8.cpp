#include<bits/stdc++.h>
using namespace std;

class integer
{
	private:
		int x;

	public:
		void set_data(int a)
		{ x=a;}

		void show_data()
		{ cout<<" \n x= "<<x;}

		integer operator++()  //pre increment
		{
			integer temp;
			temp.x=++x;
			return(temp);
		}

		integer operator++(int)  //post incre
		{
			integer i;
			i.x=x++;
			return(i);
		}
};

int main()
{
	integer i1,i2;
	i1.set_data(3);
	i1.show_data();
	i2=i1++;
	i1.show_data();
	i2.show_data();
}