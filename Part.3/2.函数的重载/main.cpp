//第二节 函数的重载(Overload)

/* 什么是重载？
* 举个例子 你需要做两个数的加法
* 但是我们知道 数字有很多种类型
* 比如说我可以两个整数相加
* 也可以一个小数和一个整数相加
* 还可以两个小数相加
* 但是他们都是加法 名字都是同一个
*
* 在程序中 这种函数名称相同 但是参数不同的函数我们称之为函数的重载
*
* 那么它在我们在程序中怎么实现呢？
* 很简单 请看:
*/

int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

/*
* 不难看出来 上面这个例子就是一个非常简单的函数重载
* 那么 系统是怎么判断函数重载的呢？
*
* 很简单！
* 你只要记住 只要形参的个数、形参的类型二者有一个不一样 就属于函数的重载
*/

//我可以不要参数
int Add() {
	return 1 + 1;
}

//我可以给一个参数
double Add(double a) {
	return 1.0 + a;
}

//我可以给不同类型的形参 个数一样
double Add(int a, double b) {
	//这里涉及到类型的强制转换 直接在变量的前面加上(需要转换的类型) 即可
	return (double)a + b;
}

//但是 下面这几个是不行的

//返回值不同不属于重载
//string Add(int a_ ,int b);

//形参名字不一样 不属于重载
//int Add(int x, int y);

class A {
public:
	//当然 之前提到过 重载也适用于构造函数 因为它也是一种函数
	A() {}

	A(int x, int y) {}
};

int main() {
	//我们在main函数里调用试试看吧！

	//调用没有参数的加法
	Add();

	//调用一个参数的加法
	Add(1.0);

	//调用两个整数的加法
	Add(3, 5);

	//调用两个小数的加法
	Add(3.0, 5.0);

	//调用一个整数一个小数的加法
	Add(3, 5.0);

	//这些都是合法的重载
	//动手试一试减法吧！

	return 0;
}