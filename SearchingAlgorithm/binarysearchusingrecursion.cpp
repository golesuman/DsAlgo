#include<iostream>
using namespace std;
int BinarySearch(int a[],int low, int right, int key)
{
    int mid=(low+right)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(key>a[mid])
    {
        return BinarySearch(a,mid+1,right,key);
    }
    else
    {
        return BinarySearch(a,low,mid-1,key);
    }

    return -1;
}
    
int main()
{
    int a[]={1,2,3,4,5};
    int key;
    cin>>key;
    int low=0;
    int n=sizeof(a)/sizeof(int);
    int right=n-1;
    cout<<"The position of the key is:"<<endl;
    cout<<BinarySearch(a,low,right,key)<<endl;
}