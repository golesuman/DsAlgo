#include<iostream>
using namespace std;
int Power(int b, int n)
{
    if(b==0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return b*Power(b,n-1);
    }
}
int main()
{
    int b,n;
    cout<<"Enter the number and power:"<<endl;
    cin>>b>>n;
    cout<<Power(b,n)<<endl;
}