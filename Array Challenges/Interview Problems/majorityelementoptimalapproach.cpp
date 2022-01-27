#include<iostream>
using namespace std;
int majorCandidate(int arr[],int n)
{
    int count=1;
    int ansIndex=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[ansIndex])
        {
            count++;
        }
        else
            count--;
        if(count==0)
        {
            ansIndex=i;
            count=1;
        }
    }
    return arr[ansIndex];
    
}
bool ismajority(int arr[],int n, int candidate)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
        
    }
    if(count>n/2)
    {
        return true;
    }
    else
    {
        return false;
    } 
}
void printMajority(int a[], int size)
{
    int cand = majorCandidate(a, size);
 
    if (ismajority(a, size, cand))
        cout <<"The majority element is: "<< cand <<endl;
 
    else
        cout << "No Majority Element"<<endl;
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
    int candidate=majorCandidate(arr,n);
    if(ismajority(arr,n,candidate))
        printMajority(arr,n);
    else
        cout<<"No majority is found on the array"<<endl;   

}