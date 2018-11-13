#include<stdio.h>
#include<string.h>

int main()
{
	char pok1[1000],pok2[20],fuse2[40];
	int f,t,g,l,n,r,p,fd,gd,jumlah,i,a,k;
	scanf("%d",&jumlah);
	a=1;
	n=0;
	scanf("%s",pok1);
	f=strlen(pok1);
	for(i=0;i<=jumlah-2;i++)
	{
		
		scanf("%s",pok2);

		if(f%2==0) fd=f/2;else fd=f/2+1;

		
		g=strlen(pok2);
		 
		if(g%2==0) gd=g/2;else gd=g/2+1;
		
		n=fd;
		/*for(k=0;k<=fd;k++)
		{
			
			pok1[n]=pok1[k];
			n++;
		}*/
		p=0;
		l=n+gd;
		
		for(k=l;k>=l-gd;k--)
		{	
			pok1[k]=pok2[g-p];
			p++;
		}
		
		f=fd+gd;
	}
	for(t=0;t<f;t++) printf("%c",pok1[t]);
	printf("\n");
	
	return 0;
}
