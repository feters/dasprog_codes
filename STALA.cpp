#include<stdio.h>
int pola[100][100][100];

void he(int a);
int stala2(int d2,int d3,int count1,int a);
int stala(int d2, int d3,int count1);

int main()
{
	int uk;
	scanf("%d",&uk);
	he(uk);
}

void he(int a)
{
	int para1=0,para2=0;	
	int i,j,k,count_bawah=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			for(k=0;k<a;k++)
			{
				scanf("%d",&pola[i][j][k]);
			}
		}
		getchar();
	}
	
	for(j=0;j<a;j++)
	{
		for(k=0;k<a;k++)
		{
			if(pola[0][j][k]==1)
			{
				para1+=stala(j,k,count_bawah);
			}
		}
	}
	
	for(j=0;j<a;j++)
	{
		for(k=0;k<a;k++)
		{
			if(pola[a-1][j][k]==1)
			{
				para2+=stala2(j,k,count_bawah,a-1);
			}
		}
	}
	printf("\n");
	printf("stalagmite : %d\n",para1);
	printf("stalagtite : %d",para2);
}

int stala(int d2,int d3,int count1)
{	
	pola[0][d2][d3]=0;
	if(pola[0][d2][d3+1]==1) 
	{
		count1=1;
		stala(d2,d3+1,count1);
	}
	else	
	if(pola[0][d2][d3-1]==1) 
	{
		count1=1;
		stala(d2,d3-1,count1);		
	}
	else	
	if(pola[0][d2+1][d3]==1)
	{
		count1=1;
		stala(d2+1,d3,count1);		
	} 
	else	
	if(pola[0][d2-1][d3]==1)
	{
		count1=1;
		stala(d2-1,d3,count1);		
	}
	
	return count1; 
}

int stala2(int d2,int d3,int count1,int a)
{	
	pola[a][d2][d3]=0;
	if(pola[a][d2][d3+1]==1) 
	{
		stala2(d2,d3+1,count1,a);
		count1=1;
	}
	else	
	if(pola[a][d2][d3-1]==1) 
	{
		stala2(d2,d3-1,count1,a);
		count1=1;		
	}
	else	
	if(pola[a][d2+1][d3]==1)
	{
		stala2(d2+1,d3,count1,a);
		count1=1;		
	} 
	else	
	if(pola[a][d2-1][d3]==1)
	{
		stala2(d2-1,d3,count1,a);
		count1=1;		
	}
	
	return count1; 
}

