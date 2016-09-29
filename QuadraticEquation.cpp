#include "QuadraticEquation.h"
#include <iostream>
#include <string>
using namespace std;

//mutator functions
int QuadraticEquation::setA(int newA) {
	a = newA;
}
int QuadraticEquation::setB(int newB) {
	b = newB;
}
int QuadraticEquation::setC(int newC) {
	c = newC;
}
//accessor functions
int QuadraticEquation::getA() { return a; }
int QuadraticEquation::getB() { return b; }
int QuadraticEquation::getC() { return c; }
double QuadraticEquation::getDiscriminant() {
	double discriminant = ((b*b) + (4 * a*c));
	return discriminant;
}
double QuadraticEquation::getRoot1() {
	double root1;
	root1 = -getB() + sqrt(getDiscriminant());
	root1 /= (2 * getA());
	return root1;
}
double QuadraticEquation::getRoot2() {
	double root2;
	root2 = -getB() - sqrt(getDiscriminant());
	root2 /= (2 * getA());
	return root2;
}
void QuadraticEquation::output() {
	cout << "Roots: \n";
	if (getDiscriminant() < 0)
		cout << "The equation has no real roots.\n";
	else {
		cout << getRoot1() << endl;
		if (getDiscriminant() != 0)
			cout << getRoot2();
}