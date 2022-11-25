#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1="12345";
    string s2="abcde";

    cout<<"\nOriginal string are: ";
    cout<<"s1 is: "<<s1<<endl;
    cout<<"s2 is: "<<s2<<endl;

    cout<<"\n\nplace s1 inside s2 : ";
    cout<<s1.insert(4,s2);

    cout<<"\nRemove 5 charecter from s1: "<<s1.erase(4,5);

    string s5="ABCDEFG";
    string s3=s5;
    string s4="EEEE";

    cout<<"\nReplace operation: "<<s3.replace(2,2,s4);
    cout<<"\nDelete operation: "<<s5.erase(2,2);
    s5=s3+s1+s2;

    cout<<"\nfinal s5 is: "<<s5<<endl;


}
