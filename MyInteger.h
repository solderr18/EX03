#pragma once
class MyInteger {
private:
	int value;
public:
	MyInteger(); //no-arg constructor
	const int getValue();
	int setValue(int newValue);
};