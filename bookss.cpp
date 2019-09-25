#include<iostream>
using namespace std;
struct book
{	int bookno;
	char title[50];
	float price;
	void read()
	{	cout<<"bookno:";
		cin>>bookno;
		cout<<"title:";
		cin>>title;
		cout<<"price:";
		cin>>price;
	}
	void show()
	{	cout<< bookno<< ","<< title<<","<< price<<endl;
	
	}
};
main()
{	book *a=new book;
	a->read();
	a->show();
	delete a;
}
