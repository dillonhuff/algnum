#pragma once

namespace algnum {

  class algebraic_number {

  public:
    algebraic_number(const int i) {}

  };

  typedef algebraic_number anum;

  
  inline bool operator==(const algebraic_number& a, const algebraic_number& b) {
    return true;
  }

}
