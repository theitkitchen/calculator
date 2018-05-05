#include <iostream> // this tells you that you can have in and output
using namespace std; // this is always required or system::std;

int main () // this is saying that you are intinalzing a main directory
{ //this opens your dir
    int loop = 0;
	while (loop == 0){
		//system("cls");
		cin.clear();

		int num;
		cout << "Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplying\nPress 4 for Division\n";// cout is saying that you are having the program ask you a question and your options.
		cin >> num; // this says that your keypress = num
		switch(num) { // this allows the user to have options
			case 1: // this is your first option
				int x0;
				int y0;
				cout << "Adding\n"; // "\n" will auto type on the screen your text and then hit the enter key
				cout << "enter your first number: ";
				cin >> x0;
				cout << "enter your second number: ";
				cin >> y0;
				cout << "your answer is ";
				cout << x0 + y0;
				cout << "\n";
				break;
			case 2:
				int x1;
				int y1;
				cout << "Subtracting\n";
				cout << "1st #: ";
				cin >> x1;
				cout << "2nd #: ";
				cin >> y1;
				cout << "your answer is ";
				cout << x1 - y1;
				cout << "\n";
				break;
			case 3:
				int x2;
				int y2;
				cout << "Multiplying\n";
				cout << "1st #: ";
				cin >> x2;
				cout << "2nd #: ";
				cin >> y2;
				cout << "your answer is ";
				cout << x2 * y2;
				cout << "\n";
				break;
			case 4:
			    int x3;
				int y3;
				cout << "Division\n";
				cout << "1st #: ";
				cin >> x3;
				cout << "2nd #: ";
				cin >> y3;
				cout << "your answer is ";
				cout << x3/y3;
				cout << "\n";
				break;
            default:
                loop = 1;
				break;
		}
		//system ("pause");
	}return 0;
}
