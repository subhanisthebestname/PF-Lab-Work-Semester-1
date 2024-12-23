#include <iostream>
using namespace std;
// Function to Display Welcome Message For Resturant:
string displayWelcomeMessage(){
	return "Welcome To Foodies Paradise!";
}
// Function to Calculate Square of a Number:
int square(int num){
	return num*num;
}
// Function to Get the current Year:
int getCurrentYear(int year){
	return year;
}
// Function to Calculate The Average Grade:
double calculateAverageGrade(int subj1,int subj2,int subj3){
	return (subj1+subj2+subj3)/3;
}
int sum(int a,int b){
	return a+b;
}
// Factorial Function:
int factorial(int num){
	int fact = 1;
	if(num == 1 || num == 0){
		cout << "Factorial of " << num << " is 1";
	}
	for(int i=1;i<=num;i++){
		fact *= i;
	}
	return fact;
}
int main(){
	// First Call:
	cout << displayWelcomeMessage();
	cout << endl;
	// Second Call:
	cout << square(4);
	cout << endl;
	// Third Call
	cout << getCurrentYear(2024);
	cout << endl;
	// Fourth Call:
	cout << calculateAverageGrade(80,70,60);
	cout << endl;
	// Sum Function:
	int a,b;
	cout << "Enter The Two Number For Addition Respectively: ";
	cin >> a >>b;
	cout << sum(a,b);
	cout << endl;
	// 
	cout << factorial(5);
	
}
