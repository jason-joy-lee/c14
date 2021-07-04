#include "TestTemplate.h"

using namespace TestTemplate;

template<>
auto TestTemplate::add_auto(const char* a, const char* b) {
	cout << "紧急修复一个Bug，在hotfix分支" << endl;
	return string(a) + b;
}

template<>
auto TestTemplate::add_auto(const string& a, const string& b) {
	return a + b;
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
	cout << "specialize template add_auto with const char*:" << sentance << endl;

	string a = "specialized ", b = "template add_auto";
	sentance = add_auto(a, b);
	cout << "specialize template add_auto with string:" << sentance << endl;

//	auto rlt = AddString<>("hello ", "Jason");
//	cout << rlt << endl;
}