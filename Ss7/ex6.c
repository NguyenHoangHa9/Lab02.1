void main()
{
int productcode;
float orderamount, rate = 0.0 ;
printf("\n Please enter the product code :");
scanf("%d", &productcode);
printf("Please enter the oder amount :");
scanf(" %f" , &orderamount);
if (productcode == 1)
{
	if (orderamount >= 500 )
		rate = 0.12;
	else if (orderamount >= 300)
		rate = 0.08;
	else 
		rate = 0.02;
}
else if ( productcode == 2)
{
	if ( orderamount >= 2000)
		rate = 0.10 ;
	else if (orderamount >= 1500)
	rate = 0.05;
}
}
