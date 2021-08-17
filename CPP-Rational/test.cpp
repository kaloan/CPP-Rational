#include "Rational.cpp"
#include <iostream>
using namespace std;

int main()
{
	auto ex1 = Rational<int>(5, 2);
	auto ex2 = Rational<int>(3);
	cout << ex1.getNumerator() << "/" << ex1.getDenominator() << "\n";
	cout << (ex1 + ex2).getNumerator() << "/" << (ex1 + ex2).getDenominator() << "\n";
	cout << (ex1 * ex2).getNumerator() << "/" << (ex1 * ex2).getDenominator() << "\n";
	cout << (ex1 / ex2).getNumerator() << "/" << (ex1 / ex2).getDenominator() << "\n";
	cout << (ex1 - ex2).getNumerator() << "/" << (ex1 - ex2).getDenominator() << "\n";

	cin.get();

	return 0;
}