#include<bits/stdc++.h>
using namespace std;
class girl;
class boy
{
	private:
		int incom;
	friend class girl;
	public:
		void in(int x)
		{
			incom = x;
		}
		void sum(girl x);
};
class girl
{
	private:
		int income;
	friend class boy;
	public:
		void input(int z)
		{
			income = z;
		}
		void swap(boy x)
		{
			int temp = x.incom;
			x.incom = income;
			income = temp;
			cout<<"Boy's income = "<<x.incom<<endl;
			cout<<"Girls's income = "<<income<<endl;
		}
};
void boy :: sum(girl x)
		{
			int sum = incom + x.income;
			cout<<"Sum of income = "<<sum<<endl;
		}
		
int main()
{
	boy b;
	girl g;
	b.in(150);
	g.input(850);
	b.sum(g);
	g.swap(b);
	
}
