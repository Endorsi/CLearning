#include<stdio.h>
#include<string.h>

int main(){
	//一维数组指针
	int arr[5] = {1,2,3,4,5};
	int *p1 = arr;//一维数组的数组名本质是数组类型，应用基本类型数组指针
	printf("数组调用：%d\n",p1[3]);
	printf("指针偏移调用：%d\n",*(p1 + 3));
	
	//二维数组指针
	int array[2][2] = {1,2,3,4};
	int (*p2)[2] = array;
	printf("array addr = %p\n",array);
	printf("p2 addr = %p\n",p2);
	printf("%d\n",p2[0][1]);
	printf("%d\n",**(p2+1));

	//指针数组
	char a[5] = {1,2,3,4,5};
	char b[3] = {10,20,30};
	char c[7] = {0};
	char *p3[3] = {a,b,c};
	printf("p3[0][3]= %d\n",p3[0][3]);
	printf("p3[1][2]= %d\n",p3[1][2]);
	char d = 80;
	char e = 50;
	p3[0] = &d;
	p3[1] = &e;
	printf("p3[0]= %d\n",*p3[0]);
	printf("p3[1]= %d\n",*p3[1]);
	return 0;
}
