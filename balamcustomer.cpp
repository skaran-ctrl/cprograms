#include<iostream>
using namespace std;
class Customer
{
	public:
  static float balance(float amount);
};
float Customer::balance(float amount)
{	if(amount>=balance)
		return balance+amount;
	else
		return balance-amount;
}
main()
{
	float amount,balance;
	cout<<"enter balance and amount:";
	cin>>balance>>amount;
	cout<<"balance is:"<<Customer::balance(amount);
}

