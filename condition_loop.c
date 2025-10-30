#include<stdio.h>
/*
int a = 100;//已初始化的全局变量，放在DATA段
int b;//未初始化的全局变量，放在BSS段、
//常量放在只读代码段RDATA段
int main(){           
	int b = 200;//局部变量无论初始化没都放在STACK段（栈空间），栈空间同时也是程序运行的内存资源
	const int e = 100;//const把变量修饰为只读型变量（常量），放RDATA段，只有初始化可以赋值，以后不能赋值，也是全局变量
	printf("e = %d\n",e);
	return 0; 
}
*/

//if语句
/* 
int main (){
	int a = 200;
	int b = 400;
	int c = 150;

	if(a == 0){
	printf("第一行代码\n");//条件一满足执行，不执行elseif和else的代码
	}else if(b = 0){
	printf("第二行代码\n");//条件一不成立，条件二满足执行
	}else if (c = 150){
	printf("第三行代码\n");//条件1一和二都不成立，则执行
	}else{	
	}
//if可以单独使用，但是需要挨个判断完全，比较费时；else if和else必须和if结合起来，else if可以有多个，else只能有一个
	if(a = 200){
	printf("第一行代码\n");
	}
	if(b = 400){
	printf("第二行代码\n");
	}
	if(c = 150){
	printf("第三行代码\n");	
	}

	return 0;
} 
*/

//while语句
/*
//延时函数
void delay(){
	int i = 500000000;
	while(i){
		i--;//当i=0进入while时候，退出循环
	}
}
/*
int main(){
	while(1){
		static int a = 100;//加上static，int a 只会定义一次
		a++;
		printf("a = %d\n",a);
	}
	printf("循环结束\n");
} 

int main(){
	printf("第一行代码\n");
	delay();
	printf("第二行代码\n");
	return 0;
}
*/
/*
//break语句
int main(){
	int i = 10;
	while(i){
		printf("i = %d\n",i);
//		break;//出现break直接跳出最近一层循环
		i--;
	}
	printf("i = %d\n",i);
	return 0;
}
*/

//for循环 有限次的循环，可以自己设置循环次数
int main(){
	int i = 100; //循环因子
	int j = 200;
	for(i = 0, j = 0;(i < 10) || (j < 20);i++, j++){ //i小于10的时候进行循环，大于或等于10退出循环
		if(i > 15){
			break;
		}
		printf("i = %d\n",i);
	}
	
	
	return 0;
}

