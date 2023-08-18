#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<< "welcome";

	try
	{
		throw 10;
		cout<< "\n in try";
	}

	catch(int e)
	{
		cout<<"\n Exception no: "<<e;
	}

	cout<<"\n Last line";
}