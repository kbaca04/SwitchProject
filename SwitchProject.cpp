#include <iostream>
#include <cstdlib>
using namespace std;
/*
system("dir");
system("pause");
system("cls");
! - means not
*/

int main()
{
	int choice;
	do {
		cout << "MENU OF OPTIONS";
		cout << "\n===============";
		cout << "\n\n1. Say good morning in Spanish";
		cout << "\n2. Say good morning in Portuguese";
		cout << "\n3. Say good morning in Polish";
		cout << "\n4. Say good morning in Italian";
		cout << "\n\n0. To QUIT\n\n";
		cout << "Enter your choise here ==> ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "\nThank you for using this app, have a beautiful day.\n";
			system("pause");
			system("cls");
			break;
		case 1:
			cout << "\nBuenos dias\n";
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "\nBom dia\n";
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "\nDzien dobry\n";
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "\nBuon giorno\n";
			system("pause");
			system("cls");
			break;
		default:
			cout << "\nWrong entry, please try again.\n";
			system("pause");
			system("cls");
		}
	} while (choice != 0);
}

