
#include<iostream>

using namespace std;

//add namespcae(package) called CST8219 here
namespace CST8219 {
	class Vehicle {
		int numWheels;
		int numDoors;

	public:
		Vehicle() : Vehicle(4) {

		}

		Vehicle(int w) : Vehicle(w, 4) {
			numWheels = w;
		}

		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
		}

	};

	int main(int argc, char** argv)
	{
		cout << "Hello World!" << endl;
		return 0;
	}

}