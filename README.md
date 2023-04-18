Tiny-05
Tiny-05 is a C++ library that provides a simple implementation of complex numbers. The library consists of a single header file, tiny-05.hpp, that can be included in any C++ project.

Features
The Tiny-05 library provides the following features:

Basic arithmetic operations (+, -, *) for complex numbers and for complex numbers with real numbers
Accessors for the real and imaginary parts of a complex number
Mutators for the real and imaginary parts of a complex number
Usage
To use the Tiny-05 library in your project, simply include the tiny-05.hpp header file and use the pjc::complex class. Here is an example:

cpp
Copy code
#include <iostream>
#include "tiny-05.hpp"

int main() {
    pjc::complex z1(1.0, 2.0);
    pjc::complex z2(3.0, 4.0);

    std::cout << "z1 = " << z1.real() << " + " << z1.imag() << "i\n";
    std::cout << "z2 = " << z2.real() << " + " << z2.imag() << "i\n";

    pjc::complex z3 = z1 + z2;
    std::cout << "z3 = " << z3.real() << " + " << z3.imag() << "i\n";

    pjc::complex z4 = 2.0 * z1 - z2;
    std::cout << "z4 = " << z4.real() << " + " << z4.imag() << "i\n";

    return 0;
}
License
The Tiny-05 library is released under the MIT License. See the LICENSE file for details.
