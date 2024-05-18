#include <iostream>
#include <thread>
using namespace std;


class Car
{
private:
	string description;
	string engine;
	string model;
	string fuel;
	string year;
	string seats;
	string tire_size;
public:
	void Start()
	{
		cout << "Start Engine ! \n\n";
	}

	void Stop()
	{
		cout << "Stop Engine ! \n\n";
	}

	void InputEng(string cm)
	{
		engine = cm;
		cout << "Engine L = " << engine << "\n\n";
	}

};


int main()
{
	Car a;
	cout << "Input engine type: ";
	string cm;
	cin >> cm;
	cout << endl << endl;
	a.InputEng(cm);
	cout << endl << endl;
	a.Start();
	this_thread::sleep_for(chrono::milliseconds(3000)); // Sleep time on 3 second;
	a.Stop();

	Car b;
	cout << endl << endl;
	cout << "Input engine type: ";
	string cm1;
	cin >> cm1;
	cout << endl << endl;
	b.InputEng(cm1);
	cout << endl << endl;
	b.Start();
	this_thread::sleep_for(chrono::milliseconds(3000)); // Sleep time on 3 second;
	b.Stop();

}