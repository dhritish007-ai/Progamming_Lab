#include<stdio.h>
int main()
{
	
  char operator;
  float a,b,result;
  
  printf("Enter the operator +,-,*,/ \n");
  scanf("%c",&operator);
  
  printf("Enter the values for two operands \n");
  scanf("%f%f",&a,&b);
  
  switch(operator)
  {
  	case '+':
  		result=a+b;
  		printf("The addition is %f",result);
  		break;
  		
  	case '-':
  		result=a-b;
  		printf("The subtraction is %f",result);
  		break;
  		
  	case '*':
  		result=a*b;
  		printf("The multiplication is %f",result);
  		break;
  		
  	case '/':
  		result=a/b;
  		printf("The division is %f",result);
  		break;
  			
   default:
   printf("error");
   }
   return 0;
   
   }
