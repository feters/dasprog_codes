#include<stdio.h>
#include<string.h>

int main()
{
	
	int t,i,p,k,r,m,n,h[100];
	char text[100];
	char satu[8]={'A','E','I','O','U','Y','W','H'};
	char dua[4]={'B','P','F','V'};
	char tiga[8]={'C','S','K','G','J','Q','X','Z'};
	char empat[2]={'D','T'};
	char lima[1]={'L'};
	char enam[2]={'M','N'};
	char tujuh[1]={'R'};
	char nol[1]={' '};
	scanf("%d",&t);
	gets(text);
	
	if(t>=1 && t<=20)
	{
		
		for(k=1;k<=t;k++)
		{
			
			gets(text);
			printf("Kode #%d : ",k);
			p=strlen(text);
			for(i=0;i<p;i++)
			{
				for(m=0;m<=7;m++)
				{
					if(text[i]==satu[m]) printf("1");
				}
				for(m=0;m<=3;m++)
				{
					if(text[i]==dua[m]) printf("2");
				}
				for(m=0;m<=7;m++)
				{
					if(text[i]==tiga[m]) printf("3");
				}
				for(m=0;m<=1;m++)
				{
					if(text[i]==empat[m]) printf("4");
				}
				
				
				if(text[i]==lima[0]) printf("5");
				
				for(m=0;m<=1;m++)
				{
					if(text[i]==enam[m]) printf("6");
				}
				
				
				if(text[i]==tujuh[0]) printf("7");
				
				
				
				if(text[i]==nol[0]) printf("0");
				
			}
			printf("\n");
		}
	}
	return 0;
}
