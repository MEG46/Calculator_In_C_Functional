#include <stdio.h>
int sum(int a,int b){
	int c;
	c=a+b;
	printf("%d + %d = %d\n",a,b,c);
	return 0;
}
int subs(int a,int b){
	int c;
	c=a-b;
	printf("%d - %d = %d\n",a,b,c);
	return 0;
}
int mult(int a,int b){
	int c;
	c=a*b;
	printf("%d * %d = %d\n",a,b,c);
	return 0;
}
int div(int a,int b){
	int c;
	c=a/b;
	printf("%d / %d = %d\n",a,b,c);
	return 0;
}
int mod(int a,int b){
	int c;
	c=a%b;
	printf("%d %% %d = %d\n",a,b,c);
	return 0;
}
int main(){
	char c;
	int num1,num2;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	fflush(stdin);
	if(c=='+'){
		sum(num1,num2);
	}else if(c=='-'){
		subs(num1,num2);
	}else if(c=='*'){
		mult(num1,num2);
	}else if(c=='/'){
		div(num1,num2);
	}else if(c=='%'){
		mod(num1,num2);
	}
	return 0;
}
