#include "TestInitList.h"

void dump_init_list(std::initializer_list<double> argv)
{
	std::cout << "dump_init_list()...";
	for (auto elem : argv) {
		std::cout << elem << "\t";
	}
	std::cout << std::endl;
}

void TestInitList::dump() const
{
	std::cout << "TestInitList::dump()...";
	for (size_t i = 0; i < m_vec.size(); i++) {
		std::cout << m_vec.at(i) << "\t";
	}
	std::cout << std::endl;
}

void TestInitList::test()
{
	TestInitList initList = { 3, 7, 2, 1 };
	initList.dump();

	dump_init_list({ 1, 2, 3, 4, 5 });
}