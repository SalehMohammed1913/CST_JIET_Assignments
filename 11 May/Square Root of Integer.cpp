#include<bits/stdc++.h>
using namespace std;
double fun(int n)
{
	double l=0,u=n,m,res;
	int count=3;
	while(count!=0)
	{
		m = (l+u)/2;
		res = m*m;
		if(res==n)
		{
			return m;
		}
		else if(res>n)
		{
			u = m;
		}
		else
		{
			l=m;
		}
		count--;
	}
	return m;
}
int main()
{
	int n;
	cout<<"Enter number : ";
	cin>>n;
	double ans = fun(n);
	cout<<"Square root of "<<n<<" is "<<ans<<endl;
}