#include<stdio.h>

//地址操作和地址的强制转换
int main(){
	unsigned int a = 0x5A8C7F2D;
	unsigned char b;
	b = a;//将a的最后两个字节赋给b
	printf("1.b = %c\n",b);
	printf("2.b = 0x%X\n",b);
	*((char *)&b) = *((int *)&a);//a地址转换的int*型四个字节都是有效的，会把低位字节给cha*型的b的地址
	printf("3.b = 0x%X\n",b);
	*((char *)&b) = *((char *)&a+2);//a的地址转换成char*型，有效的只有第一个字节（x86系统小端在前，2D是小端在前）
	printf("4.b = 0x%X\n",b);
	unsigned short c;
	c = *((unsigned short *)&a+1);
	printf("5.c = 0x%X\n",c);
	c = *((int *)&a+1);//相当于int的第一位增加了四个地址，此时输出已经不包含最初的a的内容了
	printf("6.c = 0x%X\n",c);
	c = *((unsigned short *)((unsigned short *)&a+1));
	printf("7.c = 0x%X\n",c);
	return 0;
}


