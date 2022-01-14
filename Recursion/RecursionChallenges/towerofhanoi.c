#include<stdio.h>
void TOH(int n, int a, int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("Moved from %d to %d\n",a,c);
        TOH(n-1,b,a,c);
    }
}
int main()
{
    int n;
    printf("Enter the no of disks to be moved:\n");
    scanf("%d",&n);
    TOH(3,1,2,3);

}