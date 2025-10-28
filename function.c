#include<stdio.h>
int spec = 99;//定义在函数外的变量叫做全局变量，可以被之后的函数引用
//局部变量的生命周期从被定义到定义域结束

int add(int a,int b);//在主函数上方声明函数，函数就能放主函数后面了
float div(int a ,int b);
void udfprintf(int a);
int y = 10;

int main(){           
	int d = 100;//带入函数时候会发生类型的强制转换
	int e = 200;
	int f = add(d,e);//调用函数代入 的实参最好和被调函数参数列表的形参类型相同
	printf("f = %d\n",f);
	float g = div(d,e);
	printf("g = %.3f\n",g);
	printf("d = %d\n",d);//只是d的值发生了传递，d本身并未发生改变
	printf("变量a的地址是0x%X\n",&d);
	printf("函数add的地址是0x%X\n",add);//函数名本身就是地址，不需要加&
	printf("函数div的地址是0x%X\n",div);
	printf("main spec1 = %d\n",spec);
	spec ++;//全局变量在程序中具有唯一性，只要在某处被调用发生变化，再次被调用的时候，值已经发生变化
	udfprintf( d);
	printf("main spec2 = %d\n",spec);
	fun();
	return 0; 
}

 int add(int a,int b){  //形参
	int sum = a + b;
	return sum;//返回的值类型和上一级函数接受使用返回值的变量类型相同
}

float div(int a ,int b){       //函数名前的类型决定了返回值的类型，如果不相同，会发生隐形转换
		float c = (float)a / b;//整型直接相除，只会保留整数的结果，这里给a前面加个强制转换
		return c;
}

void udfprintf(int a){
	printf("%d\n",++a);
	printf("fun spec = %d\n",spec);
	spec -= 10;
	return;
}

void fun1(void);
//在定义的局部变量内，同名的局部变量优先级更高
void fun(void){
	int z = 3000;
	printf("z = %d\n",z);
	{
	printf("y = %d\n",y);
	int y = 3;
	printf("y = %d\n",y);
	printf("y = %d\n",y);
	}
	printf("z = %d\n",z);
	fun1();
    return ;
}
void fun1(){
	int y = 9;
	printf("y = %d\n",y);
	
}