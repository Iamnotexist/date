#include  "date.h"
using namespace std;

int main () {

	_date_set_all_debug(true);

	cout << ("01.01.0001" <= date(1, 1, 1)) << endl;

	//date bad({1, 1, 1}); compilation error
	//date bad = date({1, 1, 1}); compilation error

	date a;
	a.setDateLocal();

	a++; cout << a.getDate() << endl;

	cout << endl;
	cout << int(a) << endl;
	cout << int(a--) << endl;
	cout << int(a) << endl;
	cout << endl;

	cout << endl;
	cout << int(a) << endl;
	cout << int(--a) << endl;
	cout << int(a) << endl;
	cout << endl;

	cout << a.getDate() << " " << int(a) <<  " " << a.getDayOfWeek() << endl;

	cout << endl;
	date b = "02.02.2002";

	cout << b.getDate() << " " << b.getDayOfWeek() << endl;

	date u;
	u.setDateLocal();

	cout << endl << u.getDate() << " ";
 	u = date(u + 1);

 	cout << u.getDate() << endl << endl;

 	cout << int(date("31.12.9999"));

 	cout << endl << endl;
 	date q;
 	string *y = new string("13.02.2002");
 	q.setDate(y);
 	q = q;

 	cout << q.getDayOfWeek() << endl;

	return 0;
}
