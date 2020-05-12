#include<bits/stdc++.h>
#define mod 1000000000
using namespace std;
int path(int A) {
    long long  int C[A];
    C[0]=C[1]=1;
    for(int i=2;i<A;i++)
    {
        C[i]=0;
        for(int j=0;j<i;j++)
        {
            int x=(C[j]%mod*C[i-j-1]%mod)%mod;
            C[i]+=x;
            C[i]=C[i]%mod;
        }
    }
    
    return C[A-1];
}
int main()
{
	int n;
	cout<<"Enter size of grid : ";
	cin>>n;
	cout<<"Result = "<<path(n);
}