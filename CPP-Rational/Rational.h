#pragma once

template <class T>
class Rational
{
private:
	T numerator;
	T denominator;

public:
	inline constexpr Rational();
	inline constexpr Rational(const T&, const T&);
	inline constexpr Rational(const T&);
	inline constexpr Rational(const Rational&);

	inline constexpr void setNumerator(const T&);
	inline constexpr void setDenominator(const T&);
	inline constexpr T getNumerator() const;
	inline constexpr T getDenominator() const;

	inline constexpr Rational<T> operator+(const Rational<T>&) const;
	inline constexpr Rational<T> operator-(const Rational<T>&) const;
	inline constexpr Rational<T> operator*(const Rational<T>&) const;
	inline constexpr Rational<T> operator/(const Rational<T>&) const;
	inline constexpr Rational<T> operator()(const T&);
};
