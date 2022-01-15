#include<iostream>
using namespace std;
int Partition(int a[],int l , int r)
{
    int pivot=l;
    int i=l;
    int j=r;
    while(i<j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    return j;


    
}

void Quicksort(int a[],int l, int r)
{
    if(l<r)
    {
    int pos=Partition(a,l,r);
    Quicksort(a,l,pos-1);
    Quicksort(a,pos+1,r);
    }
}

int main()
{
    int a[]={13,87,4,3,2};
    int n = sizeof(a)/sizeof(int);
    int l=0;
    int r=n-1;
    Quicksort(a,l,r);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
}