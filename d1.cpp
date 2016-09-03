
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,flag=0;
    char ch;
   //find out a given no is a prime no or not;
    do
    {
        cout<<"Enter any no to check it is prime or not ";
        cin>>a;
        b=sqrt(a);
        flag=a%2;
        for(int i=3; i<b && flag!=0;)
        {
            if(a%3==0)
                flag=0;
            i=i+2;
        }
        if(flag==1)
            cout<<"No is a prime no";
        else
            cout<<"No is not a prime no";
        cout<<endl;
        cout<<"Do you wants to repeat again? Press y for yes and any other key for no. ";
        cin>>ch;
    }while(ch=='y');

    cout<<endl<<"hope you guys will like this";
    return 0;
}
