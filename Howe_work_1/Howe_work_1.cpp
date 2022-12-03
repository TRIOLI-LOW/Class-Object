#include <iostream>
#include <Windows.h>
class Calculator {
private:
	int num1 = 0;
	int num2 = 0;
public:
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1(){
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		this->num1 = num1;
		if (num1 != 0) {
			num1 = true;
		}
		return num1;
	}
	bool set_num2(double num2) {
		this->num2 = num2;
		if (num2 != 0) {
			num2 = true;
		}
		return num2;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num1(0);
	int num2(0);
	Calculator calc;
	while (!0) {
		std::cout << "Введите num1: ";
		std::cin >> num1;
		while (calc.set_num1(num1) == 0) {
			std::cout << "Неверный ввод!\n" << "Введите num1 : ";
			std::cin >> num1;
		}
		std::cout << "Введите num2: ";
		std::cin >> num2;
		while (calc.set_num2(num2) == 0) {
			std::cout << "Неверный ввод!\n" << "Введите num2 : ";
			std::cin >> num2;
		}
		std::cout << "num1 + num2 = " << calc.add() << "\n";
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
		std::cout << "num1 * num2 = " << calc.multiply() << "\n";
		std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
		std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
	}
}

