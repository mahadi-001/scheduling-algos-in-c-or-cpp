#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y;
	double m,n,value;
	cin>>a>>x>>m;
	cin>>b>>y>>n;
	 value = (m*x)+(n*y);
	 printf("VALOR A PAGAR: R$ %0.2lf\n",value);
	return 0;
}
