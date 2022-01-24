# include<iostream>
using namespace std;
void PrintAllsubarray(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    PrintAllsubarray(arr,n);
}