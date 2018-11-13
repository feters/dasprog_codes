#include<Stdio.h>
int ordo;
int arr[100][100]={0,0};

void input();
void process();
void check(int s, int t);
int jmlsatu();


int main()
{
	input();
	process();
	printf("%d",jmlsatu());
}



void input()
{
	int i,j;
	scanf("%d",&ordo);
	for(i=0;i<ordo;i++)
	{
		for(j=0;j<ordo;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	getchar ();
	}
}

void process()
{
	int jml=0;
	int i,j;
	for(i=0;i<ordo;i++)
	{
		for(j=0;j<ordo;j++)
		{
			jml+=arr[i][j];
		}
	}
}

void check( int s, int t)
{
	int y=0;
	if(arr[s+1][t]==1 ||
	arr[s-1][t]==1 || 
	arr[s][t+1]==1 ||
	arr[s][t-1]==1) arr[s][t]=1; else arr[s][t]=0; 
}

int jmlsatu()
{
	int jml=0,i,j;
	for(i=0;i<ordo;i++)
	{
		for(j=0;j<ordo;j++)
		{
			if(arr[i][j]==1) jml++; 
		}
	}
	return jml;
}
