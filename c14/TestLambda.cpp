#include "TestLambda.h"

#include <iostream>
#include <string>
using namespace std;

void TestLambda::lambda_ref_capture()
{
	string name = "Jason Lee";

	// define a function, capture the outside variable 'name'
	auto concat = [&](const string& greet) -> string {
		return greet + ", " + name;
	};

	// modify outside var 'name'
	name = "Joy Lau";

	// see vars: name and func concat
	string sentence = concat("Hello");
	cout << "<fix bug iss11>lambda_ref_capture: name=" << name << ", setence=" << sentence << endl;
}

void TestLambda::lambda_value_capture()
{
	string name = "Jason Lee";

	// define a function, capture the outside variable 'name'
	auto concat = [=](const string& greet) -> string {
		return greet + ", " + name;
	};

	// modify outside var 'name'
	name = "Joy Lau";

	// see vars: name and func concat
	string sentence = concat("Hello");
	cout << "lambda_value_capture: name=" << name << ", setence=" << sentence << endl;
}

void TestLambda::test()
{
	lambda_ref_capture();

	lambda_value_capture();
}