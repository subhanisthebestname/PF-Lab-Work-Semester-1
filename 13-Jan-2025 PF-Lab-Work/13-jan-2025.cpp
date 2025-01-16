#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	float fee;
	char section;
};
struct stdd {
	int RollNo;
	int Marks[5];
	int Total;
	double Avg;
};
struct book {
	int id;
	int pages;
	int price;
};
int main() {
	// Task 1,2
//	student rollno2;
//	cout << "\nEnter The Name Of Student With Roll Number 002: ";
//	cin >> rollno2.name;
//	cout << "\nEnter The Age Of Student With Roll Number 002: ";
//	cin >> rollno2.age;
//	cout << "\nEnter The fee Of Student With Roll Number 002: ";
//	cin >> rollno2.fee;
//	cout << "\nEnter the section of " << rollno2.name << ": ";
//	cin >> rollno2.section;
//
//	
//	cout << "\nThe Name Is: " << rollno2.name;
//	cout << "\nThe Age of " << rollno2.name << " Is " << rollno2.age;
//	cout << "\nThe Fee of " << rollno2.name << " Is " << rollno2.fee;
//	cout << "\nThe Section of " << rollno2.name << " Is : " << rollno2.section;
	
	// Task 3
	stdd subhan;
	cout << "\n\nEnter The Roll Number Of Student: ";
	cin >> subhan.RollNo;
	for(int i=0;i<5;i++){
		cout << "\nEnter The Marks " << i+1 << " Of Student: ";
		cin >> subhan.Marks[i];
		
	}
	for(int i=0;i<5;i++){
		subhan.Total += subhan.Marks[i];
		// testing
//		cout << "\n" << subhan.Total;
	}
	subhan.Avg = subhan.Total/5;
	
	cout << "\nThe Roll Number of Student Is: " << subhan.RollNo;
	for(int i=0;i<5;i++){
		cout << "\nThe Marks " << i+1 << " Of Roll Number " << subhan.RollNo << " Is :" <<  subhan.Marks[i];
	}
	cout << "\nThe Total Number Of Roll Number " << subhan.RollNo << " Is: " << subhan.Total;
	cout << "\nThe Average Marks Of Roll Number " << subhan.RollNo << " Is: " << subhan.Avg; 
	
	
	
}
