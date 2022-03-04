//implement an Accounting software with file input and output and other function and so on.
#include<bits/stdc++.h>
using namespace std;

int balance;

class data{
	map<int, map<>>
	int date_day;
	string data_name;
	bool isitincome;
	int quantity;
	
	public:
		
};

void instruction_table(){
	cout << "|-----------------------------------------------|" << endl;
	cout << "|Enter number to perform an action|" << endl;
	cout << "|-----------------------------------------------|" << endl;
	cout << "|01: Input the file name to open it.|" << endl;
	//cout << "" << endl;
	cout << "|02: Input your accounting data.|" << endl;
	cout << "|03: input your data's name to delete data.|" << endl;
	cout << "|04: input your data's name to modify data.|" << endl;
	//cout << "|04: Display instruction table.|" << endl;
	cout << "|05: Display your total accounting data.|" << endl;
	cout << "|06: Exit the program without storing the data you input.|" << endl;
	cout << "|07: Store the data and exit the program |" << endl;
	cout << "|-----------------------------------------------|" << endl;
	return;
}

void _01openfile(){
	string temp_file_name;
	cout << "Please enter the accounting file name: ";
	cin >> temp_file_name;
	ifstream newfile;
	newfile.open(temp_file_name,)
}

void _02input_accounting_data(){
	
}

void _03delete_data(){
	
}

void _04modify_data(){
	
}

void _05display_total_data(){
	instruction_table();
	return;
}

void _06exit_without_store(){
	
}

void _07exit_and_store(){
	
}

int main(void){
	int command=0;
	instruction_table();
	cout << "Enter the number: ";
	while(cin >> command){
		switch(command){
			case 1:
				
				break;
			case 2:
				
				break;
				
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				_05display_total_data();
				break;
			case 6:
				
				break;
			case 7:
				
				break;
			default:
				cout << "Please Enter correct number!" << endl;
		}
		cout << "press any key to return the instruction table." << endl;
		system("pause");
		system("cls");
		instruction_table();
		cout << "Enter the number: ";
	}
	return 0;
}


/*
|-----------------------------------------------------------|
| date(day) | data name |   income  | expenses  |  balance  |
|-----------------------------------------------------------|
|(5)     01 |     salary|(6)   100  |(8)     0  |(6)   100  |
|(5)     02 |  breakfast|(6)     0  |(8)   200  |(6)  -100  |
|-----------------------------------------------------------|
|   total income:       100                                |
| total expenses:       200                                |
|  total balance:      -100                                |
|-----------------------------------------------------------|
*/


/*
|-----------------------------------------------|
*/
