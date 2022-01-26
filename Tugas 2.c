#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p, sum=0, count=0, n, wd[10], we[10], temp[i];
    printf("Banyaknya proses:");
    scanf("%d", &p);

    for (i=0;i<p;i++)
    {
        printf("\nMasukkan waktu kedatangan dan waktu eksekusi proses[%d]\n",i+1);
        printf("Waktu kedatangan:");
        scanf("%d",&wd[i]);
        printf("Waktu eksekusi:");
        scanf("%d",&we[i]);
        temp[i]=we[i];
    }

    printf("Masukkan waktu kuantum proses:");
    scanf("%d",&n);

    for(sum=0,i=0;p!=0;)
    {
        if (sum==0)
        {
            printf("\n%d\t %d",sum,i+1);
        }
        if(temp[i]<= n && temp[i]>0)
        {
            sum=sum+temp[i];
            temp[i]=0;
            count=1;
            printf("\n%d\t %d\t %d",sum,i+2,i+1);
        }
        else if(temp[i]>0)
        {
            temp[i]=temp[i]-n;
            sum=sum+n;
            printf("\n%d\t %d\t",sum,i,i+1);
        }

        if(temp[i]==0&&count==1)
        {
            p--;
            count=0;
        }

        if(i==p-1)
        {
            i=0;

        }
        else if(wd[i+1]<=sum)
        {
            i=i+1;
            printf("\n%d\t %d\t %d\t",sum,i,i+1);
        }
        else{i=0;}


    }
printf("\nWaktu eksekusi total: %d", sum);
}
