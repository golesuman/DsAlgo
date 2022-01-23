#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,3,1,8};
    int pos;
    int n=sizeof(a)/sizeof(int);
    cout<<"Enter the position:"<<endl;
    cin>>pos;
     int i;
    cout<<"The deleted item is :"<<a[pos]<<endl;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];

    }
    cout<<"The array after deletion is"<<endl;
    for(int j=0;j<n-1;j++)
    {
        cout<<a[j]<<endl;
    }
}