#include<stdio.h>
#include<string.h>

int main()
{
	int h,g,p,q,y,x,o;
	char hasil[10001]={0},get1[10001]={0},wk[1],get2[10001]={0},change1[100001],change2[100001];
	
	
	while(scanf("%s %c %s",get1,wk,get2)!=EOF)
	{
		p=strlen(get1);
		q=strlen(get2);
		y=1;
		
		int trap=p-1;
		for(x=0;x<p;x++)
		{	
			change1[x]=get1[x]-'0';
			trap--;
		}
		
		trap=q-1;
		for(x=0;x<q;x++)
		{
			change2[x]=get2[x]- '0';
			printf("%d",change2[x]);
			trap--;
		}
		
		if(p>q)	 h=p; g=q;
		if(q>p)  h=q; g=p;
		if(p==q) h=p; g=0;
		
		for(g)
		
	}
	
}
