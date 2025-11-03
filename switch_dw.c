#include<stdio.h>


//switch语句
/*
int main (){
	int num = 2;
	switch(num){  //num必须是整形变量,long int short char
		case 5:
			printf("num = 5\n");
//			break;  //不加break会继续往后执行
		case 4:
			printf("num = 4\n");
//			break;
		case 3:
			printf("num = 3\n");
//			break;
		case 2:
			printf("num = 2\n");
//			break;
		case 1:
			printf("num = 1\n");
			break;			
		default:
			printf("num 不等于1 2 3\n");
			break;
	}
	printf("switch over\n");
	return 0;
} 
*/

//do while 循环

void delay(){
	int i = 50000000;
	while(i)
		i--;
}

int main(){
	int i = 1;
	do{           //while先判断后执行，do while先执行一次在判断
		printf("i = %d\n",i);
		i ++;
		delay();
	}while(i == 2);
	return 0;
}