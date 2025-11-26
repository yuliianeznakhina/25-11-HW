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
	virtual void Init()
	{
		string n;
		int y;
		double s;
		cout << "\nEnter name: ";
		cin >> n;
		name = n;
		cout << "\nEnter year: ";
		cin >> y;
		year = y;
		cout << "\nEnter speed: ";
		cin >> s;
		speed = s;
		cout << "\nEnter number of passengers: ";
		cin >> y;
		numOfPassengers = y;
		
	}
	virtual void Print()
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
	virtual void Print()
	{
		Transport::Print();
		cout << "wheelSize: " << wheelSize << "\nfunction: " << function << endl;
	}
	void Init()
	{
		Transport::Init();
		double w;
		string f;
		cout << "\nEnter wheel size: ";
		cin >> w;
		wheelSize = w;
		cout << "\nEnter function: ";
		cin >> f;
		function = f;
	}
};

class Water : public Transport
{
	string propulsion;
	bool underwater;
	double capacity;
public:
	Water() {}
	Water(string n, int y, double s, int p, string prop, bool u,double c) :Transport(n, y, s, p)
	{
		propulsion = prop;
		underwater = u;
		capacity = c;
	}
	virtual void Print()
	{
		Transport::Print();
		cout << "propulsion: " << propulsion << "\nunderwater: " << underwater << "\ncapacity: " << capacity << endl;
	}
	void Init()
	{
		Transport::Init();
		string prop;
		bool u;
		double c;
		cout << "\nEnter propulsion: ";
		cin >> prop;
		propulsion = prop;
		cout << "\nEnter underwater: ";
		cin >> u;
		underwater = u;
		cout << "\nEnter capacity: ";
		cin >> c;
		capacity = c;
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
	virtual void Print()
	{
		Transport::Print();
		cout << "wingType: " << wingType << "\npropulsion: " << propulsion << endl;
	}
	void Init()
	{
		Transport::Init();
		string w;
		string prop;
		cout << "\nEnter wing type: ";
		cin >> w;
		wingType = w;
		cout << "\nEnter propulsion: ";
		cin >> prop;
		propulsion = prop;
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
	void Init()
	{
		Ground::Init();
		string f;
		string g;
		cout << "\nEnter fuel: ";
		cin >> f;
		fuel = f;
		cout << "\nEnter gear box: ";
		cin >> g;
		gearBox = g;
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
	void Init()
	{
		Ground::Init();
		string p;
		cout << "\nEnter power: ";
		cin >> p;
		power = p;
	}
};

class HorseDrawn : public Ground
{
	int numOfWheels;
	int numOfHorses;
public:
	HorseDrawn() {}
	HorseDrawn(string n, int y, double s, int p, double w, string f, int nw, int nh) :Ground(n, y, s, p, w, f)
	{
		numOfWheels = nw;
		numOfHorses = nh;
	}
	void Print()
	{
		Ground::Print();
		cout << "numOfWheels: " << numOfWheels << "\nnumOfHorses: " << numOfHorses << endl;
	}
	void Init()
	{
		Ground::Init();
		int w;
		cout << "\nEnter number of wheels: ";
		cin >> w;
		numOfWheels = w;
		cout << "\nEnter number of horses: ";
		cin >> w;
		numOfHorses = w;
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
	void Init()
	{
		Water::Init();
		double w;
		cout << "\nEnter waterline: ";
		cin >> w;
		waterline = w;
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
	void Init()
	{
		Water::Init();
		double w;
		int n;
		cout << "\nEnter number of decks: ";
		cin >> n;
		numOfDecks = n;
		cout << "\nEnter waterline: ";
		cin >> w;
		waterline = w;
	}
};


class Airplane : public Air
{
	double wingspan;
	double enginePower;
public:
	Airplane() {}
	Airplane(string n, int y, double s, int p, string w, string prop, double ws, double e) :Air(n, y, s, p, w, prop)
	{
		wingspan = ws;
		enginePower =e;
	}
	void Print()
	{
		Air::Print();
		cout << "wingspan: " << wingspan << "\nenginePower: " << enginePower << endl;
	}
	void Init()
	{
		Air::Init();
		double w;
		cout << "\nEnter wingspan: ";
		cin >> w;
		wingspan = w;
		cout << "\nEnter engine power: ";
		cin >> w;
		enginePower = w;
	}
};

class Helicopter : public Air
{
	string engine;
public:
	Helicopter() {}
	Helicopter(string n, int y, double s, int p, string w, string prop, double e) :Air(n, y, s, p, w, prop)
	{
		engine = e;
	}
	void Print()
	{
		Air::Print();
		cout << "engine: " << engine << endl;
	}
	void Init()
	{
		Air::Init();
		string e;
		cout << "\nEnter engine: ";
		cin >> e;
		engine = e;
	}
};

class Airship : public Air
{
	string liftingGas;
	string type;
public:
	Airship() {}
	Airship(string n, int y, double s, int p, string w, string prop, string l, string t) :Air(n, y, s, p, w, prop)
	{
		liftingGas = l;
		type = t;
	}
	void Print()
	{
		Air::Print();
		cout << "liftingGas: " << liftingGas << "\ntype: " << type << endl;
	}
	void Init()
	{
		Air::Init();
		string e;
		cout << "\nEnter lifting gas: ";
		cin >> e;
		liftingGas = e;
		cout << "\nEnter type: ";
		cin >> e;
		type = e;
	}
};

int main()
{
	Transport* ptr;

	int choice;
	cout << "1 - Car\n2 - Railway\n3 - HorseDrawn\n4 - Tanker\n5 - Boat\n6 - MotorShip\n7 - Airplane\n8 - Helicopter\n9 - Airship\nPlease choose: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		ptr = new Car();
		ptr->Init();
		ptr->Print();
		break;
	case 2:
		ptr = new Railway();
		ptr->Init();
		ptr->Print();
		break;
	case 3:
		ptr = new HorseDrawn();
		ptr->Init();
		ptr->Print();
		break;
	case 4:
		ptr = new Tanker();
		ptr->Init();
		ptr->Print();
		break;
	case 5:
		ptr = new Boat();
		ptr->Init();
		ptr->Print();
		break;
	case 6:
		ptr = new MotorShip();
		ptr->Init();
		ptr->Print();
		break;
	case 7:
		ptr = new Airplane();
		ptr->Init();
		ptr->Print();
		break;
	case 8:
		ptr = new Helicopter();
		ptr->Init();
		ptr->Print();
		break;
	case 9:
		ptr = new Airship();
		ptr->Init();
		ptr->Print();
		break;
	default:
		break;
	}
}
