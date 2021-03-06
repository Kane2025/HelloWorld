//第七节 引用(Reference)

#include <iostream>
using std::string;
using std::cout;
using std::endl;

/* 什么是引用？
* 引用是C++引进的东西 它的底层还是指针
* 但是经过封装 它比指针要方便一些
* 经常用于函数传参时
*/

class Student {
	string name_;
public:
	//引用十分简单 只需要在变量名前面加上&符号即可 如下:
	Student(const string &name) {
		//可以发现 它可以直接用诶！
		this->name_ = name;
		cout << "我的名字叫" << name << endl;
	}

	/* 可是 问题来了
	* 为什么我要用引用呢？还要多写一个& 还有为什么要用const呢？const不是常量吗？
	* 不要慌 且听我一一道来
	* 引用的底层是什么？ 指针！
	* 没错 它其实是封装过的指针 它的功能完全可以用指针代替
	* 如下:
	*/

	Student(const string *name) {
		this->name_ = *name;
	}

	/*
	* 这两者是完全一样的
	* 但是 要注意！ 重点来了！
	* 如果你不传引用 而是直接使用了以下形式
	*/

	Student(string name) {
		this->name_ = name;
		cout << "我的名字叫" << name << endl;
	}
	/*
	* 系统就会把我们的字符串拿过来 然后再新建一个对象！！ 然后再把我们的字符串复制到这个对象里！
	* 你看看 这不是明显多此一举嘛！还会造成资源浪费！
	* 传引用就相当于我们把传入的东西给直接拿过来了 让他们直接面对面交流
	* 这样子就不用再“克隆”一遍啦！又省时又省资源 一举两得啊！
	* 至于const 我刚刚说了 指针它可以修改指向对象的值
	* 我们这里加上const他就变成常量指针了  就无法修改他的值了
	* 我们只是用到值 并不需要去修改 所以还是为了防止误操作 加上const
	*/

	/* 哇！引用那么好 那我以后就一直用引用啦！
	* 诶诶诶 别着急 有些情况下是不需要滴
	* 如果要传的东西是基础类型（比如int double等等之类的） 那就不要多此一举啦 太麻烦了！
	* 那么 什么时候要用到引用呢？
	* 当你要传入的值是一个结构体或者是类的时候 再使用引用吧！
	* PS:string是一个class哦! 可以按住ctrl+鼠标左键查看它在C++中的定义！
	*/
};