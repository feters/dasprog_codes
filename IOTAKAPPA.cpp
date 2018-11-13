#include<stdio.h>
#include<string.h>
int Iota[100],Kappa[100];

int kappa(int a);
int iota(int b);


int main()
{
	int angka;
	char text[100];
	while(scanf("%s %d",text,&angka)!=EOF)
	{
	if(angka>0 && angka<30)
	{
		if(strcmp(text,"Kappa")==0)
			printf("Kappa(%d)=%d\n",angka,kappa(angka));
		else
		if(strcmp(text,"Iota")==0)
			printf("Iota(%d)=%d\n",angka,iota(angka));
		else
		printf("%s(%d) tidak dikenali.\n ",text,angka);
	}
	else
	printf("%s(%d) tidak dikenali.\n ",text,angka);
	}
}

int iota(int b)
{
	if(b==1 || b==2) return 1; else
	Iota[b]=iota(b-1)+iota(b-2);
	return Iota[b];
}

int kappa(int a)
{
	if(a==0 || a==1) return 1; else
	Kappa[a]=kappa(a-1)+iota(a);
	return Kappa[a];
}
