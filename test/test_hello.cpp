#include "catch.hpp"
#include "../include/main.hpp"

TEST_CASE( "Hello World", "[hello]" ) {
    REQUIRE( hello() == 4 );
}
