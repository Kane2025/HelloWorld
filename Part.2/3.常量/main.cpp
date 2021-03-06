//第三节 常量

#include <iostream>
using std::cout;
using std::endl;

/* 常量 指固定了不会变的值
* 常量的作用:规范一个数值 方便在程序的各处调用
* 常量有两种定义的方式
*一种为宏定义 使用#define 一种是使用const(constexpr)关键词来定义
*/

//第一种形式 这种形式在编译时就会进行全局替换 把PI_DEF替换成3.1415926f
//注意 #define不需要加等于号
#define PI_DEF 3.1415926f

//第二种形式 只需要在定义变量前加上const关键词即可
const float kPiConst = 3.1415926f;

//扩展: 使用constexpr可以告知编译器 这个值在编译的时候就能确定了
constexpr float kPiConstexpr = 3.1415926f;

int main() {
	cout << "PI_DEF的值为:" << PI_DEF << endl;
	cout << "kPiConst的值为:" << kPiConst << endl;
	cout << "kPiConstexpr的值为:" << kPiConstexpr << endl;
}

/* 特别注意:
 * 当你使用宏定义(#define)时 应使用大写字母与下划线的组合  这是宏定义的命名规范
 * 当你使用const constexpr关键词时应使用 以小写字母k开头 并且后面的单词按照驼峰式的规范来命名
 */