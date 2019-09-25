#include<iostream>
using namespace std;
	class book
	{	
		private:
		int bookno;
		char title[50];
		float price;
		public:
	void read()
	{	cout<<"bookno:";
		cin>>bookno;
		cout<<"title:";
		cin>>title;
		cout<<"price:";
		cin>>price;
	}
	void show()
	{	cout<< bookno<< ","<< title<< ","<< price<<endl;
	}
};
    main()
	{	book b;
		b.read();
		b.show();
	}

