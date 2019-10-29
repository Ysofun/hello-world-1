#include<cstdio>
int main()
{
	int x[6];
	for(int i=1;i<=5;i++) scanf("%d",&x[i]);
	int temp=0;
	for(int i=1;i<=5;i++)
		for(int j=i+1;j<=5;j++)
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
	for(int i=5;i>=1;i--) printf("%d",x[i]);
	return 0;
}
