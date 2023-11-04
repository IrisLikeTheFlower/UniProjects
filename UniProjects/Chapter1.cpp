#include <iostream>
#include "Chapter1.h"

void DigitAverage() {
	std::cout << "\nEnter a Whole number: ";
	unsigned given_number;
	std::cin >> given_number;
	unsigned rest_of_digits = given_number; // неопрацьована частина числа спочатку = цілому числу початковому
	unsigned sum = 0, digits_quantity = 0; // сума і к-сть цифр в числі

	while (rest_of_digits > 0) {
		unsigned rightmost_digit = rest_of_digits % 10; // отримання самого правого символа через остачу від ділення
		sum += rightmost_digit; //додавання самого правого символу до суми
		++digits_quantity; //збільшення кількості цифр
		rest_of_digits /= 10; //
	}

	double average = sum;
	average /= digits_quantity;

	std::cout << "\nGiven number: " << given_number << "\nAverage: " << average;
}

unsigned DigitAverage(unsigned given_number) {
	unsigned rest_of_digits = given_number; // неопрацьована частина числа спочатку = цілому числу початковому
	unsigned sum = 0, digits_quantity = 0; // сума і к-сть цифр в числі

	while (rest_of_digits > 0) {
		unsigned rightmost_digit = rest_of_digits % 10; // 
		sum += rightmost_digit;
		++digits_quantity;
		rest_of_digits /= 10;
	}

	double average = sum;
	average /= digits_quantity;

	return average;
}


void IsPalindrome() {
	std::cout << "\nEnter a Whole number: ";
	unsigned given_number; 
	std::cin >> given_number;
	unsigned reversed_number = 0;
	unsigned rest_of_digits = given_number;

	while (rest_of_digits > 0) {
		unsigned rightmost_digit = rest_of_digits % 10;
		reversed_number = reversed_number * 10 + rightmost_digit;
		rest_of_digits /= 10;
	}

	if (reversed_number == given_number) {
		std::cout << given_number << " - is a palindrome\n";
	}
	else {
		std::cout << given_number << " - is not a palindrome\n";
	}
}

long long Reverse(long long m) {
	long long s = 0;

	while (m > 0) {
		s = s * 10 + m % 10;
		m /= 10;
	}

	return s;
}

void BezuHypothesis() {
	std::cout << "\nChecking Bezu hypothesis for x belongs to [a;b] in k steps\n\n";
	unsigned a, b, k;
	std::cout << "Enter a, b, k: ";
	std::cin >> a >> b >> k;

	for (unsigned number = a; number <= b; ++number) {
		unsigned i = 0;
		long long direct = number;
		long long reversed = 0;

		do {
			direct += reversed;
			reversed = Reverse(direct);
			++i;
		} while (reversed != direct && i <= k);

		std::cout << "For a number " << number << " in " << i << " step(s) ";
		if (reversed != direct) std::cout << "hypothesis is incorrect\n";
		else std::cout << "a palindrome received: " << reversed << '\n';
	}
}