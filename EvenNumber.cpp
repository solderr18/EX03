#include "EvenNumber.h"
#include <iostream>
#include <string>
using namespace std;

EvenNumber::EvenNumber() { //no-arg constructor
	value = 0;
}
EvenNumber::EvenNumber(int num) { //arg constructor
	if (num % 2 == 1)
		num += 1; //takes an odd number and adds one to get an even number
	value = num; //sets value to this even number (or original even number)
}
int EvenNumber::getValue() { return value; }
int EvenNumber::setValue(int newValue) {
	value = newValue;
}
int EvenNumber::getNext() { return (value + 2); }
int EvenNumber::getPrevious() { return (value - 2); }
void EvenNumber::display() {
	cout << "For your even number " << getValue() << ", ";
	cout << "the next even number is " << getNext();
	cout << " and the previous even number is " << getPrevious();
}