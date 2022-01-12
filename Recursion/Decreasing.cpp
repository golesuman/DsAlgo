#include<iostream>
using namespace std;
int Decreasing(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        cout<<n<<endl;
        return Decreasing(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the number to which you want the list:"<<endl;
    cin>>n;
    cout<<Decreasing(n)<<endl;
}