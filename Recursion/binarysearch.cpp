#include<bits/stdc++.h>
#define MAX_SIZE 10;
using namespace std;

int binarySearch(int a[],int l,int r,int key)

{
int mid;

if(a[mid]==key)
 {
     return mid;
 }

else if(a[mid]>key)
{
    return (a,l,mid-1,key);
}
else if(a[mid]<key)

    return (a,mid+1,r,key);


else
    return -1;
}


int main()
{
    int i,n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n],key;
    cout<<"Enter the key :"<<endl;
    cin>>key;
    cout<<"Enter the values of an array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    cout<<"The position of key is"<<endl;
    cout<<(binarySearch(a,l,r,key))<<endl;

}