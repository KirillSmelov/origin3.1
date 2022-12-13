#include<iostream>
#include<string>

class Calculator
{
public:
	double num1;
	double num2;
	double add(double num1, double num2)
	{
		return num1 + num2;
	}
	double multiply(double num1, double num2)
	{
		return num1 * num2;
	}
	double substract_1_2(double num1, double num2)
	{
		return num1 - num2;
	}
	double substract_2_1(double num1, double num2)
	{
		return num2 - num1;
	}
	double divide_1_2(double num1, double num2)
	{
		return num1 / num2;
	}
	double divide_2_1(double num1, double num2)
	{
		return num2 / num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else { return false; }
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else { return false; }
	}
};

int main(int argc, char** argv)
{
	system("chcp 1251");
	while (true)
	{
		std::cout << "Введите num1: ";
		double num1;
		std::cin >> num1;
		std::cout << "Введите num2: ";
		double num2;
		std::cin >> num2;
		Calculator calculator{ num1,num2 };
		if (calculator.set_num1(num1) == false)
		{
			while (calculator.set_num1(num1) == false)
			{
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num1: ";
				std::cin >> num1;
			}
		}
		 if( calculator.set_num2(num2)==false)
		{
			while (calculator.set_num2(num2) == false)
			{
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num2: ";
				std::cin >> num2;
			}
		}
		std::cout << "num1 + num2 = " << calculator.add(num1, num2) << std::endl;
		std::cout << "num1 - num2 = " << calculator.substract_1_2(num1, num2) << std::endl;
		std::cout << "num2 - num1 = " << calculator.substract_2_1(num1, num2) << std::endl;
		std::cout << "num1 * num2 = " << calculator.multiply(num1, num2) << std::endl;
		std::cout << "num1 / num2 = " << calculator.divide_1_2(num1, num2) << std::endl;
		std::cout << "num2 / num1 = " << calculator.divide_2_1(num1, num2) << std::endl;
	}
	return 0;
}