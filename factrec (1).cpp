#include<stdio.h>
int fact(int n){
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Factorial of the number is:%d",fact(n));
	return 0;
}