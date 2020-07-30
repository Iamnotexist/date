#include  "date.h"
using namespace std;

#define date_debug

int main () {

	_date_set_all_debug(true);

	date a = "01.01.1001";
	date b = {2, 2, 1001};

	cout << (a > b) << endl;

	date c = "01.01.000-";

	c = date("01.01.0001"); //date({1, 1, 1}) - недопустимо
	c--;
	c++;
	--c;
	cout << c.getDate() << endl;

	c = {2, 2, 2};
	cout << c.getDate() << endl;

	auto d = date{31, 12, 9999};
	cout << d.getDate() << endl;

	d++;
	++d;

//	date r = {1, 1, 1, 1}; //compilation error
//	date r = {1, 1};  //compilation error

	cout << r.getExist() << endl;

	cout << "A";



	return 0;
}