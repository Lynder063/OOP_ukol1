#include "tiny-05.hpp"

namespace pjc {

    complex::complex(double real, double imaginary) :
            m_real(real),
            m_imag(imaginary) {}

    double complex::real() const {
        return m_real;
    }

    void complex::real(double d) {
        m_real = d;
    }

    double complex::imag() const {
        return m_imag;
    }

    void complex::imag(double d) {
        m_imag = d;
    }

    complex complex::operator+(complex const& rhs) const {
        return pjc::complex(m_real + rhs.m_real, m_imag + rhs.m_imag);
    }

    complex complex::operator-(complex const& rhs) const {
        return pjc::complex(m_real - rhs.m_real, m_imag - rhs.m_imag);
    }

    complex complex::operator*(complex const& rhs) const {
        double a = m_real * rhs.m_real - m_imag * rhs.m_imag;
        double b = m_real * rhs.m_imag + m_imag * rhs.m_real;
        return pjc::complex(a, b);
    }

    complex complex::operator+(double const& rhs) const {
        return pjc::complex(m_real + rhs, m_imag);
    }

    complex complex::operator-(double const& rhs) const {
        return pjc::complex(m_real - rhs, m_imag);
    }

    complex complex::operator*(double const& rhs) const {
        return pjc::complex(m_real * rhs, m_imag * rhs);
    }

    complex operator+(double const& lhs, complex const& rhs) {
        return pjc::complex(lhs + rhs.m_real, rhs.m_imag);
    }

    complex operator-(double const& lhs, complex const& rhs) {
        return pjc::complex(lhs - rhs.m_real, -rhs.m_imag);
    }

    complex operator*(double const& lhs, complex const& rhs) {
        return pjc::complex(lhs * rhs.m_real, lhs * rhs.m_imag);
    }

}
