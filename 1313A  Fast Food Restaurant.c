#include<stdio.h>

int main()
{
    long long i,n,a,b,c;

    scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a==0 && b==0 && c==0)
        {
            printf("0\n");
        }

        else if(a>=4 && b>=4 && c>=4)
        {
           printf("7\n");
        }

         else if((a==3&&b>3&&c>3)||(b==3&&a>3&&c>3)||(c==3&&a>3&&b>3))
        {
            printf("6\n");
        }

         else if((a==3&&b==3&&c>3)||(b>3&&a==3&&c==3)||(c==3&&a>3&&b==3))
        {
            printf("6\n");
        }

        else if(a==3 && b==3 && c==3)
        {
           printf("6\n");
        }

        else if((a==2&&b>2&&c>2)||(b==2&&a>2&&c>2)||(c==2&&a>2&&b>2))
        {
            printf("5\n");
        }

        else if((a==2&&b==2&&c>2)||(b>2&&a==2&&c==2)||(c==2&&a>2&&b==2))
        {
            printf("5\n");
        }

        else if(a==2 && b==2 && c==2)
        {
            printf("4\n");
        }

        else if((a==1&&b>1&&c>1)||(b==1&&a>1&&c>1)||(c==1&&a>1&&b>1))
        {
            printf("4\n");
        }

        else if((a==1&&b==1&&c>1)||(b>1&&a==1&&c==1)||(c==1&&a>1&&b==1))
        {
            printf("3\n");
        }

       else if(a==1 && b==1 && c==1)
        {
            printf("3\n");
        }

         else if((a==0&&b>1&&c>1)||(b==0&&a>1&&c>1)||(c==0&&a>1&&b>1))
        {
            printf("3\n");
        }

         else if((((a==0&&b==1)||(b==0&&a==1))&&c>1)||(b>1&&((a==0&&c==1)||(c==0&&a==1)))||(a>1&&((c==0&&b==1)||(b==0&&c==1))))
        {
            printf("2\n");
        }

         else if((a==0&&b==1&&c==1)||(b==0&&a==1&&c==1)||(c==0&&a==1&&b==1))
        {
            printf("2\n");
        }

        else if((a==0&&b==0&&c>0)||(b>0&&a==0&&c==0)||(c==0&&a>0&&b==0))
        {
            printf("1\n");
        }

    }

    return 0;
}

