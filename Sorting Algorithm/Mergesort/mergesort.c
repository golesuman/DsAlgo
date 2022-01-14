#include<stdio.h>
void Merge(int a[],int s,int e,int n)
{
    int mid=(s+e)/2;
    int b[n];
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(k=s;k<=e;k++)
    {
        a[k]=b[k];
    }

}
void MergeSort(int a[],int s,int e,int n)
{
    int mid;
    mid=(s+e)/2;
    if(s>=e)
    return;
    else
    {
        MergeSort(a,s,mid,n);
        MergeSort(a,mid+1,e,n);
        Merge(a,s,e,n);
    }

}
int main()
{
    int a[]={3,4,8,2,10};
    int n=sizeof(a)/sizeof(int);
    int s=0;
    int e=n-1;
    MergeSort(a,s,e,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


}