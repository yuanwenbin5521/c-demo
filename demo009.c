#include <stdio.h>

int test(int);
int main(){
	//Ê¹ÓÃÑ­»·Çó½×³Ë
	int i=2,n=10;
	int ar[]={4,6,1,41,43,41,14,213,1,5};
	int j;
	if(n<=1){
		printf("%d\n",n);
		return 0;	
	}
	int result=1;
	while(i<=n){
		result=result*i;
		i++;
	}
	printf("%d\n",result);
	
	printf("%d\n",test(10));
	
	
	//Ã°ÅİÅÅĞò
	for(i=0;i<10;i++){
		printf("%d\t",ar[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(ar[j]>ar[i]){
				int temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",ar[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(ar[j]<ar[i]){
				int temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",ar[i]);
	}
}

int test(int n){
	if(n==1){
		return 1;
	}else{
		return n*test(n-1);
	}
}


