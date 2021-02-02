#include <stdio.h>

/*
add()
isEven()
sub()
multiplication()
factorial()
prime()
mod()
division()
max()   of three numbers
character()

after all use switch case...
*/

int main()
{
	int number;
	printf(" 1.add()\n 2.isEven()\n 3.sub()\n 4.multi()\n 5.factorial()\n 6.prime()\n 7.mod()\n 8.division()\n 9.max()\n 10.isCapitalLetter()\n");
	printf("\nEnter a number for any function : ");
	scanf("%d",&number);

	// function definition
	void add(void);
	void isEven(void);
	void sub(void);
	void multi(void);
	void factorial(void);
	void prime(void);
	void mod(void);
	void division(void);
	void max(void);
	void isCapitalLetter(void);

	// function call using switch case...

	switch(number){
		case 1:
		add();
		break;

		case 2:
		isEven();
		break;

		case 3:
		sub();
		break;

		case 4:
		multi();
		break;

		case 5:
		factorial();
		break;

		case 6:
		prime();
		break;

		case 7:
		mod();
		break;

		case 8:
		division();
		break;

		case 9:
		max();
		break;

		case 10:
		isCapitalLetter();
		break;

		default:
		printf("Invalid Input\n");
	}
}

	// function define
	void add(void){
		int a,b,c;
		printf("Enter two numbers : ");
		scanf("%d %d",&a,&b);
		c=a+b;
		printf("The sum is %d\n",c);
	}

	void isEven(void){
		int a;
		printf("Enter a number : ");
		scanf("%d",&a);
		if(a%2==0){
			printf("This number is even\n");
		}
		else{
			printf("This number is odd\n");
		}
	}

	void sub(void){
		int a,b,c;
		printf("Enter two numbers : ");
		scanf("%d %d",&a,&b);
		c=a-b;
		printf("The sub. is %d\n",c);		
	}

	void multi(void){
		int a,b,c;
		printf("Enter two numbers : ");
		scanf("%d %d",&a,&b);
		c=a*b;
		printf("The multi. is %d\n",c);		
	}

	void factorial(void){
    	int i, n, ans = 1;
    	printf("Enter a number : ");
    	scanf("%d", &n);
    	for (i = n; i > 0; i--){
    	    ans *= i;
    	}
    	printf("Ans is : %d\n", ans);
	}

	void prime(void){
		int n,i,m=0,flag=0;    
		printf("Enter a number : ");    
		scanf("%d",&n);    
		m=n/2;    
		for(i=2;i<=m;i++){    
			if(n%i==0){    
				printf("Number is not prime");    
				flag=1;    
				break;    
			}
		}  
		if(flag==0)    
		printf("Number is prime"); 
	}

	void mod(void){
		int a,b;
		float c;
		printf("Enter two numbers : ");
		scanf("%d %d",&a,&b);
		c=a%b;
		printf("The ans is %.2f\n",c);
	}

	void division(void){
		int a,b;
		float c;
		printf("Enter two numbers : ");
		scanf("%d %d",&a,&b);
		c=(float)a/(float)b;
		printf("The ans is %.4f\n",c);
	}

	void max(void){
		int n1, n2, n3;
    	printf("Enter three different numbers : ");
    	scanf("%d %d %d", &n1, &n2, &n3);

    	if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    	if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    	if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);
	}

	void isCapitalLetter(void){
    	char ch;
    	printf("Enter the input : ");  
    	scanf(" %c",&ch);
    	if(ch>=65 && ch<=90){
    		printf("This a capital letter\n");
    	}
    	else if(ch>=97 && ch<=122){
    		printf("This a small letter\n");    		
    	}
	}