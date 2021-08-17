#include "Rational.h"

template<class T>
inline constexpr Rational<T>::Rational()
{
	numerator = T(1);
	denominator = T(1);
}

template<class T>
inline constexpr Rational<T>::Rational(const T &num, const T &denom)
{
	numerator = num;
	denominator = denom;
}

template<class T>
inline constexpr Rational<T>::Rational(const T &num)
{
	numerator = num;
	denominator = T(1);
}

template<class T>
inline constexpr Rational<T>::Rational(const Rational &rat)
{
	numerator = rat.numerator;
	denominator = rat.denominator;
}

template<class T>
inline constexpr void Rational<T>::setNumerator(const T &num)
{
	numerator = num;
}

template<class T>
inline constexpr void Rational<T>::setDenominator(const T &denom)
{
	denominator = denom;
}

template<class T>
inline constexpr T Rational<T>::getNumerator() const
{
	return numerator;
}

template<class T>
inline constexpr T Rational<T>::getDenominator() const
{
	return denominator;
}

template<class T>
inline constexpr Rational<T> Rational<T>::operator+(const Rational<T> &rat) const
{
	return Rational<T>(numerator*rat.denominator + denominator * rat.numerator, denominator*rat.denominator);
}

template<class T>
inline constexpr Rational<T> Rational<T>::operator-(const Rational<T>& rat) const
{
	return *this + Rational<T>(-rat.numerator, rat.denominator);
}

template<class T>
inline constexpr Rational<T> Rational<T>::operator*(const Rational &rat) const
{
	return Rational<T>(numerator*rat.numerator, denominator*rat.denominator);
}

template<class T>
inline constexpr Rational<T> Rational<T>::operator/(const Rational<T> &rat) const
{
	return (*this) * (Rational<T>(rat.denominator, rat.numerator));
}

template<class T>
inline constexpr Rational<T> Rational<T>::operator()(const T &num)
{
	return Rational<T>(num);
}
