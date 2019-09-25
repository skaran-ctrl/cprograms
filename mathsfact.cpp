#include<iostream>
using namespace std;
class Maths
{
	public:
	static int factorial(int n);
};
int Maths::factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}
main()
{
	int n;
	cout<<"enter a no:";
	cin>>n;
	cout<<"factorial is"<<Maths::factorial(n);
}
