// Emerson Racca
// 10/20/2021
// Lab 8b - Array of Regular Pentagons

/*
Use your Pentagon structure from the previous lab.

1. Declare an array of 50 pentagons.

2. Populate the array of 50 pentagons in a for loop with random side lengths, random radii and random colors.

3. In a separate for loop, call your print Pentagon function from the previous lab for each pentagon in the array.
*/

#include<iostream>
#include<cstdlib> // srand(), rand()
#include<ctime> // time()
#include<iomanip> // setprecision()

using namespace std;

struct Pentagon {
	double sideLength = 1.0; //Initialized to remove warning from compiler.
	double radius = 1.0;
	string color = "black";
};

void populatePentagon(Pentagon p[], const int s);
void printPentagonObject(Pentagon p);
void printPentagon(Pentagon p[], const int s);

int main(void) {
	srand((unsigned int)time(0));
	cout << fixed << setprecision(2);

	const int size = 50;
	Pentagon pent[size];

	cout << "Array of Regular Pentagon\n\n";

	populatePentagon(pent, size);
	
	// To satisfy Part 3.
	for (int i = 0; i < size; i++) {
		cout << "Element with index " << i << " --" << endl;
		printPentagonObject(pent[i]);
	}

	//printPentagon(pent, size);

	return 0;
}

void populatePentagon(Pentagon p[], const int s) {
	// To choose from random colors.
	string c[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white" };

	for (int i = 0; i < s; i++) {
		p[i].sideLength = 1.0 + rand() % 100 + 1.0 * rand() / RAND_MAX; // A unit is not defined.
		p[i].radius = 1.0 + rand() % 100 + 1.0 * rand() / RAND_MAX;
		p[i].color = c[rand() % 10];

	}
}

// Function that takes in an Item object
void printPentagonObject(Pentagon p) {
	cout << "Side length: " << p.sideLength << endl;
	cout << "Radius     : " << p.radius << endl;
	cout << "Color      : " << p.color << endl;
	cout << endl;
}

void printPentagon(Pentagon p[], const int s) {
	for (int i = 0; i < s; i++) {
		cout << "Element with index " << i << " --" << endl;
		cout << "   Side length: " << p[i].sideLength << endl;
		cout << "   Radius     : " << p[i].radius << endl;
		cout << "   Color      : " << p[i].color << endl;
		cout << endl;
	}
}