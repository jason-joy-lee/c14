#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace TestTemplate {
	// 调用时需要指定所有的类型，主要是编译器此时不知道 x,y 的类型，无法推导出返回值的类型
	template <typename R, typename T1, typename T2>
	R add(T1 x, T2 y) {
		return x + y;
	}

/*	编译器此时不知道 x,y 的类型
	template <typename T>
	decltype(x + y) add2(T x, T y) {
		return x + y;
	}
*/

	// C++14，用auto使得返回类型后置，可以自动推断；形参类型可以根据入参自动推导
	template <typename T1, typename T2>
	auto add_auto(T1 x, T2 y) {
		return x + y;
	}

	// 模板特例化
	template <>
	auto add_auto(const char* a, const char* b);

//	template<>
//	using AddString = add_auto<std::string, std::string>;

	void test();
}