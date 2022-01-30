#include<bits/stdc++.h>
using namespace std;
void TwoSum(vector<int>arr, int key)
{
    int n=arr.size();
    int sum;
    for(int i=0;i<n-1;i++)
    {
        sum=0;
        for(int j=1;j<n;j++) //main logic 
        {
            sum=arr[i]+arr[j];      /*it gives O(n^2) solution since it uses two loops in this solution we 
                                    are trying to compute the sum to the given key using two loops.
                                    One loop selects the particular index and another index iterate through the array*/
            if(sum==key)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
}
int main()
{
    int n,key;
    cin>>n>>key;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    TwoSum(arr,key);
}