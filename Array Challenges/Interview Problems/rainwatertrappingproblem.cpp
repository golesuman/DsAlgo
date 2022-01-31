#include<iostream>
#include<vector>
using namespace std;
int MaximumWater(vector<int>&arr)
{
    int n=arr.size();
    vector<int>left(n);
    vector<int>right(n);
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--)
    {   
        right[i]=max(right[i+1],arr[i]);

    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=min(left[i],right[i])-arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxnum=MaximumWater(arr);
    cout<<"The maximum water that can be stored is: "<<maxnum<<endl;
}