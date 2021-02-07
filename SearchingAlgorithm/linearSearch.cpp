#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key)
{
     for(int i=0;i<n;i++)
     {
          if(arr[i]==key)
          {
               return i;
          }
     }
     return -1;
}
int main()
{
     int n,a[50],key;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     cout<<"Enter the key:"<<endl;
     cin>>key;
     cout<<LinearSearch(a,n,key)<<endl;
     
}