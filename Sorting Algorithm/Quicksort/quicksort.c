#include<stdio.h>
void QuickSort(int a[],int first, int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        i=first;
        j=last;
        pivot=first;
            while(i<j)
            {
                while (a[i]<=pivot)
                {
                    i++;
                }
                while(a[j]>pivot)
                {
                    j--;
                }

                if(i<j)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;

            QuickSort(a,first,j-1);
            QuickSort(a,j+1,last);
            
        }
}

int main()
{
    int a[]={12,3,4,1,9};
    int n=sizeof(a)/sizeof(int);
    int first=0;
    int last=n-1;
    QuickSort(a,first,last);
}