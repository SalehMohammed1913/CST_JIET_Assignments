#include<bits/stdc++.h>
using namespace std;
class B
{
	public:
	void area(int height , int base)
	{
		float ans = (height*base)/2;
		cout<<"Area of triangle [using height and base] : "<<ans<<endl;
	}	
	void area(int a,int b,int c)
	{
		int s = (a+b+c)/2;
		float ans;
		ans = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area of triangle [using 3 sides] : "<<ans<<endl;
	}
};
int main()
{
	B x;
	int a,b;
	cout<<"Enter height and base ";
	cin>>a>>b;
	x.area(a,b);
	int s1,s2,s3;
	cout<<"Enter 3 sides : ";
	cin>>s1>>s2>>s3;
	x.area(s1,s2,s3);
}
