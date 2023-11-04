#include <iostream>
#include "Chapter1.h"

int main()
{
	std::cout << "What chapter are you interested in?\n1. Actions with a single number\n\n";
	int ans1;
	std::cin >> ans1;
	switch (ans1)
	{
	case 1: {
		std::cout << "\nWhat are you interested in?\n1 - Digit average;\n2 - Checking for palindrome\n3 - Bezu hypothesis\n\n";
		int ans2;
		std::cin >> ans2;
		switch (ans2)
		{
		case 1: DigitAverage(); break;
		case 2: IsPalindrome(); break;
		case 3: BezuHypothesis(); break;
		default: std::cout << "There is no such exercise\n"; break;
		}
	}
	default:
		break;
	}
}

