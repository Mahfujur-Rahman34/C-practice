#include<iostream>
using namespace std;

template <class T>
void swapp(T &x, T &y)
{
    T temp=x;
    x=y;
    y=temp;
}

void fun(int m,int n,float a,float b)
{
    cout<<"\nBefore swapping: \n";
    cout<<"m is : "<<m<<endl<<"n is : "<<n<<endl;

    swapp(m,n);
    cout<<"\n\nAfter swapping: \n";
    cout<<"m is : "<<m<<endl<<"n is : "<<n<<endl;

    cout<<"\nBefore swapping: \n";
    cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;

    swapp(a,b);
    cout<<"\n\nAfter swapping: \n";
    cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;


    cout<<"\n\n\n";
}

int main()
{
    fun(25,50,66.44,90.32);
}
