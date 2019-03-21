#include <stdio.h>

int res[1000000];
int multiply(int num_size,int x);
int main(void)
{
	long int num,num_size=0,x;

	printf("Input the number: ");
	scanf("%ld",&num);

	long int y=num;
	
	for(int i=0;num!=0;++i)
	{
		res[i]=num%10;
		num/=10;
		++num_size;
	}
	
	for(x=2;x<y;++x)
		num_size=multiply(num_size,x); 

	if(y)
	{
		printf("Factorial: ");
		for(int i=num_size-1;i>=0;--i)
			printf("%d",res[i]);
		printf("\nThe number of digits: %ld\n",num_size);
	}

	else printf("Factorial: 1\nThe number of digits: 1\nwe are the legends\n");

	return 0;
}

int multiply(int num_size,int x)
{
	int size=num_size;
	long int prod,carry=0,i;

	for(i=0;i<num_size;++i)
	{	
		prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}

	while(carry)
	{
		res[i]=carry%10;
		carry/=10;
		++i;
		++size;
	}
	return size;
}
























