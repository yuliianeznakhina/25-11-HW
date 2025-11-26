#include <iostream>
using namespace std;

class Transport
{
protected:
	string name;
	int year;
	double speed;
	int numOfPassengers;
public:
	Transport(){}
	Transport(string n, int y, double s, int p)
	{
		name = n;
		year = y;
		speed = s;
		numOfPassengers = p;
	}
	void Print()
	{
		cout << "\nname: " << name << "\nyear: " << year << "\nspeed: " << speed << "\nnumOfPassengers: " << numOfPassengers << endl;
	}
};

class Ground: public Transport
{
	double wheelSize; 
	string function;
public:
	Ground() {}
	Ground(string n, int y, double s, int p, double w, string f):Transport(n, y, s, p)
	{
		wheelSize = w;
		function = f;
	}
	void Print()
	{
		Transport::Print();
		cout << "wheelSize: " << wheelSize << "\nfunction: " << function << endl;
	}
};

class Water : public Transport
{
	string propulsion;
	bool underwater;
	double capacity;
public:
	Water() {}
	Water(string n, int y, double s, int p, string prop,bool u,double c) :Transport(n, y, s, p)
	{
		propulsion = prop;
		underwater = u;
		capacity = c;
	}
	void Print()
	{
		Transport::Print();
		cout << "propulsion: " << propulsion << "\nunderwater: " << underwater << "\ncapacity: " << capacity << endl;
	}
};

class Air : public Transport
{
	string wingType;
	string propulsion;
public:
	Air() {}
	Air(string n, int y, double s, int p, string w, string prop) :Transport(n, y, s, p)
	{
		wingType = w;
		propulsion = prop;
	}
	void Print()
	{
		Transport::Print();
		cout << "wingType: " << wingType << "\npropulsion: " << propulsion << endl;
	}
};


class Car : public Ground
{
	string fuel;
	string gearBox;
public:
	Car() {}
	Car(string n, int y, double s, int p, double w, string f, string fl, string g) :Ground(n, y, s, p, w, f)
	{
		fuel = fl;
		gearBox = g;
	}
	void Print()
	{
		Ground::Print();
		cout << "fuel: " << fuel << "\ngearBox: " << gearBox << endl;
	}
};

class Railway : public Ground
{
	string power;
public:
	Railway() {}
	Railway(string n, int y, double s, int p, double w, string f, string pwr) :Ground(n, y, s, p, w, f)
	{
		power = pwr;
	}
	void Print()
	{
		Ground::Print();
		cout << "power: " << power << endl;
	}
};

class HorseDrawn : public Ground
{
	int numOfWheels;
	int numOfHorses;
public:
	HorseDrawn() {}
	HorseDrawn(string n, int y, double s, int p, double w, int nw, int nh) :Ground(n, y, s, p, w, f)
	{
		numOfWheels = nw;
		numOfHorses = nh;
	}
	void Print()
	{
		Ground::Print();
		cout << "numOfWheels: " << numOfWheels << "\nnumOfHorses: " << numOfHorses << endl;
	}
};


class Tanker : public Water
{

public:
	Tanker() {}
	Tanker(string n, int y, double s, int p, string prop, bool u, double c) :Water(n, y, s, p, prop, u, c){}

};

class Boat : public Water
{
	double waterline;
public:
	Boat() {}
	Boat(string n, int y, double s, int p, string prop, bool u, double c, double wl) :Water(n, y, s, p, prop, u, c)
	{
		waterline = wl;
	}
	void Print()
	{
		Water::Print();
		cout << "waterline: " << waterline << endl;
	}
};

class MotorShip : public Water
{
	int numOfDecks;
	double waterline;
public:
	MotorShip() {}
	MotorShip(string n, int y, double s, int p, string prop, bool u, double c, double d, double wl) :Water(n, y, s, p, prop, u, c)
	{
		numOfDecks = d;
		waterline = wl;
	}
	void Print()
	{
		Water::Print();
		cout << "numOfDecks: " << numOfDecks << "\nwaterline: " << waterline << endl;
	}
};


class Airplane : public Air
{
	double wingspan;
	double enginePower;
public:
	Airplane() {}

};

class Helicopter : public Air
{
	string engine;
public:
	Helicopter() {}

};

class Airship : public Air
{
	string liftingGas;
	string type;
public:
	Airship() {}

};

int main()
{

}