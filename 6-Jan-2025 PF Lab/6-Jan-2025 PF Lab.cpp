#include <iostream>
using namespace std;
int main () {
	int array[12];
	// 1: Program to Take Array Values From User:
	for(int i=0;i<12;i++){
		cout << "Enter "<< i<< " value of Array: ";
		cin>>array[i];
	}
	
	// 2:  Program to Print User Taken Values of Array:
	cout<< "\nArray: [";
	for(int i=0;i<12;i++){
		cout<< array[i] << ",";
	}
	cout << "]";

	// 3: Program to Perform Sum of all Array Values
	int sum{};
	for(int i=0;i<12;i++){
		sum += array[i];
	}
	cout << "\n\nSum of Array is: "<<sum;

	// 4: Program to Reverse the Array: 
	cout << "\n\nReverse Array is: [";
	for(int i=11;i>=0;i--){
		cout << array[i] << ",";
	}
	cout << "]";

	// 5: Linear Search:
	bool flag{false};
	int NumberToBeFound{};
	cout << "\n\nEnter the Number For Search: ";
	cin >> NumberToBeFound;
	for(int i=0;i<12;i++){
		if(NumberToBeFound == array[i]){
			cout << NumberToBeFound << " Is Found At Array Index: " << i;
			flag = true;
			break;
		}	
	}
	if(!flag){
		cout << NumberToBeFound <<" Not Found!!!";
	}

	// 6: Program to Take Array Values from user and array will be 2D And Printing Them On The Screen:
	int ArrayDi[5][5];
	for(int i=0;i<5;i++){
		for(int b=0;b<5;b++){
			cout<<"\n\nEnter the Array Value for index "<<i<<","<<b<<" : ";
			cin >> ArrayDi[i][b];
		}
	}
	cout << "\n\n[";
	for(int i=0;i<5;i++){
		for(int b=0;b<5;b++){
			cout << ArrayDi[i][b] << ",";
		}
	}
	cout << "]\n";

}
