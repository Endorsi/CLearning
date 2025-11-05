#include<stdio.h>

//指针指向特定内存地址的一个标记，可以用来关联不同基本类型的变量与函数，数组等元素
//指针是有数据类型的，既有基本数据类型，也有数组类型，也有函数类型
int main(){
	
	/*
	int a = 100;
	printf("a = %d\n",a);
	printf("a addrval = %d\n",*&a);
	int *p = &a;//定义一个int型的指针指向a变量的地址，等式两边都是int型的地址
	//*p在定义的时候表示定义指针的类型，在非定义的时候表示*()取()中的内容
	//定义好指针后，使用p不用加p
	printf("a pointerval = %d\n",*p);//*p表示取p指向空间的内容
	
	//指针本身也是变量也要占内存空间，32位系统占用4个字节，64位系统占用8个字节
	//64位系统的地址也是64个二进制，指针空间保存的就是数据类型int short等等的首地址（64位）
	//int型指针，指的是存储的地址往后数四个字节
	int *p;
	printf("int length = %zu\n",sizeof(int));
	printf("pointer int length = %zu\n",sizeof(int *));
	short *p1;
	char *p2;
	printf("pointer short length = %zu\n",sizeof(short *));
	printf("pointer char length = %zu\n",sizeof(char *));
	
	*/
	
	/*
	char num[128] = {10,20,30,40,50,60};
	char *p = num;
	printf("num[0] = %d\n",p[0]);
	printf("num[1] = %d\n",p[1]);
	printf("num[2] = %d\n",p[2]);
	for(int i = 0; i < sizeof(num); i++ ){
		if(i < 6){
		printf("num[%d] = %d\n",i, num[i]);
		printf("p[%d] = %d\n",i, p[i]);
		printf("*(num + %d) = %d\n",i, *(num+i));
		printf("*(p + %d) = %d\n",i, *(p+i));//p+1仍然是像char型一样加1，而不是加了八个字节
		}
	} 
	char cnt[128] = {'a', 'b', 'c', 'd', 'e', 'f'};
	p = cnt;
	for(int i = 0; i < sizeof(cnt); i++ ){
		if(i < 6){
		printf("cnt[%d] = %c\n",i, cnt[i]);
		printf("p[%d] = %c\n",i, p[i]);
		printf("*(cnt + %c) = %c\n",i, *(cnt+i));
		printf("*(p + %d) = %c\n",i, *(p+i));//p+1仍然是像char型一样加1，而不是加了八个字节
		}
	} 
	*/
	
	
	
	return 0;
}
