#include "solver.hpp"

using solver::RealVariable, solver::ComplexVariable,
solver::solve, solver::RealUnit, solver::ComplexUnit, 
solver::RealVec, solver::ComplexVec;




        RealUnit& solver::operator^(RealVariable x, int y){
            RealUnit r;
            return r;
        }

        RealUnit& solver::operator-(RealVariable x){
            RealUnit r;
            return r;
        }

        RealVariable& solver::operator+(RealVariable x){
            RealVariable r;
            return r;
        }

        ComplexUnit& solver::operator^(ComplexVariable x, int y){
            ComplexUnit c;
            return c;
        }

        RealVec& solver::operator+(RealUnit x, RealUnit y){
            RealVec r;
            return r;
        }

        RealVariable& solver::operator-(RealUnit x, RealUnit y){
            RealVariable r;
            return r;
        }

        ComplexVariable& solver::operator-(ComplexVariable x){
            ComplexVariable c;
            return c;
        }

        ComplexVariable& solver::operator+(ComplexVariable x){
            ComplexVariable c;
            return c;
        }

        RealVec& solver::operator+(RealVec x, RealVec y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator-(RealVec x, RealVec y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator-(RealUnit x, int y){
            RealVec r;
            return r;
        }
/*
        RealVec& operator==(RealVec x, RealVec y){
            RealVec r;
            return r;
        }
*/


        RealUnit& solver::operator*(int x, RealUnit& y){
            RealUnit r;
            return r;
        }

        RealUnit& solver::operator*(int x, RealVariable y){
            RealUnit r;
            return r;
        }

        
        RealUnit& solver::operator*(int x, RealUnit y){
            RealUnit r;
            return r;
        }

        ComplexVec& solver::operator+(ComplexVec x, ComplexVec y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator-(ComplexVec x, ComplexVec y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator==(ComplexVec x, ComplexVec y){
            ComplexVec c;
            return c;
        }

        double solver::solve(ComplexVec c){
            return 1.0;
        }

        double solver::solve(RealVec r){
            return 1.0;
        }


        RealVec& solver::operator==(RealVec x, int y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator==(RealUnit x, int y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator+(RealUnit x, double y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator+(double x, RealUnit y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator+(RealVec x, double y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator+(double x, RealVec y){
            RealVec r;
            return r;
        }

        RealUnit& solver::operator/(RealVariable x, int y){
            RealUnit r;
            return r;
        }

        RealUnit& solver::operator*(double x, RealUnit y){
            RealUnit r;
            return r;
        }

        RealUnit& solver::operator*(double x, RealVariable y){
            RealUnit r;
            return r;
        }

        RealUnit& solver::operator/(RealUnit x, int y){
            RealUnit r;
            return r;
        }

        RealVec& solver::operator-(RealVec x, RealVariable y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator==(RealVec x, RealVec y){
            RealVec r;
            return r;
        }

        RealVec& solver::operator-(RealUnit x, double y){
            RealVec r;
            return r;
        }
/*
        ComplexUnit& solver::operator*(int x, ComplexVariable y){
            ComplexUnit c;
            return c;
        }
        */

        ComplexVec& solver::operator-(ComplexUnit x, int y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator==(ComplexVec x, int y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator==(ComplexUnit x, int y){
            ComplexVec c;
            return c;
        }

        
        ComplexVec& solver::operator+(ComplexUnit x, ComplexUnit y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator+(ComplexVec x, int y){
            ComplexVec c;
            return c;
        }

        ComplexUnit& solver::operator*(int x, ComplexVariable y){
            ComplexUnit c;
            return c;
        }

        ComplexUnit& solver::operator/(ComplexUnit x, int y){
            ComplexUnit c;
            return c;
        }

        ComplexVec& solver::operator+(int x, ComplexUnit y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator-(ComplexVec x, ComplexVariable y){
            ComplexVec c;
            return c;
        }

        ComplexVec& solver::operator+(ComplexVariable x, complex<double>y){
            ComplexVec c;
            return c;
        }
/*
        ComplexUnit& solver::operator*(int x, ComplexVariable y){
            ComplexUnit c;
            return c;
        }
*/
        ComplexVec& solver::operator+(ComplexUnit x, complex<double>y){
            ComplexVec c;
            return c;
        }








