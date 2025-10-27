#include<stdio.h>

//地址操作和地址的强制转换
int main(){
//逻辑与运算
/*	int a = -123;
	int b = 5464;
	int d =9999;
	int c =a && b &&d;
	printf("%d\n",c);
//逻辑或运算
	int a = 0;
	int b = 0;
	int c = 0;
	int d = a || b || c;
	printf("%d\n",d);
//逻辑非
	int a = 12423;
	int b = !!a;
	printf("%d\n",b);
//取反
	unsigned short a = 89;//0101 10 01
	unsigned short b = ~a;//~按位取反
//	b |= (0x1 << 6);//将b的第七位变成1
//	b &= ~(0x1 << 8);//将b的第九位变成0
	printf("%u\n",b);


//大于小于，自增自减
	int a = 100;
	int b = 100;
	int c = a >= b;
	printf("c = %d\n",c);
	a++;
	printf("a = %d\n",a);
//	b--;
	printf("b = %d\n",b--);
	printf("b = %d\n",b);	
// ++ -- 位于变量左右边不同，对于下一行，两边都相同；
// ++/--位于变量左边，先递增然后取值，位于右边则先取值在运算
*/

//三目运算符本质是一种逻辑判断，判断a的逻辑，取否（0）时a=c,取是时a=b
	int a = -1213;
	int b = 2;
	int c = 3;
	int d = a ? b : c;
	printf("d = %d\n",d);
	return 0;
}


