/*Kadane's algorithm is used to find the maximum sub array sum and it works on bigOH of n i.e 0(N).
In this algorithm we calculate the sum and take the maximum sum. If the sum becomes less than zero then
we initialize the sum to zero and work for another subarray which doesn't equal to less than zero*/

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