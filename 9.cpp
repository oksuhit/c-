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

        friend void fun(complex1);   
        // friend function can access any member of the class
        //to which it is friend

        //friend fun cannot access members of the class directly

        //it has no caller object

        //it should not be defined with membership label

        //friend function can become friend to more
        //than one class 
};

void fun(complex1 c)
{
	cout<<"sum is: "<<c.a+c.b;
}

int main()
{
	complex1 c1,c2,c3;
	c1.set_data(2,3);
	fun(c1);
}