#include<iostream>
using namespace std;
int rotateByone(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void RotatebyK(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        rotateByone(arr,n);
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array after rotation is :";
    RotatebyK(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}