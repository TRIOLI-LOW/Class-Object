#include<Windows.h>
#include <iostream>
class Counter {
private: 
	int num = 0;
public:
	
	int plus() {
		return ++num;
	}
	int minus() {
		return --num;
	}
	void sost() {
		std::cout << num;
	}
	int nach() {
		return num = 1;
	}
	Counter (int num) {
		this->num = num;
	};
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num(0);
	std::string y = "да";
	std::string n = "нет";
	std::string v = "";
	const char plus = '+';
	const char minus = '-';
	const char res = '=';
	const char exit = 'x';
	char com = ' ';
	

	std::cout << "Вы хотите указать начальньное значение счетчика? Введите да или нет: ";
	std::cin >> v;
	std::cout << std::endl;
	
		while ((v != y) && (v != n)) {
				std::cout << "Неккоректный ввод! Введите да или нет: ";
				std::cin >> v;
				std::cout << std::endl;	
		}
		if (v == y) {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> num;
			
		}
		Counter count(num);
		if(v == n) {
			
			count.nach();
		
	}
		
	while (com != exit) {
	
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> com;
		switch (com) {
		case (plus): count.plus();
			break;
		case (minus): count.minus();
			break;
		case (res): count.sost();
			std::cout << std::endl;
			break;
		case (exit): std::cout << "До свидания!";
			break;
		default: std::cout << "Некорректный ввод " << std::endl;
			break;
		}
	}


}

