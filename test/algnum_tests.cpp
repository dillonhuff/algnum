#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "algebraic_number.h"

namespace algnum {

  TEST_CASE("Initialize algebraic number with integer") {
    anum a(1);
    anum b(1);

    REQUIRE(a == b);
  }

}
