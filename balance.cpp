#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
	private:
		int cid;
		char name[51];
		float balance;
	public:
	Customer(int cid,char*name,float balance)
	{ this->cid=cid;
	  strcpy(this->name,name);
	  this->balance=balance;
	}
	void setName(char *name)
	{
		strcpy(this->name,name);
	}
	int getCid()
	{
		return cid;
	}
	char *getName()
	{   return name;
	}
	float getBalance()
	{
		return balance;
	}
	void deposit(float amount)
	{ balance=amount+balance;
	}
	void withdraw(float amount)
	{ balance=balance-amount;
	}
};
main()
{ 
	Customer c(123,"karan",5000);
  	cout<<c.getCid()<<","<<c.getName()<<","<<c.getBalance()<<endl;
    c.deposit(5000);
    c.withdraw(3000);
    cout<<c.getCid()<<","<<c.getName()<<","<<c.getBalance()<<endl;
  
}

