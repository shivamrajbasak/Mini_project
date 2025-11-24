#include<stdio.h>
int main()
{
    int n;
    printf("numbers of days");
    scanf("%d",&n);
    int record[n];
    int totalprofit=0, totalloss=0;
    printf("enter the records: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&record[i]);
        if (record[i]>0)
        {
            totalprofit+= record[i];
        }
        else
        {
           totalloss += (-record[i]);
        }
    }
    int netbalance = totalprofit-totalloss;
    printf("profit= %d\n", totalprofit);
    printf("loss = %d\n",totalloss);
    printf("netbalance  =%d\n", netbalance);
return 0;
}