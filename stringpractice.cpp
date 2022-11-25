#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Bangladesh";
    string str2="India";

    cout<<"The string str is: "<<str;
    str=str+str2;

    cout<<"\nThe string str is: "<<str;
    cout<<"\nThe concatened str is: "<<str;
    cout<<"\nThe index string 1 is: "<<str[1];
    cout<<"\nThe index string 2 is: "<<str[0];
}
