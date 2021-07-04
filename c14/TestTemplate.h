#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace TestTemplate {
	// ����ʱ��Ҫָ�����е����ͣ���Ҫ�Ǳ�������ʱ��֪�� x,y �����ͣ��޷��Ƶ�������ֵ������
	template <typename R, typename T1, typename T2>
	R add(T1 x, T2 y) {
		return x + y;
	}

/*	��������ʱ��֪�� x,y ������
	template <typename T>
	decltype(x + y) add2(T x, T y) {
		return x + y;
	}
*/

	// C++14����autoʹ�÷������ͺ��ã������Զ��ƶϣ��β����Ϳ��Ը�������Զ��Ƶ�
	template <typename T1, typename T2>
	auto add_auto(T1 x, T2 y) {
		return x + y;
	}

	// ģ��������
	template <>
	auto add_auto(const char* a, const char* b);

//	template<>
//	using AddString = add_auto<std::string, std::string>;

	void test();
}