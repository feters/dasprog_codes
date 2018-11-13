#include<stdio.h>

struct data
{
	char nama[100];
	int umur;
};

int main()
{
	data data1;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",data1.nama);
		scanf("%d",&data1.umur);
	}
	
}
