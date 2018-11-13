#include<stdio.h>

typedef struct data
{
	char nama[100];
	int nrp;
} data;

int main()
{
	data data1[10];
	int i,j;
	data tmp;
	for(i=0;i<5;i++)
	{
		scanf("%s",data1[i].nama);
		scanf("%d",&data1[i].nrp);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			tmp=data1[j];
			if(data1[j].nrp<data1[j-1].nrp)
			{
				data1[j]=data1[j-1];
				data1[j-1]=tmp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%s ",data1[i].nama);
		printf("%d\n",data1[i].nrp);
	}
	
}
