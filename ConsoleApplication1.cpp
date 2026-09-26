#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main()
{
	/*int age = 0;
	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << (age >= 18 ? "You can vote!" : "You can't vote!") << '\n';*/
	int num0;
	while (true) {
		std::cout << '\n' << "Enter number of task: ";
		std::cin >> num0;
		switch (num0)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		case 6:
			task6();
			break;
		case 7:
			task7();
			break;
		case 8:
			task8();
			break;
		default:
			break;
		}
	}


}
void task1()
{
	int num1;
	std::cout << "Enter your number: ";
	std::cin >> num1;
	if (num1 % 2 == 1) {
		std::cout << "your number odd";
	}
	else {
		std::cout << "your number even";
	}
}
void task2()
{
	int num1, num2;
	std::cout << "Enter 2 numbers: " << '\n';
	std::cin >> num1;
	std::cin >> num2;
	if (num1 > num2) {
		std::cout << num1 << " bigger than " << num2;
	}
	else if (num1 < num2) {
		std::cout << num2 << " bigger than " << num1;
	}
	else {
		std::cout << num1 << " equals" << num2;
	}
}
void task3()
{
	int num1;
	std::cout << "Enter your number: ";
	std::cin >> num1;
	if (num1 > 0) {
		std::cout << "your number is positive";
	}
	else if (num1 < 0) {
		std::cout << "your number is negative";
	}
	else {
		std::cout << "your number is zero";
	}
}
void task4()
{
	int num1, num2;
	std::cout << "Enter 2 numbers: " << '\n';
	std::cin >> num1;
	std::cin >> num2;
	if (num1 == num2) {
		std::cout << "numbers are equal";
	}
	else if (num1 < num2) {
		std::cout << num1 << " " << num2;
	}
	else {
		std::cout << num2 << " " << num1;
	}
}
void task5()
{
	int mark1, mark2, mark3, mark4, mark5;
	std::cout << "Enter 5 marks: " << '\n';
	std::cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

	double average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;

	if (average >= 4.0) {
		std::cout << "student is allowed to the exam, average = " << average;
	}
	else {
		std::cout << "student is not allowed to the exam, average = " << average;
	}
}
void task6()
{
	int num1;
	std::cout << "Enter your number: ";
	std::cin >> num1;
	if (num1 % 2 == 0) {
		std::cout << "result: " << num1 * 3;
	}
	else {
		std::cout << "result: " << num1 / 2.0;
	}
}
void task7()
{
	double num1, num2;
	char operation;

	std::cout << "Enter 2 numbers: " << '\n';
	std::cin >> num1 >> num2;

	std::cout << "Choose operation (+, -, *, /): ";
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		std::cout << "result: " << num1 + num2;
		break;
	case '-':
		std::cout << "result: " << num1 - num2;
		break;
	case '*':
		std::cout << "result: " << num1 * num2;
		break;
	case '/':
		if (num2 == 0) {
			std::cout << "can't divide by zero";
		}
		else {
			std::cout << "result: " << num1 / num2;
		}
		break;
	default:
		std::cout << "unknown operation";
		break;
	}
}
void task8()
{
	double num1;
	int power;
	double result = 1;

	std::cout << "Enter your number: ";
	std::cin >> num1;

	std::cout << "Enter power (0-7): ";
	std::cin >> power;

	for (int i = 0; i < power; i++) {
		result *= num1;
	}

	std::cout << "result: " << result;
}