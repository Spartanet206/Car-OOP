#include <iostream>
#include <thread>
using namespace std;


class Car
{
private:
	char engine[10];
	char model[10];
	char fuel[10];
	char year[10];
	char seets[10];
	char tire_size[10];
public:
	void Start()
	{
		cout << "Start Engine ! \n\n";
	}
	void Stop()
	{
		cout << "Stop Engine ! \n\n";
	}
};


int main()
{
	Car a;
	a.Start();
	this_thread::sleep_for(chrono::milliseconds(3000));
	a.Stop();

}