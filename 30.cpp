#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=3;
	cout<< "welcome";

	try
	{
		if(i==1)
			throw 1;
		if(i==2)
			throw 2;
		if(i==3)
			throw 3;
		
		cout<< "\n in try";
	}

	catch(int e)
	{
		cout<<"\n Exception no: "<<e;
	}

	cout<<"\n Last line";
}