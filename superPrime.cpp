#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
bool ss(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return false;
	return true;
}
int main()
{
	int sum = 0;
	for(int i = 100; i <= 10000; i++)
	{
		if(!ss(i)) continue;
		int a[10], num, temp;
		memset(a, 0, sizeof(a));
		temp = i;
		num = 0;
		while(temp)
		{
			num++;
			a[num] = temp % 10;
			temp /= 10;
		}
		temp = 0;
		for(int j = 1; j <= num; j++)
			temp += a[j];
		if(!ss(temp)) continue;
		temp = 0;
		for(int j = 1; j <= num; j++)
			temp += a[j] * a[j];
		if(ss(temp))
		{
			cout << i << endl;
			sum += i;
		}
	}
	cout << sum;
}
