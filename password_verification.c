#include<stdio.h>

int main(){
	printf("你是发送方，请发送四位数字：");
	int a;
	scanf("%d",&a);
	int num0 = a % 10;//得到个位的数字
	int num1 = a % 100 / 10; //得到十位的数字
	int num2 = a % 1000 / 100;//得到百位的数字
	int num3 = a / 1000; //得到千位的数字
	
	printf("请输入你的加密码:");
	int b;
	scanf("%d",&b);
	int temp0 = b % 10;//得到个位的数字
	int temp1 = b % 100 / 10; //得到十位的数字
	int temp2 = b % 1000 / 100;//得到百位的数字
	int temp3 = b / 1000; //得到千位的数字
	
	int ex0 = num0 ^ temp0;
	int ex1 = num1 ^ temp1;
	int ex2 = num2 ^ temp2;
	int ex3 = num3 ^ temp3;
	
	printf("你是接收方，你收到的数字是：%d%d%d%d\n",temp0,temp1,temp2,temp3);
	printf("你是接受方，请输入解密码：");
	scanf("%d",&b);
	temp0 = b % 10;//得到个位的数字
	temp1 = b % 100 / 10; //得到十位的数字
	temp2 = b % 1000 / 100;//得到百位的数字
	temp3 = b / 1000; //得到千位的数字
	
	ex0 = ex0 ^ temp0;
	ex1 = ex1 ^ temp1;
	ex2 = ex2 ^ temp2;
	ex3 = ex3 ^ temp3;
	
	int d = ex0 + ex1 * 10 + ex2 * 100 + ex3 * 1000;
	printf("解密方得到的数字:%d\n",d);
	return 0;
}