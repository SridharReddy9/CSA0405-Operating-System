#include<stdio.h>
int main()
{
	int p[10],bt[10],wt[10],tat[10],total_wt=0,total_tat=0,i,j,n;
	float avg_wt,avg_tat;
	printf("Enter number of Process :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter burst time for process :P%d  :  ",i);
		scanf("%d",&bt[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",bt[i]);
	}
	wt[1]=0;
	for(i=2;i<=n;i++)
	{
		wt[i]=0;
		for(j=1;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		total_wt=total_wt+wt[i];
	}
	printf("Total Waiting Time = %d\n",total_wt);
	avg_wt=total_wt/n;
	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
		total_tat=total_tat+tat[i];
	}
	avg_tat=total_tat/n;
	printf("Average Waiting Time :  %f\n",avg_wt);
	printf("Average Turn Arount Time :  %f\n",avg_tat);
}
