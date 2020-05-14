#include<bits/stdc++.h>
using namespace std;
int main()
{

	int i,single=0,n,x;
	vector<int> arr;
	cout<<"Enter number of elements : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>x;
		arr.push_back(x);
	}
	for(i=0;i<arr.size();i++)
	{
		single=single^arr[i];
	}
	cout<<single;
}
