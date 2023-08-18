#include<bits/stdc++.h>
using namespace std;

class complex1{
    private:
        int a,b;
    
    public:
        void set_data(int x,int y)
        { a=x; b=y;}
    
        void show_data()
        {cout<<"\n a= "<<a<<" b= "<<b;}
};

int main()
{
    complex1 c1;  //here c1 is an object
    c1.set_data(3,4);
    c1.show_data();
}