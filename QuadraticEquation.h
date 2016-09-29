#pragma once
class QuadraticEquation {
private:
	int a, b, c;
public:
	QuadraticEquation(); //no-arg constructor
	//mutator functions
	int setA(int newA);
	int setB(int newB);
	int setC(int newC);
	//accessor functions
	int getA();
	int getB();
	int getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
	void results();
};
/*
UML DIAGRAM
QuadraticEquation
----------------------------
- double a 
- double b
- double c
----------------------------
+ QuadraticEquation()
+ int setA (int new A )
+ int setB (int new B )
+ int setC (int new C )
+ int getA()
+ int getB()
+ int getC()
+ double getDiscriminant()
+ double getRoot1()
+ double getRoot2()
+ void results()
*/