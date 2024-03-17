#include <iostream>
#include<string>
using namespace std;
int main()
{                                                 //UCP CAFE APPLICATION (LOGIN ID: 431 & 532)

	//MUHAMMAD AHMAD
	int emp_id, total_trans = 0;
	//ARRAYS INITIALIZATION AND DECLARATION FOR MENU
	int menu_no[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	string menu_name[10] = { "TEA", "SMALL PIZZA", "PATTIES", "PASTRY", "SAMOSA", "GREEN SALAD", "SANDWICH", "BURGER", "FRIES", "COFFEE" };
	int menu_price[10] = { 30, 40, 40, 40, 10, 30, 70, 100, 100, 50 };

	cout << "\t\t------- UCP CAFE -------" << endl;
	for (int repeat = 0; repeat != 1;)
	{
		//EMPLOYEE LOGIN SYSTEM
		cout << "____________________________________________________________" << endl;
		cout << "\t\t|----EMPLOYEE LOGIN----|" << endl;
		cout << "\t\t------------------------" << endl;
		cout << "ENTER YOUR EMPLOYEE ID: ";
		cin >> emp_id;
		//REPEAT IF ENTERED ID IS WRONG
		for (emp_id; emp_id != 431 && emp_id != 532;)
		{
			cout << "WRONG ID!" << endl;
			cout << "PLEASE ENTER AGAIN THE ID: ";
			cin >> emp_id;
		}
		//MENU AFTER LOGIN
		//LOOP FOR REPEAT""
		for (int change = 1; change != 0;)
		{
			int total_bill = 0, item[2];
			string item_name[2];
			cout << "____________________________________________________________" << endl;
			if (emp_id == 431)
			{
				cout << "\t\t  ----EMPLOYEE 1----" << endl;
			}
			else
			{
				cout << "\t\t  ----EMPLOYEE 2----" << endl;
			}
			cout << endl;
			if (emp_id == 431 || emp_id == 532)
			{
				//MENU PRINT
				cout << "NO."
					<< "\t"
					<< "NAME"
					<< "\t\t"
					<< "PRICE" << endl;
				for (int a = 0; a <= 9; a++)
				{
					if (a == 1 || a == 5 || a == 6)
					{
						cout << menu_no[a] << "\t" << menu_name[a];
						cout << "\t" << menu_price[a] << endl;
					}
					else
					{
						cout << menu_no[a] << "\t" << menu_name[a];
						cout << "\t\t" << menu_price[a] << endl;
					}
				}
			}
			cout << "(TO CHANGE THE EMPLOYEE ENTER 0)" << endl
				<< endl;
			cout << "ENTER THE NO. OF ITEM: ";
			cin >> item[0];
			cin >> item[1];
			for (int b = 0; b <= 9; b++)
			{
				if (item[0] == menu_no[b])
				{
					total_bill = menu_price[b];
					item_name[0] = menu_name[b];
				}
			}
			for (int b = 0; b <= 9; b++)
			{
				if (item[1] == menu_no[b])
				{
					total_bill = total_bill + menu_price[b];
					item_name[1] = menu_name[b];
				}
			}

			cout << "TOTAL BILL: " << item_name[0] << " + " << item_name[1] << " = Rs. " << total_bill << endl;
			total_trans = total_trans + total_bill;
			change = total_bill;
		}

		cout << "TOTAL TRANSCATIONS = " << total_trans << endl;
	}

	return 0;
}
