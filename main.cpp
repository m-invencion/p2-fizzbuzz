#include <iostream>

int main() {

	// Using a for-loop to test every number from 1 to 100
	for (int currentNum = 1; currentNum <= 100; currentNum++) {

		if (currentNum % 3 == 0 && currentNum % 5 == 0) {
			std::cout << "FizzBuzz\n";
		}
		else if (currentNum % 3 == 0) {
			std::cout << "Fizz\n";
		}
		else if (currentNum % 5 == 0) {
			std::cout << "Buzz\n";
		}
		else {
			std::cout << currentNum << "\n";
		}
	}
}