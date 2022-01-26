#include<iostream>
using namespace std;
void rotatebyone(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void rotaterightbyK(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        rotatebyone(arr,n);
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
    cout<<"Array after right rotation"<<endl;
    rotaterightbyK(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}