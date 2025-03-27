#ifndef STRICTNEGATENUMBER_HPP
#define STRICTNEGATENUMBER_HPP

#include <iostream>
#include <cstdint>
#include <cstdlib>

class StrictNegateNumber {
public:
  StrictNegateNumber(bool debug = false) : debug_(debug) {}

  void NormalMethod(double number) {
    if (debug_) {
      std::cout << "original number: " << number << std::endl;
      std::cout << "original number address: " << &number << std::endl;
    }

    number = -std::abs(number);

    if (debug_) {
      std::cout << "negated number: " << number << std::endl;
      std::cout << "negated number address: " << &number << std::endl;
    }
  }

  void LowLatencyMethod(double number) {
    if (debug_) {
      std::cout << "original number: " << number << std::endl;
      std::cout << "original number address: " << &number << std::endl;
    }

    const auto orig_number = number;
    auto number_as_uint = reinterpret_cast<uint64_t*>(&number);
    *number_as_uint |= 0x8000000000000000;

    if (debug_) {
      std::cout << "negated number: " << number << std::endl;
      std::cout << "negated number address: " << &number << std::endl;
    }
  }

private:
  bool debug_;
};

#endif // STRICTNEGATENUMBER_HPP