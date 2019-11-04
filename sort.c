#include<stdio.h>
int main()
{
    int i,j,a[10],temp=0;
    for(i=0;i<5;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}
