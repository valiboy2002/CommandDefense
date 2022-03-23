#include "Complex.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}

Complex operator+(const Complex& l, const Complex& r)
{
    double real = l.real() + r.real();
    double imag = l.imag() + r.imag();
    return Complex(real, imag);
}
Complex operator+(const Complex& l, double r)
{
    return l + Complex(r, 0);
}
Complex operator+(double l, const Complex& r)
{
    return  Complex(r, 0) + l;

}
Complex operator-(const Complex& l, const Complex& r)
{
    double real = l.real() - r.real();
    double imag = l.imag() - r.imag();
    return Complex(real, imag);
}
Complex operator-(const Complex& l, double r)
{
    return l - Complex(r, 0);
}
Complex operator-(double l, const Complex& r)
{
    return  Complex(r, 0) - l;

}
Complex operator-(const Complex& obj)
{

}

bool operator==(const Complex& l, const Complex& r)
{
    if (l.real() == r.real() && l.imag() == r.imag())
        return true;
    return false;
}
bool operator!=(const Complex& l, const Complex& r)
{
    if (l.real() == r.real() || l.imag() == r.imag())
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex)
{
    if (complex.real() == 0 && complex.imag() == 0)
        return out;
    if (complex.is_real())
        out << complex.real();
    else
    {
        if (complex.real() == 0)
            out << complex.imag() << "i";
        else
            out << "{" << complex.real() << "," << complex.imag() << "}";
    }
    return out;
}
