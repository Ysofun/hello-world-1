#include<cstdio>
int m,n,tmep;
void swap()
{
	if(n>m);
	tmep=m;
	m=n;
	n=tmep;
}
int main()
{
	int a,b; 
	scanf("%d%d",&m,&n);
	a=m,b=n;
	swap();
	while(m%n!=0)
	{
		tmep=m%n;
		m=n;
		n=tmep;
	}
	printf("%d",a*b/n);
}  
