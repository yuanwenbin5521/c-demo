#include <stdio.h>
int main(){
	int num=2,day=0;
	double money;
	while(num<100){
		money+=num*0.8;
		num=num*2;
		day++;
	}
	printf("%f",money/day);
	return 0;
}

