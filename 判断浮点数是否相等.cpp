#include<cstdio>
#include<cstring>

char a[100],b[100];
int i=0,temp1,temp2;

void change(int j)
{
	if(j==0) return ;
	if(a[j]<=9&&b[j]<=9) return ;
	if(a[j]>'9')
	{
		a[j-1]++;
		a[j]-=10;
	}
	if(b[j]>'9')
	{
		b[j-1]++;
		b[j]-=10;
	}
	change(j-1); 
}

int main()
{
	char c;
	memset(a,'0',sizeof(a));
	memset(b,'0',sizeof(b));
	while(a[i-1]!='\n'&&a[i-1]!=' ')
	{
		scanf("%c",&c);
		if(c=='.')
		{
			temp1=i;
			continue;
		}
		a[i]=c;
		i++;
	}
	i=0;
	while(b[i-1]!='\n'&&b[i-1]!=' ')
	{
		scanf("%c",&c);
		if(c=='.')
		{
			temp2=i;
			continue;
		}
		b[i]=c;
		i++;
	}
	if(temp1!=temp2)
	{
		printf("不相等");
		return 0;
	}
	if(a[temp1+5]>='5') a[temp1+4]++;
	if(b[temp1+5]>='5') b[temp1+4]++;
	change(temp1+4);
	a[temp1]=b[temp1]='.';
	for(i=0;i<=temp1+4;i++)
		if(a[i]!=b[i])
		{
			printf("不相等");
			return 0;
		}
	printf("相等");
	return 0;
}
