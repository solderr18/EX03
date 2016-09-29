#pragma once
class Fan {
private:
	int speed; //speed of fan, can be 1, 2, or 3
	bool on; //specifies if fan is on or off
	double radius; //of fan
public:
	Fan();
	//accessor functions
	int getSpeed();
	bool getOn();
	double getRadius();
	//mutator functions
	void setSpeed(int newSpeed);
	void setOn(bool newOn);
	void setRadius(double newRadius);
	/*
	UML DIAGRAM
	Fan
	-------------------------
	- int speed
	- bool on
	- double radius
	--------------------------
	+ int getSpeed()
	+ int getOn()
	+ int getRadius()
	--------------------------
	*/
};