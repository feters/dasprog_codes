#include<stdio.h>

int main()
{
	int t,i,f,a=0,m[100]={0},p;
	t=1;
	while(1)
	{
		
		scanf("%d",&a);
		if(a<0) break;
		printf("Kasus #%d : ",t);
		t++;
		f=a;
		
		p=1;
		int r=0;
		int n=1;
		if(a==1)
		printf("1\n");
		else
		{
			do
			{
				if(a%2==0) m[p]=0;
				else m[p]=1;
				a=a/2;
				if(a==1) m[p+1]=1;
				p++;
			}
			while(a>1);
			if(f%2==1)r++;
			for(i=p+r;i>=1;i--)
			{
				if(m[i]==0 && i==p+r)continue;
				printf("%d",m[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
