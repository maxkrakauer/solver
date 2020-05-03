
#include <complex.h>
#include <iostream>
#include <vector>
#include "string.h"
using namespace std;


namespace solver{
    
    class RealVariable{
        public:
        float _value;

        
    };

    class ComplexVariable{
        public:
         complex<double>_value;
        
        
    };

    class RealUnit{
        public:
        RealUnit(){};
        RealUnit(RealVariable var, float co, int ex){
            _variable=var;
            _coeff=co;
            _exponent=ex;
        }       
        public:
        RealVariable _variable;
        double _coeff;
        int _exponent;


        
        
    };

    class ComplexUnit{
        public:
        ComplexUnit(){}
        ComplexUnit(ComplexVariable var, complex<double> co, int ex){
            _variable=var;
            _coeff=co;
            _exponent=ex;
        }
        public:
        ComplexVariable _variable;
        int _exponent;
        complex<double> _coeff;

        //friend ComplexUnit& operator^(ComplexVariable x, int y);

        //friend RealVariable& operator+(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealUnit x, RealUnit y);

        //friend ComplexVariable& operator-(ComplexVariable x);

        //friend ComplexVariable& operator+(ComplexVariable x);
    };


    class RealVec{
        public:
        RealVec(){
            _equation=false;
        };
        RealVec(vector<RealUnit> units, bool equation){
            _units=units;
            _equation=equation;
        }
        public:
        vector<RealUnit>_units;
        bool _equation;
        
        public:
        double quadratic(); //quardratic equations
        int equation(); 
        double linear();
        /*
        case 1: if no variable: return 0
        case 2: if linear: return 1
        case 3: if quardratic: return 2
        */
        
        friend RealVec varToRVec(RealVariable x);
        friend RealVec doubleToRVec(double x);
        friend RealVec unitToRVec(RealUnit x);

    };

    class ComplexVec{
        public:

        ComplexVec(){
            _equation=false;
        }
        ComplexVec(vector<ComplexUnit>units, bool equation){
            _units=units;
            _equation=equation;
        }
        public:
        vector<ComplexUnit>_units;
        bool _equation;

        public:
        complex<double> quadratic(); //quardratic equations
        int equation(); 
        complex<double> linear();
        
        //friend ComplexVec& operator+(ComplexVec x, ComplexVec y);

        //friend ComplexVec& operator-(ComplexVec x, ComplexVec y);

        //friend ComplexVec& operator==(ComplexVec x, ComplexVec y);

        friend ComplexVec varToCVec(ComplexVariable x);
        friend ComplexVec doubleToCVec(complex<double> x);
        friend ComplexVec unitToCVec(ComplexUnit x);

    };

   


        complex<double> solve(ComplexVec c);
        double solve(RealVec r);
         
        RealVec operator+(RealVariable x);
        
        RealVec operator+(RealVec x, RealVec y);

        RealVec operator+(RealUnit x, RealUnit y);

        RealVec operator-(RealVec x, RealVec y);

        //RealVec& operator-(RealUnit x, int y);

        RealVec operator-(RealUnit x, double y);

        RealVec operator-(double x, RealUnit y);

        RealVec operator+(RealUnit x, double y);
        
        RealVec operator+(double x, RealUnit y);

        RealVec operator+(RealVec x, double y);

        RealVec operator+(double x, RealVec y);

        RealVec operator==(RealUnit x, double y);

        RealVec operator==(RealVec x, RealVec y);

        RealVec operator==(RealVec x, double y);
        
        
        RealUnit operator^(RealVariable x, int y);
        
        //RealUnit& operator*(int x, RealVariable y);
        

        //friend RealVariable& operator+(RealUnit x, RealUnit y);

        //friend RealVariable& operator-(RealUnit x, RealUnit y);

        RealVec operator-(RealVariable x);

        RealVec operator-(RealVec x, RealVariable y);

        RealUnit operator*(double x, RealVariable y);

        RealUnit operator*(double x, RealUnit y);

        //RealUnit& operator*(int x, RealVariable& y);

        //RealUnit& operator*(int x, RealVariable& y);

        //RealUnit& operator*(int x, RealUnit& y);

        ComplexUnit operator^(ComplexVariable x,int y);

        RealVec operator-(RealUnit x, RealUnit y);

        //RealVariable& operator-(RealUnit x, int y);

        //ComplexVariable& operator-(ComplexVariable x);

        ComplexUnit operator+(ComplexVariable x);

        ComplexVec operator+(ComplexVec x, ComplexVec y);

        ComplexVec operator-(ComplexVec x, ComplexVec y);

        ComplexVec operator==(ComplexVec x, ComplexVec y);

        RealUnit operator/(RealVariable x, double y);

        RealUnit operator*(double x, RealUnit y);

        RealUnit operator*(double x, RealVariable y);
        
        ComplexUnit operator*(complex<double> x, ComplexVariable y);

        ComplexVec operator-(ComplexUnit x, complex<double> y);

        ComplexVec operator==(ComplexVec x, complex<double> y);

        RealUnit operator/(RealUnit x, double y);

        ComplexVec operator==(ComplexUnit x, complex<double> y);

        ComplexVec operator+(ComplexUnit x, ComplexUnit y);

        ComplexVec operator+(ComplexVec x, complex<double> y);

        ComplexVec operator+(ComplexUnit x, complex<double> y);

        ComplexVec operator+(complex<double> x, ComplexVec y);

        ComplexVec operator+(complex<double> x, ComplexUnit y);

        ComplexVec operator+(ComplexVariable x, ComplexVec y);

        ComplexVec operator+(ComplexVariable x, ComplexUnit y);

        ComplexVec operator+(ComplexVariable x, complex <double>y);

        ComplexVec operator+(ComplexVariable x, complex <double>y);

        ComplexUnit operator*(complex<double> x, ComplexVariable y);

        ComplexVec operator+(ComplexUnit x, complex<double>y);

        ComplexUnit operator/(ComplexUnit x, complex<double> y);

        ComplexVec operator-(ComplexVec x, ComplexVariable y);

        RealUnit operator*(double x, RealUnit& y);

        ComplexVec operator-(ComplexVariable x);

        ComplexVec operator-(ComplexVec x, complex<double>y);

        //ComplexVec operator-(complex<double>x);

        //RealUnit& operator-(RealVariable x);
         
/*
        ComplexUnit& operator+(double x);

        ComplexUnit& operator+(int x);

        ComplexUnit& operator-(double x);

        RealUnit& operator+(int x);

        RealUnit& operator+(double x);

        RealUnit& operator-(int x);

        RealUnit& operator-(double x);
        */

};
