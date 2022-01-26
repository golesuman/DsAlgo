#include<iostream>
using namespace std;
void MajorityElement(int arr[],int n)
{
    int index=-1;
    int maxcount=0;
    int count;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
    }
    if (maxcount>n/2)
    {
        cout<<arr[index]<<endl;
    }
    else
        cout<<"No majority element"<<endl;

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
    MajorityElement(arr,n);
}