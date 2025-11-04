#include<stdio.h>

int main(){
	

    int num0[10];//定义一个数组，可以是int long short float double型
	for(int i = 0;i < 10;i++){
		num0 [i] = i;	
	}
	for(int i = 0;i < 10;i++){
		printf("num0[%d] = %d\n",i,num0[i]);
	}
	
	int num[5] = {10,20,30,40,50};
	printf("%d\n",num[5]);
	int num1[9] = {1,2};//将数组成员全部定义为0，其他数这样定义的话只有第一个有效
	for(int i = 0;i < 9;i++){
	printf("num1[%d] = %d\n",i,num1[i]);
	}
	
	char num2[4] = {'a','b','c','d'};
	for(int i = 0;i < 4;i++){
	printf("num2[%d] = %c\n",i,num2[i]);
	}
	
	//数组在内存中是连续分布的，数组名本身就是地址名，类似函数名，不需要通过&来获取地址
	printf("num的地址是%zu\n",sizeof(num));//int型数组大小是个数*4个字节
	printf("num1的地址是%zu\n",sizeof(num1));
	printf("num2的地址是%zu\n",sizeof(num2));//char型数组大小是个数*1个字节
    
	printf("num[0] = %d\n",num[0]);
	printf("num[1] = %d\n",num[1]);
	printf("num[2] = %d\n",num[2]);
	printf("add num[0] = %d\n",*num);//num既是数组的第一个成员的地址也是整个数组地址 *(地址)把地址中的内容取出来
	printf("add num[1] = %d\n",*(num+1));//num+1就是数组第一个int变量往后数四个字节，正好是第二个变量的地址
	printf("add num[2] = %d\n",*(num+2));
	
	unsigned int a = 3394350494;
	printf("a = %u\n",*(unsigned short*)&a);//取a的地址，把a地址变为unsigned short 型，然后在用*()把这个打开
	printf("a+1 = %u\n",*((unsigned short*)&a+1));//会打印a二进制的高16位，小端序
	printf("a的地址是 %p\n",(unsigned short*)&a);
	printf("转换后a+1的地址是 %p\n",((unsigned short*)&a+1));//输出的地址比上面大2个字节
	return 0;
}
