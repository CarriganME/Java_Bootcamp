//Mike Carrigan
//ECE 2620_001
//Circle Class, don't use commas on point inputs
#include <iostream>
#include "circle.h"
using namespace std;


int main()
{
	//Initialize objects
	circle<int> my_obj1(1,3);
	circle<double> my_obj2(-1.5, -6.65, -0.5, 10.0);
	
	//Set up menu
	int choice = 0;
	double newx1, newy1, newx2, newy2;
	while( choice !=6)
	{
		cout << " \n" << "Make a choice: " << endl <<"1. Compute the radius of the circle" << endl << "2. Compute circumference of the circle" << endl << "3. Compute the area of the circle" << endl << "4. Enter new coordinates for circle 1" << endl << "5. Enter new coordinates for circle 2" << endl << "6. Exit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
		cout << "choice = " << choice << endl;

		//Define menu options
		switch( choice)
		{
			case 1: cout << endl <<"The length of the radius of circle 1 is: " << my_obj1.radius()<< endl <<"The length of the radius of circle 2 is: " << my_obj2.radius()<< endl; break;
			case 2: cout << endl <<"The circumference of circle 1 is: " << my_obj1.circumference()<< endl <<"The circumference of circle 2 is: " << my_obj2.circumference()<< endl; break;
			case 3: cout << endl <<"The area  of circle 1 is: " << my_obj1.area()<< endl <<"The area  of circle 2 is: " << my_obj2.area()<< endl; break;
			case 4: cout << "Enter Point 1 (x1, y1)" << endl;
					cin >> newx1 >> newy1;
					cout << "Enter Point 2 (x2, y2)" << endl;
					cin >> newx2 >> newy2;
					my_obj1.populate_classobj (newx1, newy1, newx2, newy2);
					break;
			case 5: cout << "Enter Point 1 (x1, y1)" << endl;
					cin >> newx1 >> newy1;
					cout << "Enter Point 2 (x2, y2)" << endl;
					cin >> newx2 >> newy2;
					my_obj2.populate_classobj (newx1, newy1, newx2, newy2);
					break;
			case 6: cout << "Exiting\n"; break;
			default: cout << endl << "Invalid choice, enter another number\n"; break;
		}
	}	
	return 0;
}