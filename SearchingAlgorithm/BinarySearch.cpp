#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int s=0,e=n;
    while(s<=e)
    {
         int mid=(s+e)/2;
         if(arr[mid]==key)
         {
              return mid;
         }
         else if(arr[mid]>key)
         {
              e=mid-1;
         }
         else 
         {
              s=mid+1;
         }
    }
     return -1;

}
int main()
{
     int n;
     cin>>n;
     int arr[n];

     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     int key;
     cout<<"\n";
     cin>>key;
     cout<<"\n";
     cout<<BinarySearch(arr,n,key);

}