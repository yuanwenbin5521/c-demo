#include <stdio.h>
int test(int);
int main(){
	//ѭ��ʵ�ֺ��ӳ���
	int day=10,x=1;
	while(day>1){
		x=(x+1)*2;
		day--;
	}
	printf("%d\n",x);
	//�ݹ� 
	printf("%d\n",test(1));
}
int test(int day){
	if(day==10){
		return 1;
	}else{
		return (test(day+1)+1)*2;
	}
}
