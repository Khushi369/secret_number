#include<stdio.h>
#include<math.h>

int main(){
	double a,b;
	char op;
	printf("enter a number");
	scanf("%lf", &a);
    printf("enter a operator");
	scanf(" %c", &op);
	printf("enter a number");
	scanf("%lf", &b);
		
	if(op=='+'){
		printf("SUM IS %f",a+b);
	}
	  	else if(op=='-'){
		printf("DIFFERENCE IS %f",a-b);
	}
		else if(op=='*'){
		printf("PRODUCT IS %f",a*b);
	}
		else if(op=='/'){
		printf("DIVISION IS %f",a/b);
	}
	else{
		printf("INVALID OPERATION");
	}
}
