#include<iostream>
using namespace std;
int getLargestsumofSubarray(int arr[],int n)
{
    int i,j,k;
    int largest_sum=0;
    for(i=0;i<n;i++)
    {
        
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(k=i;k<=j;k++)
            { 
                sum+=arr[k];
            }
            largest_sum=max(largest_sum,sum);
             
        }  

    }

    return largest_sum;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The largest sum is:"<<endl;
    cout<<getLargestsumofSubarray(arr,n)<<endl;

}