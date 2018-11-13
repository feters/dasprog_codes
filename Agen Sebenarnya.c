#include<stdio.h>
#include<string.h>

int main()
{
	int p,f,k,i,b,tambah;
	char text[100],r;
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		scanf("%d",&tambah);
		scanf("%s",text);
		f=strlen(text);
		for(r=0;r<f;r++)
		{
			p=text[r]+tambah;
			k=0;
			if(tambah>=26 && tambah<=51) k=32;
			if(text[r]<=90 && text[r]>=65)
			{
				while(p>90)
				{
					p-=26;
				}
				text[r]=p+k;
			}
			else
			if(text[r]<=122 && text[r]>=97)
			{
				while(p>122)
				{
					p-=26;
				}
				text[r]=p-k;
			}else
			
			if(text[r]==' ')text[r]='.';
			else
			if(text[r]=='.')text[r]=' ';
		}
		for(r=0;r<f;r++)
		printf("%c",text[r]);
		printf("\n");
	}
	return 0;
}
