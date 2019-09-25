main()
{ int bookno;
char title[20],author;
float price;
printf("enter bookno");
scanf("%d",&bookno);
printf("enter title");
gets(title);
printf("enter author");
gets(author);
printf("enter price");
scanf("%f",&price);
printf("%d %s %c %f",bookno,title,author,price);
}
