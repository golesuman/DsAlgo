#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    cout<<"The reversed array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}