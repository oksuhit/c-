#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("myfile.dat");
	cout<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	fin.seekg(0);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
}