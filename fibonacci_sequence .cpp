#include <stdio.h>

int fibonacci(unsigned long long int x){
	if (x == 1) return 1;
	if (x == 0) return 0;
	if (x > 1) return (fibonacci(x-1) + fibonacci(x-2));	//after you enter 40 for x this goes crazy
}

int fibonacci1(int x){
	int f[4];
	unsigned long long int a=0;	unsigned long long int b=1;	unsigned long long int c;	int i;	//i've used long long int because 
														//where recursive starts to take too long
														// int starts to limit the number forthis method
	for(i=0;i<x-1;i++){											//and unsigned because we are not working with negative numbers
		c=b+a;
		a=b;
		b=c;
	}
	return c;
}

int main(){
	int i;
	printf("Which term of the Fibonacci sequence should be shown?\n");
	scanf("%d",&i);
	int f=0; int f1=0;
	if(i == 1){
		printf("1");
	}
	if(i == 2){
		printf("1");
	}
	if(i > 2){
		printf("Simple Solution: %lli\n", fibonacci1(i) );	//simple way is on top because both of them can calculate i<30 pretty fast but
		printf("Recursive Solution: %lli", fibonacci(i) );	//when i>30 recursive method takes too long and its really easy to show which one is faster
	}

	// f[5] = f[4] + f[3]
	// f[5] = f[3] + f[2] + f[2] + f[1]
	// f[5] = f[2] + f[1] + f[1] +f[0] + f[1] + f[0] + f[1]
	// f[5] = f[1] + f[0] + f[1] + f[1] +f[0] + f[1] + f[0] + f[1]

	return 0;
}
