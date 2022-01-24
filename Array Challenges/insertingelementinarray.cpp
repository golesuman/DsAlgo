#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,3,5,2,9};
    int pos,newele;
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter the position of the element you want to insert:"<<endl;
    cin>>pos;
    cout<<"Enter the new element:"<<endl;
    cin>>newele;
    for(int i=n-1;i>pos;i--)
    {
        arr[i+1]=arr[i];
        arr[pos]=newele;
    }
    cout<<"The new array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}