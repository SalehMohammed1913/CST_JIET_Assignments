#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans;
	cout<<"Enter number of blocks : ";
	cin>>n;
	ans=(-1+sqrt(1+8*n))/2;
	cout<<"Result = "<<ans;
}