#include<iostream>
using namespace std;
void Reversed(int arr[],int n)
{
    int s,e;
    s=0;
    e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int i;
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The array before reversing"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    Reversed(arr,n);
    cout<<"The reversed array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
}