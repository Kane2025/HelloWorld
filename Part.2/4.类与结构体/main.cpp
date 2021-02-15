//第四节 类与结构体

/*
* 他来了他来了 他带着面向对象走来了
* 在C++中引入了 类(class) 同时为了兼容C也保留了结构体(struct)
* 它们两个在C++中几乎没有区别 只不过class默认访问权限是私有的(private) 而struct默认是公有的(public)
*/

/* 什么是对象
* 世间万物都是对象 一个个体就是一个对象
* 比如说 你是一位学生 学生是类型 那么我们就可以定义一个类 名为学生
* 然后在他初始化的时候给他取个变量名 比如取名为XiaoMIng 这样我们就创建了一个类型为学生 叫做XiaoMing的对象了
* 创建对象的过程称之为实例化
*/

class student {
	//他有三个成绩 分别是语文 数学 英语
	int chinese, math, english;
	//但是 在class里面他默认是private 我们需要让外部访问这三个成绩
	//那么我们就可以这样声明:
public:
	//在这里就是公有的了
	//在我们开发过程中 变量一般是不暴露给外部的 所以我们写一个setter和getter来设置/获取成绩

	//这是设置语文分数的函数
	void setChinese(int score) {
		//this指的是这个类本身的对象的指针 访问指针对象的值时使用-> 当然你也可以用. IDE会在你按下确认时自动替换成箭头
		this->chinese = score;
	}

	//这是获取语文分数的函数
	int getChinese() {
		return this->chinese;
	}
};

//一个类可以包含基础数据类型、函数、结构体以及其他类
//需要注意的是 类的定义方式和函数一样 需要在定义在调用之前 否则就会出现类型为定义的情况
//我们开发一般把类的定义写在头文件里 类功能的实现写在源文件里

/*
* 下面我们定义一个结构体 他有三个属性
* 分别为语文 数学 英语
*/
struct score {
	//默认共有 外部可以直接访问
	int chinese, math, english;
private:
	//我们声明一个private变量i 外部是无法访问到的
	int i;
};

int main() {
	//实例化也很简单 和声明变量很像 类型 名称
	student XiaoMing;
	//调用他的setter
	XiaoMing.setChinese(100);
	//尝试访问私有属性出错
	//错误:成员“学生：中文”(已声明所在行数：18)不可访问
	//XiaoMing.chinese;

	//结构体同理
	score s;
	s.chinese = 100;
	s.english = 80;
	s.math = 60;
	//错误:成员"score::i”(已声明所在行数:49)不可访问
	//s.i = 100;
}