#include "simple_values.td.h"

bool operator==(const structA &lhs, const structA &rhs) {
  return
    (lhs.saimpliedChar() == rhs.saimpliedChar()) &&
    (lhs.sasm() == rhs.sasm()) &&
    (lhs.sasm2() == rhs.sasm2()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const structA& obj) {
  os << "struct structA :\n";
  os << "  saimpliedChar = " << obj.saimpliedChar();
  os << "  sasm = " << obj.sasm();
  os << "  sasm2 = " << obj.sasm2();
  return os;
}

bool operator==(const structB &lhs, const structB &rhs) {
  return
    (lhs.sbsm() == rhs.sbsm()) &&
    (lhs.sbsm2() == rhs.sbsm2()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const structB& obj) {
  os << "struct structB :\n";
  os << "  sbsm = " << obj.sbsm();
  os << "  sbsm2 = " << obj.sbsm2();
  return os;
}

bool operator==(const structC &lhs, const structC &rhs) {
  return
    (lhs.scsm() == rhs.scsm()) &&
    (lhs.scsm2() == rhs.scsm2()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const structC& obj) {
  os << "struct structC :\n";
  os << "  scsm = " << obj.scsm();
  os << "  scsm2 = " << obj.scsm2();
  return os;
}

