#include<stdio.h>
int main()
{
int a,b,c,d,e;
    printf("Enetr a : ");
    scanf("%d",&a);
    printf("Enetr b : ");
    scanf("%d",&b);
    printf("Enetr c : ");
    scanf("%d",&c);
    printf("Enetr d : ");
    scanf("%d",&d);
    printf("enter e : ");
    scanf("%d",&e);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                    {
                        printf("a is big");
                    }
                else
                    {
                        printf("e is big");
                    }
            }
            else
            {
                if(d>e)
                    {
                        printf("d is big");
                     }
                else
                    {
                        printf("e is big");
                    }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                    {
                        printf("c is big");
                    }
                else
                    {
                        printf("e is big");
                    }
            }
            else
            {
                if(d>e)
                    {
                        printf("d is big");
                     }
                else
                    {
                        printf("e is big");
                    }
            }
                
        }
    } 
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                    {
                        printf("b is big");
                    }
                else
                    {
                        printf("e is big");
                    }
            }
            else
            {
                if(d>e)
                    {
                        printf("d is big");
                     }
                else
                    {
                        printf("e is big");
                    }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                    {
                        printf("c is big");
                    }
                else
                    {
                        printf("e is big");
                    }
            }
            else
            {
                if(d>e)
                    {
                        printf("d is big");
                     }
                else
                    {
                        printf("e is big");
                    }
            }
                
        }
    }
}