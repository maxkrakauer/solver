
#include <complex.h>
#include <iostream>
#include <vector>
#include "string.h"
using namespace std;


namespace solver{

    class RealVariable{

        float _value;

       
    };

    class ComplexVariable{

         complex<double>_value;
        
        
    };

    class RealUnit{
        RealVariable _variable;
        float _coefficient;
        int _exponent;

        //friend RealUnit& operator^(RealVariable x, int y);

        //friend RealVariable& operator+(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealVariable x);

        //friend RealVariable& operator+(RealVariable x);

        //friend RealUnit& operator*(int x, RealVariable y);

        //friend RealUnit& operator*(int x, RealVariable& y);

        //friend RealUnit& operator*(int x, RealUnit y);
    };

    class ComplexUnit{
        ComplexVariable _x;
        int _power;

        //friend ComplexUnit& operator^(ComplexVariable x, int y);

        //friend RealVariable& operator+(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealUnit x, RealUnit y);

        //friend ComplexVariable& operator-(ComplexVariable x);

        //friend ComplexVariable& operator+(ComplexVariable x);
    };


    class RealVec{

        vector<RealUnit>_units;
        bool _equation;
        
        //friend RealVec& operator+(RealVec x, RealVec y);

        //friend RealVec& operator-(RealVec x, RealVec y);

        

        //friend RealVec& operator==(RealVec x, RealVec y);
        
        
        /*
        vector<string> out;
	
		out.push_back(str.substr(start, end - start));
	
        */ 
    };

    class ComplexVec{

        vector<ComplexUnit>_units;
        bool _equation;
        
        //friend ComplexVec& operator+(ComplexVec x, ComplexVec y);

        //friend ComplexVec& operator-(ComplexVec x, ComplexVec y);

        //friend ComplexVec& operator==(ComplexVec x, ComplexVec y);

    };

   


        double solve(ComplexVec c);
        double solve(RealVec r);
        
        //RealUnit& operator*(int x, RealVariable y);
        RealUnit& operator^(RealVariable x, int y);

        //friend RealVariable& operator+(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealUnit x, RealUnit y);

        RealUnit& operator-(RealVariable x);

        RealVec& operator-(RealVec x, RealVariable y);

        RealVariable& operator+(RealVariable x);

        RealUnit& operator*(int x, RealVariable y);

        RealUnit& operator*(int x, RealUnit y);

        //RealUnit& operator*(int x, RealVariable& y);

        //RealUnit& operator*(int x, RealVariable& y);

        //RealUnit& operator*(int x, RealUnit& y);

        ComplexUnit& operator^(ComplexVariable x, int y);

        RealVariable& operator-(RealUnit x, RealUnit y);

        //RealVariable& operator-(RealUnit x, int y);

        ComplexVariable& operator-(ComplexVariable x);

        ComplexVariable& operator+(ComplexVariable x);

        RealVec& operator+(RealVec x, RealVec y);

        RealVec& operator+(RealUnit x, RealUnit y);

        RealVec& operator-(RealVec x, RealVec y);

        RealVec& operator-(RealUnit x, int y);

        RealVec& operator-(RealUnit x, double y);

        RealVec& operator-(double x, RealUnit y);

        RealVec& operator+(RealUnit x, double y);

        RealVec& operator+(double x, RealUnit y);

        RealVec& operator+(RealVec x, double y);

        RealVec& operator+(double x, RealVec y);

        RealVec& operator==(RealUnit x, int y);

        RealVec& operator==(RealVec x, RealVec y);

        RealVec& operator==(RealVec x, int y);

        ComplexVec& operator+(ComplexVec x, ComplexVec y);

        ComplexVec& operator-(ComplexVec x, ComplexVec y);

        ComplexVec& operator==(ComplexVec x, ComplexVec y);

        RealUnit& operator/(RealVariable x, int y);

        RealUnit& operator*(double x, RealUnit y);

        RealUnit& operator*(double x, RealVariable y);
        
        ComplexUnit& operator*(int x, ComplexVariable y);

        ComplexVec& operator-(ComplexUnit x, int y);

        ComplexVec& operator==(ComplexVec x, int y);

        RealUnit& operator/(RealUnit x, int y);

        ComplexVec& operator==(ComplexUnit x, int y);

        ComplexVec& operator+(ComplexUnit x, ComplexUnit y);

        ComplexVec& operator+(ComplexVec x, int y);

        ComplexVec& operator+(ComplexUnit x, int y);

        ComplexVec& operator+(int x, ComplexVec y);

        ComplexVec& operator+(int x, ComplexUnit y);

        ComplexVec& operator+(ComplexVariable x, ComplexVec y);

        ComplexVec& operator+(ComplexVariable x, ComplexUnit y);

        ComplexVec& operator+(ComplexVariable x, complex <double>y);

        ComplexVec& operator+(ComplexVariable x, complex <double>y);

        ComplexUnit& operator*(int x, ComplexVariable y);

        ComplexVec& operator+(ComplexUnit x, complex<double>y);

        ComplexUnit& operator/(ComplexUnit x, int y);

        ComplexVec& operator-(ComplexVec x, ComplexVariable y);

        RealUnit& operator*(int x, RealUnit& y);

       

};
