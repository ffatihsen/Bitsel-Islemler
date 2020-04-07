#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int degerBul(int sayi, int bit){  // verilen bit in 0 mý 1 mi oldugunu bulan fonksiyon
	unsigned short z ;
	unsigned short i = 1 ;
	i=i<< bit ;
	z = sayi & i;
	
	if(z != 0){
	//	printf("oranin degeri 1 dir\n");
		return 1;
		
	}
	else{
	//	printf("degeri 0 dir\n");
		return 0;
	
	}
}

int veyala(int sayi, int deger){  // verilen sayiyi verilen deger ile veya iþlemine sokan fonks.
	unsigned short z ;
	unsigned short i = 1 ;
	i=i<< deger ;
	z = sayi|i;
	return z;
	
}
int vele(int sayi , int deger){  // verilen sayiyi verilen deger ile ve iþlemine sokan fonks.
	unsigned short z ;
	unsigned short i = 1 ;
	i=i<< deger ;
	i=~i;
	z = sayi&i;
	return z;
}


int main(){
	srand(time(NULL));
	int rastgele,a,b;
	FILE *file1, *file2;
	file1 = fopen("sayilar0.txt","w");
	file2 = fopen("sayilar1.txt","w");

	for(int i =0; i<100; i++){
		rastgele=rand()%100;
		if(degerBul(rastgele,5)==0){
				a=veyala(rastgele,4);
	//			printf("yeni sayi :%d\n",a);
				fprintf(file1,"%d\n",a);
		}
		
		else if (degerBul(rastgele,5)==1){
			b = vele(rastgele,3);
	//		printf("1 li yeni sayi :%d\n",b);
			fprintf(file2,"%d\n",b);
		}
	}
	
}
