#pragma once

#include <vector>
#include <initializer_list>
#include <iostream>


class TestInitList
{
public:
	std::vector<int> m_vec;

public:
	TestInitList(std::initializer_list<int> argv) {
		for (auto elem : argv)	{
			m_vec.push_back(elem);
		}
	}

	void dump() const;

public:
	static void test();
};

void dump_init_list(std::initializer_list<double> argv);