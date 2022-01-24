#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    int arr[n];
    int mx=-100000;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Max element till ith index:"<<endl;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
}