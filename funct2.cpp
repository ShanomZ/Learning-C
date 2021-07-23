#include<stdio.h>
#include<string.h>

float cal(char ope[5],float ope1,float ope2){
		if(strcmp(ope, "add")==0)
		{
			return ope1+ope2;
		}
		else if(strcmp(ope, "sub")==0){
			return ope1-ope2;
		}
		else if(strcmp(ope, "mul")==0){
			return ope1*ope2;
		}
		else if(strcmp(ope, "div")==0){
				if(ope2==0){
					printf("\nError ");
					return 404;
				}
				else{
					return ope1/ope2;	
				}
		}
		else
		return 404;
	
	
}
int main(){
	char op[5];
	float op1,op2;
	printf("calculator ");
	scanf("%s %f %f",&op,&op1,&op2);
	printf("\nCalculator %s %.2f %.2f",op,op1,op2);

	
	printf("\n%.2f",cal(op,op1,op2));
	
	
	
	
}