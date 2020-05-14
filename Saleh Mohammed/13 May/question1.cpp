#include<bits/stdc++.h>
using namespace std;
class A
{
	private:
		int cm,m;
	public:
		A(int x,int y)
		{
			m = x;
			cm = y;
		}
		void sum(A a, A b)
		{
			int p,q;
			q = a.cm + b.cm;
			p = a.m + b.m;
			if(q>=100)
			{
				p = p + (q/100);
				q = q%100;
			}
			cout<<"Sum of height : "<<p<<" meter "<<q<<" cm "<<endl;
		}
};
int main()
{
	A in1(5,90);
	A in2(5,90);
	in1.sum(in1,in2);

}
