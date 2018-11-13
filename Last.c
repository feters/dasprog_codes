#include<stdio.h>
#include<string.h>

#define b=0;
int main()
{
	char tmp[100];
	int rule=0;
	char text[100][100]={0,0};
	int i,a=0,j,jumlah;
	scanf("%d",&jumlah);
	for(i=0;i<jumlah;i++)
	{
		scanf("%s",text[i]);
	}
	int roll=0;
	while(a==0)
	{
		int para=0;
		for(i=0;i<jumlah;i++)
		{
			for(j=0;j<jumlah;j++)
			{
				if(text[i][roll]==text[j][roll])
				para++;
			}
		}
		
		if(para>3)
		{
			roll++;
		}
		else
		a=1;
	}
	
	printf("%d",roll);
	
	if((roll+1)%2==1)
	{
		for(i=0;i<jumlah;i++)
		{
			for(j=1;j<jumlah;j++)
			{
				strcpy(tmp,text[j]);
				if(text[j][roll]<text[j-1][roll])
				{
					strcpy(text[j],text[j-1]);
					strcpy(text[j-1],tmp);
				}
			}
		}
	}
	
	if((roll+1)%2==0)
	{
		for(i=0;i<jumlah;i++)
		{
			for(j=1;j<jumlah;j++)
			{
				strcpy(tmp,text[j]);
				if(text[j][roll]>text[j-1][roll])
				{
					strcpy(text[j],text[j-1]);
					strcpy(text[j-1],tmp);
				}
			}
		}
	}
	for(i=0;i<jumlah;i++)
	{
		printf("%s\n",text[i]);
	}
}
