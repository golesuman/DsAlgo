#include<iostream>
void Increasing(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        Increasing(n-1);
        std::cout<<n<<std::endl;
    }
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    Increasing(n);
}