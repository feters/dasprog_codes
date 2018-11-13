#include<stdio.h>
#include<string.h>
char a[10001];
int i=0;

void check(int g);

int main ()
{
	int g;
	scanf("%s",a);
	g=strlen(a);
	check(g-1);
	return 0;
}

void check(int cek)
{
	if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;
	if(a[cek]>=65 && a[cek]<=90) a[cek]=a[cek]+32;
	int par;
	if(i>=cek)
	{
		printf("Palindrom!\n");
	}else
	if(a[i]==a[cek])
	{
		i++;
		check(cek-1);
	}else 
	{
		printf("Bukan Palindrom!\n");
	}
	
}
