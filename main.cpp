#include <iostream>
using namespace std;
using std::cout;
using std::endl;

/*
Working code with Cin and Cout.
Use the type “int” to hold numbers. Don’t worry about names this week. Kudos if you can figure it out yourself.
Create a program that executes your information (introduction of who you are)
--------------------------------------------------------------------------
Name (First Last)
Goals in Life
Current Interests
Dreams
Where you expect to see yourself in the next 1,3,5, and 7 years.
-------------------------------------------------------------------------
*/
int main (){
	
	//string variables for my info
	string name;
	string goals;
	string hobbies;
	string dreams;
	
	//strings and my input cuz it cout
	//cout-->character output
	//cin-->character input
	cout << "What is your first and last name: ";
	cin >> name;
	
	cout << "Goals in life: ";
	cin >> goals;

	cout << "What are your current interests: ";
	cin >> hobbies;
	
	cout << "What are your dreams: ";
	cin >> dreams;

	//int varaiables for year
	//int years
	int y1 = 1;
	int y2 = 2;
	int y5 = 5;
	int y7 = 7;
	int y3 = 3;
//---------------------------------------

	//basically prints it
	//endl--> endline
	cout << "Name: " << name << endl;
	cout << "Goals: " << goals << endl;
	cout << "Interests: " << hobbies << endl;
	cout << "Dreams: " << dreams << endl;
//--------------------------------------------
	cout << "I hope to finish all my esstential math and science requirements in " << y1 << "year.";
	cout << "Hopefully I'm at a 4-year insitution and working on my bachelor degree in " << y2 << "years.";
	cout << "Hopefully at this point I have graduated from a 4-year insitution in " << y5 << "years.";
	cout << "By this time,hopefully I'm empolyed and the job market isnt as bad as it is right now in  " << y7 << "years.";
	cout << "Hopefully by this time I'll be close to finishing up my bachelor degree in " << y3 << "years.";
	return 0;

}
