#include<iostream>
using namespace std;
int subarraywithGivenSum(int arr[],int n,int s)
{
    int sum=0;
    int flag=0;
    int start=0;
    for(int end=0;end<n;end++)
    {   
        sum+=arr[end];
        while (sum>s)
        {
            sum=sum-arr[start];
            start++;
            /* code */
        }
        if(sum==s)
        {
            cout<<start+1<<" "<<end+1;
            flag=1;
            break;
        }
        
        
    }
    if(flag==0)
    {
        cout<<"Elements in an array doesn't add up  to "<<s<<endl;
    }
}

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subarraywithGivenSum(arr,n,s);
}