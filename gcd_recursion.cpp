#include<cstdio>
int gcd(int a,int b);
void print(char c,int n);

int main()
{
    int a,b,ans;
    printf("Please enter two number to calculate.\nEnter any character to quit.\n");
    while(scanf("%d%d",&a,&b)==2)
    {
        print('*',50);
        ans=gcd(a,b);
        printf("gcd(%d,%d)=%d\n",a,b,ans);
        print('*',50);
        putchar('\n');
    }
    return 0;
}


int gcd(int a,int b)
{
    if(a<b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(!b)
        return a;
    //printf("%d=%d*%d+%d\n",a,a/b,b,a%b);
    return gcd(b,a%b);
}
void print(char c,int n)
{
    for(int i=0;i<n;i++)
        putchar(c);
    putchar('\n');
}
