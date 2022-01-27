#include<iostream>
using namespace std;
int MaxSubarraySum(int arr[],int n)
{
    int maxi=arr[0];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
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
    int maxsum=MaxSubarraySum(arr,n);
    cout<<"The maximum sum of subarray is "<<maxsum<<endl;
}