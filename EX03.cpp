#include <iostream>
#include <string>
#include "Fan.h" ///EX03_01 exercise 9.2: the Fan class
#include "QuadraticEquation.h" ///EX03_02 exercise 9.6: Algerbra: quadratic equations
#include "EvenNumber.h" ///EX03_03 exercise 9.11 EvenNumber class
using namespace std;

string sort(string&s);///EX03_04 exercise 10.4 Sort characters in a string

int main() {
	///EX03_01 exercise 9.2: the Fan class
	Fan a, b;
	//1st fan
	int first = 1; //first fan
	a.setSpeed(3);
	a.setOn(true);//on
	a.setRadius(10);
	a.output();
	//2nd fan
	b.setSpeed(2);
	b.setOn(false);//off
	b.setRadius(5);
	b.output();
	///EX03_02 exercise 9.6: Algerbra: quadratic equations
	QuadraticEquation test;
	int d, e, f; //new letters as to not confuse w the ones in class
	//prompts for values
	cout << "Enter three integers: \n";
	cout << "a = ";
	cin >> d;
	cout << endl << "b = ";
	cin >> e;
	cout << endl << "c = ";
	cin >> f;
	//setting values;
	test.setA(d);
	test.setB(e);
	test.setC(f);
	//Display results
	test.results();
	///EX03_03 exercise 9.11 EvenNumber class
	EvenNumber run;
	run.setValue(16);
	run.display();
	///EX03_04 exercise 10.4 Sort characters in a string
	string st;
	cout << "Enter a string: ";
	cin >> st;
	cout << "Sorted: " << sort(st) << endl;
	///EX03_05 exercise 10.10: the MyInteger class

	return 0;
}
string sort(string&s) { ///EX03_04 exercise 10.4 Sort characters in a string
	string str = s;
	for (int i = 0; i < str.length(); i++) {
		int smallest = i;
		for (int j = i + 1; j < str.length(); j++) {
			if (tolower(str[j]) < tolower(str[smallest]))
				smallest = j;
		}
	}
}