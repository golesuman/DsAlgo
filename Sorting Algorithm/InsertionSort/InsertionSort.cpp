#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int prev=i-1;
        int current=a[i];
        while(prev>=0 and a[prev]>current)
        {
            a[prev+1]=a[prev];
            prev--;

        }
        a[prev+1]=current;

    }
}
int main()
{
    int a[]={5,3,2,1,6};
    int n=sizeof(a)/sizeof(int);
    InsertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}