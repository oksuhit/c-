#include<bits/stdc++.h>
using namespace std;

class complex1{
    private:
        int a,b;
    
    public:
        // void set_data(int x,int y)
        // { a=x; b=y;}
    
        void show_data() //class member
        {cout<<"\n a= "<<a<<" b= "<<b;}
};

// we have to define the class member function like this,
//if we are using it outside the class
void complex1 :: set_data(int x,int y){
    a=x;
    b=y;
}

int main()
{
    complex1 c1;  //here c1 is an object
    c1.set_data(3,4);
    c1.show_data();
}