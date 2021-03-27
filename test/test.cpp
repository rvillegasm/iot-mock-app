#include <catch2/catch_all.hpp>

#include "Calculator.hpp"

TEST_CASE( "Calculate squares", "[Calculator::square]" )
{
    REQUIRE( Calculator::square(1.0f) == 1.0f );
    REQUIRE( Calculator::square(2.0f) == 4.0f );
    REQUIRE( Calculator::square(3.0f) == 9.0f );
    REQUIRE( Calculator::square(4.0f) == 16.0f );
    REQUIRE( Calculator::square(5.0f) == 25.0f );
}

TEST_CASE( "Calculate cubes", "[Calculator::cube]" )
{
    REQUIRE( Calculator::cube(1.0f) == 1.0f );
    REQUIRE( Calculator::cube(2.0f) == 8.0f );
    REQUIRE( Calculator::cube(3.0f) == 27.0f );
    REQUIRE( Calculator::cube(4.0f) == 64.0f );
    REQUIRE( Calculator::cube(5.0f) == 125.0f );
}

TEST_CASE( "Calculate power of 4", "[Calculator::pow]" )
{
    REQUIRE( Calculator::pow(1.0f, 4) == 1.0f );
    REQUIRE( Calculator::pow(2.0f, 4) == 16.0f );
    REQUIRE( Calculator::pow(3.0f, 4) == 81.0f );
    REQUIRE( Calculator::pow(4.0f, 4) == 256.0f );
    REQUIRE( Calculator::pow(5.0f, 4) == 625.0f );
}