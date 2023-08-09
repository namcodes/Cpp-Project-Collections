//Date Created : Augost 09 - 2023
//Name : Noel Mallari
//Facebook : https://facebook.com/noel.mallari.5638137

#include <iostream>
#include <string>

using namespace std;

void addMember();
void displayData();

struct Member {
	int id = 0;
	int age = 0;
	string first_name = "";
	string last_name = "";
	struct Member *next;
};

struct Member *head = NULL;
Member *new_data;
Member *nodePtr;

int items = 0;
int member_id = 0;
int member_age = 0;
string fname = "";
string lname = "";
int ch = 0;
static int temp_id = 0;
char yn;
/////////////////////
void mainMenu(){
	do{
		cout << "Welcome back" << endl;
		cout << "[1] = Add Group Member" << endl;
		cout << "[2] = Display Group Member" << endl;
		cout << "Choice : ";
		cin >> ch;
		switch(ch){
			case 1:{
				addMember();
				break;
			}
			case 2:{
				displayData();
				break;
			}
			default:{
				cout << "Would you like to continue?[Y/N]" << endl;
				cout << "Choice : ";
				cin >> yn;
				break;
			}
		}
	}while(yn == 'Y' || yn == 'y');
}

void displayData(){
	cout << "Group Members" << endl;
	Member *PtrDisplay;
	PtrDisplay = head;
	while(PtrDisplay){
		cout << "Id : " << PtrDisplay->id << "\n Name : " << PtrDisplay->first_name << " " << PtrDisplay->last_name << "\nAge : " << PtrDisplay->age << endl;
		PtrDisplay = PtrDisplay->next;
	}
	
	cout << endl;
	
	cout << "Would you like to continue? [Y/N]" << endl;
	cout << "Choice : ";
	cin >> yn;
	
	if(yn == 'Y' || yn == 'y'){
		mainMenu();
	}else{
		exit(0);
	}
}

void insert_memberData(){
	new_data = new Member;
	new_data -> id = member_id;
	new_data -> first_name = fname;
	new_data -> last_name = lname;
	new_data -> age = member_age;
	
	if(head == NULL){
		head = new_data;
	}else{
		nodePtr = head;
		
		while(nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = new_data;
	}
	
	cout << "Successfully Saved" << endl;
	cout << "Would you like to continue? [Y/N]" << endl;
	cin >> yn;
	
	if(yn == 'Y' || yn == 'y'){
		mainMenu();
	}else{
		exit(0);
	}
}

void addMember() {
	++temp_id;
	cout << "Member Id : " << temp_id << endl;
	member_id = temp_id;
	cout << "Enter First Name : ";
	cin >> fname;
	cout << "Enter Last Name : ";
	cin >> lname;
	cout << "Enter Age : ";
	cin >> member_age;
	insert_memberData();
}


int main() {
	mainMenu();
	return 0;
}
