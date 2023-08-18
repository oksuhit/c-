#include<bits/stdc++.h>
using namespace std;

class array
{
	private:
		int a[10];

	public:
		void insert(int index, int value)
		{
			a[index]=value;
		}
};

class stack: public array
{
	int top;
	public:
		void push(int value)
		{
			insert(top,value);
		}
};

void main()
{
	stack s1;
	s1.push(34);
	s1.insert(2,56);
}