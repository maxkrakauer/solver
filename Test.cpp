#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <string.h>
using namespace std;
#include <iostream>
#include <complex>
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE(""){
    // CHECK(t.relation("jim") == string("me"));
    RealVariable x;
   //CHECK(string("me")==string("me"));
   //CHECK(std::to_string(solve(2x==2))==std::to_string(1.0)); 
   double d=solve(2*x==2);
   string s=to_string(d);
   CHECK(s==string("1.0"));

   CHECK(to_string(solve(2*x==2))==string("1.0"));
   CHECK(to_string(solve(2*(x^2)==8))==string("2.0") || 
   to_string(solve(2*(x^2)==8))==string("-2.0"));

   

}