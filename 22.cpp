#include<bits/stdc++.h>
using namespace std;

int main()
{
	ofstream fout;
	char ch;
	fout.open("myfile.dat");
	int pos;
	pos=fout.tellp();
	cout<<pos;
}