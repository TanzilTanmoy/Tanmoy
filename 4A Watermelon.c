#include<stdio.h>
#include<math.h>

int main()
{
    int w,x,y;

    scanf("%d",&w);

    if(x%2==0 && y%2==0 && (w%2==0) && (w!=2))
    {
       w=x+y;
       printf("YES\n");
    }

       else
       {
           printf("NO\n");
       }

    return 0;
}



