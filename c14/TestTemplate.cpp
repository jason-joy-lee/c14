#include "TestTemplate.h"

using namespace TestTemplate;

template<>
auto TestTemplate::add_auto(const char* a, const char* b) {
	return string(a) + b;
}

void TestTemplate::test()
{
 	double z = add<double, int, double>(3, 5.2f);
	//z = add<>(3, 5.2f);
	cout << "add<double, int, double>(x, y)=" << z << endl;

//	z = add2<double, int>(3, 5.2f);
//	cout << "add2<double, int>(3, 5.2f)=" << z << endl;

	auto result = add_auto<>(3, 5.2f);
	cout << "add_auto<>(3, 5.2f)=" << result << endl;

	string sentance = add_auto<>("hello ", "Jason");
	cout << "ģ�庯����string����:" << sentance << endl;

//	auto rlt = AddString<>("hello ", "Jason");
//	cout << rlt << endl;
}