#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int degerBak(int sayi, int bit ){
	unsigned short z ;
	unsigned short i = 1 ;
	i=i<< bit ;
	z = sayi & i;
	
	if(z != 0){
		printf("oranin degeri 1 dir\n");
		return 1;
		
	}
	else{
		printf("degeri 0 dir\n");
		return 0;
	
	}
	
}

  
  int  bitKaydir(int x, int y ){
  	int i =0;
	for(i;i<y;i++){
		
		if(degerBak(x,7)==1){
			x=x<<1;
			x=x+1;
		}
		else if(degerBak(x,7)==0){
			x=x<<1;
		}
	}
	return x;
	
}


int main(){
	
	printf("x : %d",bitKaydir(32,1));

	
}
