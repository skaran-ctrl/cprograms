#include<iostream>
using namespace std;
main()
{	int a,b,c;
	cout<<"enter three numbers:";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<< a << " is bigger";
	else if(b>c)
	cout<<b<<" is bigger";
	else
	cout<<c<<" is bigger";
}
