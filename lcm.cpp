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
        printf("lcm(%d,%d)=%d\n",a,b,a*b/ans);
        print('*',50);
        putchar('\n');
    }
    return 0;
}


int gcd(int a,int b)
{
    int t;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b)
    {
        t=a%b;
        //printf("%d=%d*%d+%d\n",a,a/b,b,t);
        a=b;
        b=t;
    }
    return a;
}
void print(char c,int n)
{
    for(int i=0;i<n;i++)
        putchar(c);
    putchar('\n');
}
