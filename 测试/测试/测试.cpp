// 测试.cpp: 定义控制台应用程序的入口点。
//
#include"stdafx.h"
#include<iostream>
class g {
public:
	g() { std::cout << "Initialize" << std::endl; }
	~g() { std::cout << "Clean up" << std::endl; }
};
g k;
int  main()
{
std::cout << " Hello,  world!\n";
}
