#include<stdio.h>
#include<string.h>

int main(){
	/*
	//指针类型的强制转换
	unsigned int a = 98564;
	unsigned int *p = &a;
	printf("*p = %u\n",*p);
	unsigned char *p1 = &a;
	printf("*p = %u\n",*p1);
		
	
	//字符串和指针的关系 %s字符串的格式输出符
	char *p = "hello world";//char型指针可以保存字符串，字符串是常量存在RDATA段不能修改
	printf("%s\n",p);//%s取地址开始的字符串内容
	char str = 'c';
	p = &str;//上面那个字符串的地址丢失，内存泄露（针对常量地址）
	printf("%c\n",*p);
	char * const p1 = "hello world";//指针p1也变成一个常量变量了，不可修改
	*/
	
	//字符串和一维数组的关系
	char str[30] = "hello world";//和字符串赋值给指针一样，只能在初始化定义的时候这么做
	char str1[30];
	str1[1] = 'w';//先定义在赋值只能赋值字符
	printf("%s\n",str);//%s整个字符串打印
	for(int i = 0;i < sizeof(str); i++){
		printf("%c",str[i]);//%c挨个打印字符
	}
	printf("\n");
	int cnt = strlen(str);//获取字符串的长度
	printf("strlen = %d\n",cnt);
	
	str[4] = 'a';//存在栈空间的局部变量可以修改
	printf("%s\n",str);
	char *p = "hello world";
	//p = str;
	//p[4] = '~';
	printf("%s\n",p);
	cnt = strlen(p);
	printf("p strlen: %d\n",cnt);
	cnt = sizeof(p);//sizeof判断指针长度只能是8，无法判断指针指向的数组长度
	printf("p sizeof: %d\n",cnt);
	cnt = strlen(str);
	printf("str strlen: %d\n",cnt);
	cnt = sizeof(str);//sizeof判断整个数组长度，不判断数组中字符串的长度
	printf("str sizeof: %d\n",cnt);
	cnt = strlen("hello world");
	printf("\"hello world\" strlen: %d\n",cnt);
	cnt = sizeof("hello world");
	printf("\"hello world\" sizeof: %d\n",cnt); //C语言字符串后面都有个不可见的'\0'结束符，strlen会忽略并在此结束，sizeof不会忽略并把它算做一个字符
	cnt = strlen("hel\0lo world");
	printf("\"hello world\" strlen: %d\n",cnt);
	char str2[6] = "hello"; //数组定义字符串的时候长度要比可见字符要长一个把'\0'包含进去
	printf("str2: %s\n",str2);
	return 0;
}