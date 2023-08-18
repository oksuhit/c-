#include<bits/stdc++.h>
using namespace std;

class box
{
	private:
		int l,b,h;

	public:
		void set_dimension(int x,int y, int z)
		{
			l=x;
			b=y;
			h=z;
		}

		void show_dimension()
		{
			cout<<"\n l= "<<l<<" b= "<<b<<" h= "<<h;
		}
};

int main()
{
	box small_box;
	small_box.set_dimension(12,10,5);
	small_box.show_dimension();
}