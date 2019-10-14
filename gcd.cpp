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
	
	scanf("%d%d",&m,&n);
	swap();
	while(m%n!=0)
	{
		tmep=m%n;
		m=n;
		n=tmep;
	}
	if(n==1) printf("ª•÷ ");
	else printf("%d",n); 
} 
