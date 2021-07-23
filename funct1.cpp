#include<stdio.h>

int sum(int x,int y){
	return x+y;
}
int mul(int x,int y){
	return x*y;
}

int max(){
	int data[]={10,5,30,33,15};
	
	int maxi=0;
	int i;
		
	for(i=0;i<5;i++){
    	
  	if(maxi>data[i]){
  		maxi=maxi;
	  }
	  else if(maxi<data[i]){
	  	maxi=data[i];
	}
	else if(maxi==data[i]){
		maxi=data[i];
	}

  }
  return maxi;

}
float poly(float a,float b,float c,float z){

	return (a*z*z)+(b*z)+c;
}

int main()
{
	printf("%d\n",sum(5,6));
	printf("%d\n",mul(5,6));
	printf("%.2f\n",poly(5,3,6,7));
	printf("MAX : %d\n",max());
	



}