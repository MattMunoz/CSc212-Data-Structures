#include <iostream>
#include <string>
#include "node2.h"
#include "point.h"

using namespace std;
using namespace main_savitch_6B;
using namespace main_savitch_2A;

int main()
{
	node<int>* ages = NULL;
	list_head_insert(ages, 18);
	node<string> name;
	name.set_data("Jorge");
	node<point>* seat;
	seat = new node<point>;
	(*seat).set_data(point(2, 4));

	cout << "Ages: " << ages->data() << endl;
	cout << "Name: " << name.data() << endl;
	cout << "Seat: " << seat->data().get_x() << "," << seat->data().get_y() << endl;

	return EXIT_SUCCESS;
}
