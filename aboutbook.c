struct book
{ int bookno;
char title[51];
float price;
struct book *next;
};
struct book *first,*last;
void add()
{ struct book*ptr=malloc(sizeof(struct book));
 ptr->next=NULL;
{
printf("bookno:");
scanf("%d",&ptr->bookno);
printf("title:");
ffush(stdin);
gets(&ptr->title);
printf("price");
scanf(&ptr->price);
}
}
{ if(first==NULL)
first=last=ptr;
else
{last->next=ptr;
last=ptr;
}
}
void show()
{ struct book *ptr=first;
while(ptr!=NULL)
{ printf("%d %s %f\n",ptr->bookno,ptr->title,ptr->price);
ptr=ptr->next;
}
}
main()
{
int choice;
first=last=NULL;
for(;;)
{
	printf("1:add book\n");
	printf("2:show book\n");
	printf("3:exit\n");
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	{ case1:add();
	break;
	case2:show();
	break;
	case3:exit(0);
	default:printf("invalid choice");
	
	}
}
}
