/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	// 1.

	int a,b;

	printf("ENTER A : ");
	scanf("%d",&a);

	printf("ENTER B : ");
	scanf("%d",&b);

	int sum = a+b;
	
	printf("Sum of A and B are %d",sum);

	// .

	printf("\nA,B are :%d,%d",a,b);

	// 2.:)

	float r;
	printf("r is :");
	scanf("%f",&r);

	float area = 3.14*r*r;

	printf("Area of circle is: %f",area);

	// .

	int a,b;

	printf("ENTER LENGTH :");
	scanf("%d",&a);
	printf("Enter Base :");
	scanf("%d",&b);

	printf("Area OF rectangle is :%d\n",a*b);
	printf("Perimeter OF rectangle is :%d\n",(a+b)*2);

// 	3. :)

	int a=20;
	int b=10;
	int sum=a+b;
	int sub=a-b;
	printf("20+10= %d",sum);
	printf("20-10= %d",sub);

	// .

	int a,b,c;

	printf("ENTER A : ");
	scanf("%d",&a);

	printf("ENTER B : ");
	scanf("%d",&b);

	printf("ENTER C : ");
	scanf("%d",&c);

	int x = a/b-c;

	printf("X is : %d",x);

	// 	4.:)
	int m,m1,m2;

	printf("ENTER YOUR RESPECTIVE MARKS :");
	scanf("%d%d%d", &m, &m1, &m2);

	printf("Chemistry Marks:%d\n",m2);
	printf("Maths Marks :%d\n",m1);
	printf("English Marks :%d\n",m2);

	int total = m+m1+m2;

	int percentage = total / 3;

	printf("Your Total No. of marks is : %d\n",total);

	printf("Your percentage is :%d % \n",percentage);

	// 	5.:)

   float Celcius,fahrenheit;

	printf(" \nEnter the Temparature in fahrenheit : ");
	scanf("%f",&fahrenheit);

	Celcius = ((fahrenheit-32)*5)/9;
	printf(" \nTemperature in Celcius : %f ",Celcius);

	// 6.:)

	int salary,hra,da,gross;
	printf("Enter salary : ");
	scanf("%d",&salary);

	if(salary<1500) {

		hra=salary*0.10;
		da=salary*0.90;
		gross=salary+hra+da;
		printf("\nThe GROSS SALARY: %d",gross);

	} else if(salary>=1500) {
		hra=500;
		da=salary*0.98;
		gross=salary+hra+da;
		printf("\nThe GROSS SALARY: %d",gross);
	}

	// .

	int n;
	int fact = 1;
	printf("Enter a number :");
	scanf("%d",&n);

	for (int i=1; i<=n; i++) {
		fact=fact*i;
	}
	printf("Factorial is :%d",fact);

	// 	7.:)

	int age,noyw;

	printf("\n Age is : ");
	scanf("%d",&age);

	printf("\n noyw is : ");
	scanf("%d",&noyw);

	if(age<=56) {
		if(noyw>=4) {
			printf("Eligible");
		}
	}else {
		printf("Not Eligible");
	}

	// 	8.:)

	float per,sum,s1,s2,s3,s4,s5;

	printf("enter your marks : ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

	sum=s1+s2+s3+s4+s5;
	per=sum/5;

	printf("your percent is %f %",per);

	if (per >= 60){
		printf("\n first division");
	}
	else if ( (per >= 50) && (per <=59) ){
		printf("\n second division");
	}
	else if ( (per >= 49) && (per <= 40 ) ){
		printf("\n third division");
	}
	else if (per < 40 ){
		printf("\n fail");
	}

//   9.:)

	char op;
	int a, b;

	printf("Enter a & b INTEGERS: ");
	scanf("%d%d", &a, &b);

	printf("Enter OPERATOR: ");
	scanf(" %c", &op);

	switch(op) {
	case '+' :
		printf("a + b = %d\n", a + b);
		break;

	case '-' :
		printf("a - b = %d\n", a - b);
		break;

	case '/' :
		if (b != 0) {
			printf("a / b = %d\n", a / b);
		} else {
			printf("Error: Division by zero!\n");
		}
		break;

	case '*' :
		printf("a * b = %d\n", a * b);
		break;

	case '%' :
		if (b != 0) {
			printf("a %% b = %d\n", a % b);
		} else {
			printf("Error: Division by zero!\n");
		}
		break;

	default :
		printf("EXIT!!! (THIS IS NOT AN OPERAND)\n");
	}

	// 10.

	int n1=0,n2=1,n3,i,number;
	
	printf("Enter the number of elements:");
	scanf("%d",&number);
	
	printf("\n%d %d",n1,n2);//printing 0 and 1
	for(i=2; i<number; ++i) //loop starts from 2 because 0 and 1 are already printed
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}

// 	11.:)

	int n;
	printf("Enter a number :");
	scanf("%d",&n);

	for( int i = 1 ; i <= 10 ; i++ ) {
		int tab = n * i;
		printf("%d \n", tab);
	}

// 12.

	int num, reversedNumber = 0, remainder;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while(num != 0) {
		remainder = num % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		num /= 10;
	}

	printf("Reversed Number = %d", reversedNumber);


	// 13.

	int year;
	printf("Enter year :");
	scanf("%d",&year);

	if(year%400==0) {
		printf("\nThe year is a leap year%d",year);
		
	} else if(year%100==0) {
		printf("\nThe year is not a leap year%d",year);
		
	} else if(year%4==0) {
		printf("\nThe year is leap year%d",year);
		
	} else {
		printf("\nIts not a leap year%d",year);
	}

// 		14.

	// no.triangle

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	// '*'triangle

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// no.duple triangle

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}

	//Block

	int n=5;
	int m=6;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Inverted Triangle

	int n=4;
	for(int i=n; i>=1; i--) {
		for(int j=1; j<=i; j++) {
			printf("%d",i); //or printf("*");

		}
		printf("\n");
	}

	// 15.

	int i, num, temp = 0;
	printf("Enter the number you want to Check for Prime: ");
	scanf("%d", &num);

	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			temp++;
			break;
		}
	}

	if (temp == 0 && num != 1) {
		printf("%d is a Prime number", num);
	}
	else {
		printf("%d is not a Prime number", num);
	}

	// 16.

	int x,y,n=1;

	printf("enter the base no = \t");

	scanf("%d",&x);

	printf("enter the exponent no = \t");

	scanf("%d",&y);

	for(int i=1; i<=y; i++) {
		n=n*x;
	}
	printf("result of x^y = %d^%d = %d",x,y,n);

// 		.

	int fact (int n);
	int main()
	{

		printf("fact is :%d",fact(5));

		return 0;
	}
	int fact(int n) {
		if(n==1) {
			return 1;
		}
		int factNm1 = fact(n-1);
		int factN = factNm1 * n;
		return factN;

		// 24.


		int swap(int x,int y) {
			int temp=x;
			x=y;
			y=temp;
			printf("\nvalue after swap a= %d and b= %d",x,y);
			return 0;
		    
		}

		int main()
		{
			int a,b;
			printf("enter a:");
			scanf("%d",&a);
			printf("enter b:");
			scanf("%d",&b);
			printf("value of before swap a = %d and b= %d",a,b);
			swap(a,b);
			return 0;
		}