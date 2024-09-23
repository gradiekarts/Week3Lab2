
#include<iostream>

using namespace std;

//add namespcae(package) called CST8219 here
namespace CST8219 {
	class Vehicle {
		int numWheels;
		int numDoors;

	public:
		Vehicle() : Vehicle(4) {

			cout << "In constructor with 0 parameters" << endl;

		}

		Vehicle(int w) : Vehicle(w, 4) {
			numWheels = w;

			cout << "In constructor with 1 parameters, wheels=" << w << endl;
		}

		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;

			cout << "In constructor with 2 parameters" << endl;
		}

		~Vehicle() {
		
			cout << "In destructor" << endl;
		
		}

	};

	int main(int argc, char** argv)
	{
		CST8219::Vehicle myVehicle(4);  //this calls constructor Vehicle(int)
		cout << "I made a Vehicle!" << endl;
		return 0;
	}

}