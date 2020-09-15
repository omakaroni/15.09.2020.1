#include <iostream>
#include <string>
#include <vector>
	/*const int arraysize = 20;
	int myarray[arraysize] = {};

	int stdId[53] = {};
	stdId[2] = 200;
	std::cout << stdId[2];*/

	//double mysize = 0;
	//double num[5] = {};
	//std::cout << " Enter a number :";
	//std::cin >> num[0];
	//std::cout << num[0];

	//std::cout << " double variable size " << sizeof (mysize);

	/*int me[5] = {};*/
	/*double me[20] = {};

	std::cout << "size of me is : " << sizeof(me) / sizeof(me[0]);

	for (int i = 0; i < sizeof(me) / sizeof(me[0]); i++) {
		std::cout << me[i] << " ";
	}*/
	/*for (int i = 0; i < 5; i++) {
		std::cout << me[i] << " ";
	}
	for (int i = 0; i < 5; i++) {
		std::cout << me[i] << " ";
	}*/

	/*char table[9] = {'1','2','3','4','5','6','7','8','9'};
	int choice;

		for (int i = 0; i < 9; i++) {
			if (i % 3 == 0) {
				std::cout << "\n\n";
			}
			std::cout << "\t" << table[i] << " ";
		}
		std::cin >> choice;
		table[choice-1] = 'X';
		for (int i = 0; i < 9; i++) {
			if (i % 3 == 0) {
				std::cout << "\n\n";
			}
			std::cout << "\t" << table[i] << " ";
		}*/


		/*std::vector <int> scoreV(5, 20);

		std::cout << "score at index 0 in vector is :" << scoreV.at(0) << std::endl;
		std::cout << "score at index 2 in vector is :" << scoreV.at(1) << std::endl;
		*/

	//std::vector<char> table = { '1','2','3','4','5','6','7','8','9' };
	//std::cout << table.size();

	//for (int i = 0; i < table.size(); i++) {
	//	if (i % 3 == 0) {
	//		std::cout << "\n\n";
	//	}
	//	std::cout << "\t" << table[i] << " ";
	//}

	//std::vector <int> numb(10, 0);

	//numb.at(0) = 2;
	//std::cin >> numb.at(2);
	//for (int i = 0; i < numb.size(); i++) {
	//	std::cout << numb.at(i);
	//}
	//return 0;


	/*int choice;

	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) {
			std::cout << "\n\n";
		}
		std::cout << "\t" << table[i] << " ";
	}
	std::cin >> choice;
	table[choice - 1] = 'X';
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) {
			std::cout << "\n\n";
		}
		std::cout << "\t" << table[i] << " ";

		return 0;
	}*/

	//std::vector <char> tab(5);
	//
	//for (int i = 0; i < tab.size(); i++) {
	//	std::cin >> tab.at(i); // std::cin >> tab[i];
	//}
	//for (int i = 0; i < tab.size(); i++) {
	//	std::cout << " " << tab.at(i); // std::cout << tab[i];
	//}

//double division(int num1, int num2, int num3);
//
//int main() {
//
//	std::cout << division(9, 3, 8);
//	return 0;
//
//	}
//
//double division(int num1, int num2, int num3) {
//		double result = num1 + num2 + num3;
//		return result;
//	}

//void func1() {
//	std::cout << "welcome to function 1" << std::endl;
//	std::cout << "leaving function 1 \n";
//}
//
//void func2() {
//	std::cout << "welcome to function 2 \n";
//	func1();
//	std::cout << "leaving function 2 \n";
//}
//	int main() {
//		func2();
//		std::cout << "last thing \n";
//		return 0;
//	}
	/*
	welcome to function 2
	welcome to function 1
	leaving function 1
	leaving function 2
	last thing
	*/

const double pi = 3.14;
double area(double radius);
double volum(double radius, double height);

int main() {

	std::cout << "Enter the radius ";
	double rad = 0;
	std::cin >> rad;

	std::cout << "Enter the height ";
	double height = 0;
	std::cin >> height;
	std::cout << "Area is : " << area(rad);
	std::cout << "volume is : " << volum(rad, height);

	return 0;
}

double area(double radius) {
	return pi * radius * radius;
}

double volum(double radius, double height) {
	return area(radius) * height;
}