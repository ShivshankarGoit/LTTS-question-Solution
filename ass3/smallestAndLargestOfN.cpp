/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int smallestOfNNumber(int num, int *a);
 int largestOfNNumber(int num, int *a);
int main(){
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	int a[num];
	for(int i=1;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	int result =smallestOfNNumber( num, a);
 	int result2 = largestOfNNumber( num, a);
	printf("Smallest Number :%d\n",smallestOfNNumber( num, a));
 	printf("Largest Number :%d",largestOfNNumber(num,a));
  return 0;
}
int smallestOfNNumber(int num, int *a){
	 int i=1;
	 int tamp =a[i];
	for(int i=num;i>=1;i--){
		 
            
     	if(tamp>a[i+1])
	       { 
		       tamp= a[i+1];
		      // a[i+1]=a[i];
		       a[i]=tamp;
	       }
	   
	}
	return tamp;
}
int largestOfNNumber(int num, int *a){
	 int i=1;
	 int tamp =a[i];
	for(int i=1;i<num;i++){
		 
            
     	if(tamp<=a[i+1])
	       { 
		       tamp= a[i+1];
		      // a[i+1]=a[i];
		       a[i+1]=tamp;
		       
	       }
	     
	}
	return tamp;
}
