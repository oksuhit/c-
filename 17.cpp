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
	box *p,small_box;
	p=&small_box;
	p->set_dimension(12,10,5);
	p->show_dimension();
}