#include <stdio.h>
double sum(double a,double b){
	double c;
	c=a+b;
	printf("%lf + %lf = %.5lf\n",a,b,c);
	return 0;
}
double subs(double a,double b){
	double c;
	c=a-b;
	printf("%lf - %lf = %.5lf\n",a,b,c);
	return 0;
}
double mult(double a,double b){
	double c;
	c=a*b;
	printf("%lf x %lf = %.5lf\n",a,b,c);
	return 0;
}
double div(double a,double b){
	double c;
	if(b==0){
			printf("Couldn't be divided by 0.\n");
		}else{
		c=a/b;
		printf("%lf / %lf = %.5lf\n",a,b,c);
	}
	return 0;
}
double mod(double a,double b){
	double c;
	if(b==0){
			printf("Couldn't be divided by 0.\n");
		}else{
		c=(int)a%(int)b;
		printf("%d %% %d = %d\n",(int)a,(int)b,(int)c);
	}
}
int main(){
	char c;
	char ch;
	do{
	double num1,num2;
	printf("Please enter a number : ");
	scanf("%lf",&num1);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%lf",&num2);
	fflush(stdin);
	if(c=='+'){
		sum(num1,num2);
	}else if(c=='-'){
		subs(num1,num2);
	}else if(c=='*'){
		mult(num1,num2);
	}else if(c=='x'){
		mult(num1,num2);
	}else if(c=='/'){
		div(num1,num2);
	}else if(c=='%'){
		mod(num1,num2);
	}else{
		printf("Invalid Process!\n");
	}
	fflush(stdin);
	printf("Do you want to continue ? (Y / N) : ");
	scanf("%c",&ch);
	fflush(stdin);
	}while(ch!='N');
	return 0;
}