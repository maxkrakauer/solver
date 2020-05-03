#include "solver.hpp"

using solver::RealVariable, solver::ComplexVariable,
solver::solve, solver::RealUnit, solver::ComplexUnit, 
solver::RealVec, solver::ComplexVec;
//using namespace std;

double _a,_b,_c;
complex<double>_coma, _comb, _comc;



        struct oops : std::exception {
            string what()  noexcept 
            {
                printf("throwing oops\n");
                return "no solution";}
            };



        RealVec solver::doubleToRVec(double x){
            RealVariable y;
            RealUnit unit (y,x,0);
            vector<RealUnit>units;
            units.push_back(unit);
            RealVec r(units,false);
            return r;
        }

        RealVec solver::varToRVec(RealVariable x){
            RealUnit unit(x,1,1);
            vector<RealUnit>units;
            units.push_back(unit);
            RealVec r(units,false);
            return r;
        }



         ComplexVec solver::varToCVec(ComplexVariable y){
            ComplexUnit unit (y,1,1);
            vector<ComplexUnit>units;
            units.push_back(unit);
            ComplexVec c(units,false);
            return c;
         }

         ComplexVec solver::doubleToCVec(complex<double> x){
            ComplexVariable y;
            ComplexUnit unit(y,x,0);
            vector<ComplexUnit>units;
            units.push_back(unit);
            ComplexVec c(units,false);
            return c;
         }

         RealVec solver::unitToRVec(RealUnit x){
             vector<RealUnit>units;
             units.push_back(x);
             RealVec r(units,false);
             return r;
         }

         ComplexVec solver::unitToCVec(ComplexUnit x){
             vector<ComplexUnit>units;
             units.push_back(x);
             ComplexVec c(units,false);
             return c;
         }


        RealUnit solver::operator^(RealVariable x, int y){
           RealUnit r(x,1,y);
           return r;
        }
/*
        RealUnit& solver::operator-(RealVariable x){
           RealUnit r(x,-1,1);
           return r;
        }
*/
        RealVec solver::operator+(RealVariable x){
            RealVec r=varToRVec(x);
            return r;
        }
        

        ComplexUnit solver::operator^(ComplexVariable x, int y){
            ComplexUnit c(x,1,y);
            return c;
        }

        RealVec solver::operator+(RealUnit x, RealUnit y){
            
            RealVec rx=unitToRVec(x);
            RealVec ry=unitToRVec(y);
            return rx+ry;
        }

        RealVec solver::operator-(RealUnit x, RealUnit y){
            
            RealVec rx=unitToRVec(x);
            RealVec ry=unitToRVec(y);
            return rx-ry;
        }

        ComplexVec solver::operator-(ComplexVariable x){
            ComplexVec c=varToCVec(x);
            c._units[0]._coeff=-1;
            return c;
        }

        ComplexUnit solver::operator+(ComplexVariable x){
            ComplexUnit c (x,1,1);
            return c;
        }

        RealVec solver::operator+(RealVec x, RealVec y){
            vector<RealUnit>units;
            for(int i=0; i<3; i++){
                RealUnit unit;
                unit._exponent=-1;
                unit._coeff=0;
                for(RealUnit r:x._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                for(RealUnit r:y._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                if(unit._exponent>-1){
                    units.push_back(unit);
                }
            }
            RealVec r(units,false);
            return r;
        }

        RealVec solver::operator-(RealVec x, RealVec y){
            vector<RealUnit>units;
            for(int i=0; i<3; i++){
                RealUnit unit;
                unit._exponent=-1;
                unit._coeff=0;
                for(RealUnit r:x._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                for(RealUnit r:y._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff-=r._coeff;
                    }
                }
                if(unit._exponent>-1){
                    units.push_back(unit);
                }
            }
            RealVec r(units,false);
            return r;
        }


        RealVec solver::operator-(RealUnit x, double y){
            RealUnit ry(x._variable,y,0);
            RealVec r=x-ry;
            return r;
        }

        RealVec operator==(RealVec x, RealVec y){
            RealVec r=x-y;
            r._equation=true;
            return r;
        }


        RealUnit solver::operator*(double x, RealUnit y){
            RealUnit r(y._variable, x*y._coeff, y._exponent);
            return r;
        }

        RealUnit solver::operator*(double x, RealVariable y){
            RealUnit r(y,x,1);
            return r;
        }
/*
        RealUnit& solver::operator*(double x, RealUnit y){
            RealUnit r(y._variable,x*y._coeff,y._exponent);
            return r;
        }
*/
        ComplexVec solver::operator+(ComplexVec x, ComplexVec y){
            vector<ComplexUnit>units;
            for(int i=0; i<3; i++){
                ComplexUnit unit;
                unit._exponent=-1;
                unit._coeff=0;
                for(ComplexUnit r:x._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                for(ComplexUnit r:y._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                if(unit._exponent>-1){
                    units.push_back(unit);
                }
            }
            ComplexVec c(units,false);
            return c;
        }

        ComplexVec solver::operator-(ComplexVec x, ComplexVec y){
            vector<ComplexUnit>units;
            for(int i=0; i<3; i++){
                ComplexUnit unit;
                unit._exponent=-1;
                unit._coeff=0;
                for(ComplexUnit r:x._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff+=r._coeff;
                    }
                }
                for(ComplexUnit r:y._units){
                    if(r._exponent==i){
                        unit._exponent=i;
                        unit._coeff-=r._coeff;
                    }
                }
                if(unit._exponent>-1){
                    units.push_back(unit);
                }
            }
            ComplexVec c(units,false);
            return c;
        }

        
        RealVec solver::operator==(RealVec x, double y){
            RealVec ry=doubleToRVec(y);
            return x==ry;
        }

        RealVec solver::operator==(RealUnit x, double y){
            RealVec ry=doubleToRVec(y);
            vector<RealUnit>units;
            units.push_back(x);
            RealVec rx(units,false);
            return ry==rx;
        }

        RealVec solver::operator+(RealUnit x, double y){
            RealVec ry=doubleToRVec(y);
            vector<RealUnit>units;
            units.push_back(x);
            RealVec rx(units,false);
            return ry+rx;
        }

        RealVec solver::operator+(double x, RealUnit y){
            RealVec rx=doubleToRVec(x);
            vector<RealUnit>units;
            units.push_back(y);
            RealVec ry(units,false);
            return ry+rx;
        }

        RealVec solver::operator+(RealVec x, double y){
            RealVec ry=doubleToRVec(y);
            return x+ry;
        }

        RealVec solver::operator+(double x, RealVec y){
            RealVec rx=doubleToRVec(x);
            return rx+y;
        }

        RealUnit solver::operator/(RealVariable x, double y){
            RealUnit rx(x,1/y,1);
            return rx;
        }
/*
        RealUnit& solver::operator*(double x, RealUnit y){
            RealUnit r(y._variable,x*y._coeff,y._exponent);
            return r;
        }
*/
/*
        RealUnit& solver::operator*(double x, RealVariable y){
            RealUnit r(y,x,1);
            return r;
        }
*/
        RealUnit solver::operator/(RealUnit x, double y){
            RealUnit r(x._variable, x._coeff/y, x._exponent);
            return r;
        }

        RealVec solver::operator-(RealVec x, RealVariable y){
            RealVec r=varToRVec(y);
            return x-r;
        }

        RealVec solver::operator==(RealVec x, RealVec y){
            RealVec r = x-y;
            r._equation=true;
            return r;
        }
/*
        RealVec& solver::operator-(RealUnit x, double y){
            RealVec ry=doubleToRVec(y);
            RealVec rx=unitToRVec(x);
            return rx-ry;
        }
        */
/*
        ComplexUnit& solver::operator*(int x, ComplexVariable y){
            ComplexUnit c;
            return c;
        }
        */

        ComplexVec solver::operator-(ComplexUnit x, complex<double> y){
            ComplexVec cx=unitToCVec(x);
            ComplexVec cy=doubleToCVec(y);
            return cx-cy;
        }

        ComplexVec solver::operator==(ComplexVec x,complex<double> y){
            ComplexVec c=doubleToCVec(y);
            ComplexVec com = x-c;
            com._equation=true;
            return com;
        }

        ComplexVec solver::operator==(ComplexUnit x, complex<double> y){
            ComplexVec cx=unitToCVec(x);
            ComplexVec cy=doubleToCVec(y);
            ComplexVec com=cx-cy;
            com._equation=true;
            return com;
        }

        
        ComplexVec solver::operator+(ComplexUnit x, ComplexUnit y){
            ComplexVec cx=unitToCVec(x);
            ComplexVec cy=unitToCVec(y);
            return cx+cy;
        }

        ComplexVec solver::operator+(ComplexVec x, complex<double> y){
            ComplexVec cy=doubleToCVec(y);
            return x+cy;
        }

        ComplexUnit solver::operator*(complex<double> x, ComplexVariable y){
            ComplexUnit c(y,x,1);
            return c;
        }

        ComplexUnit solver::operator/(ComplexUnit x,complex<double> y){
            ComplexUnit c(x._variable,x._coeff/y,x._exponent);
            return c;
        }

        ComplexVec solver::operator+(complex<double> x, ComplexUnit y){
            ComplexVec cx=doubleToCVec(x);
            ComplexVec cy=unitToCVec(y);
            return cx+cy;
        }

        ComplexVec solver::operator-(ComplexVec x, ComplexVariable y){
            ComplexVec c=varToCVec(y);
            return x-c;
        }

        ComplexVec solver::operator+(ComplexVariable x, complex<double>y){
            ComplexVec cx=varToCVec(x);
            ComplexVec cy=doubleToCVec(y);
            return cx+cy;
        }
/*
        ComplexUnit& solver::operator*(int x, ComplexVariable y){
            ComplexUnit c;
            return c;
        }
*/
        ComplexVec solver::operator+(ComplexUnit x, complex<double>y){
            ComplexVec cx=unitToCVec(x);
            ComplexVec cy=doubleToCVec(y);
            return cx+cy;
        }
/*
        ComplexVec solver::operator-(complex<double>x){
            ComplexVec c = doubleToCVec(-x);
            return c;
        }

*/

        ComplexVec solver::operator-(ComplexVec x, complex<double>y){
            ComplexVec cy=doubleToCVec(y);
            return x-cy;
        }



        double RealVec::quadratic(){
            vector<RealUnit>units=_units;
            int len=units.size();
            _a=0;
            _b=0;
            _c=0;
            for(int i=0;i<len;i++){
                if(units[i]._exponent==0){
                    _c=units[i]._coeff;
                }
                else if(units[i]._exponent==1){
                    _b=units[i]._coeff;
                }
               else if(units[i]._exponent==2){
                    _a=units[i]._coeff;
                }
            }
            if(pow(_b,2)-4*(_a*_c)<0){
                throw oops();
            }
            return (-_b+pow(pow(_b,2)-4*(_a*_c),.5))/2*_a;
        }


         complex<double> ComplexVec::quadratic(){
            vector<ComplexUnit>units=_units;
            int len=units.size();
            _coma=0;
            _comb=0;
            _comc=0;
            for(int i=0;i<len;i++){
                if(units[i]._exponent==0){
                    _comc+=units[i]._coeff;
                }
                else if(units[i]._exponent==1){
                    _comb+=units[i]._coeff;
                }
               else if(units[i]._exponent==2){
                    _coma+=units[i]._coeff;
                }
            }
            printf("comb is %lf\n",_comb);
            printf("coma is %lf\n",_coma);
            printf("comc is %lf\n",_comc);
            printf("pow(pow(_comb,2)-4.0*(_coma*_comc),.5) is: %lf\n",pow(pow(_comb,2)-4.0*(_coma*_comc),.5));
            return (-_comb+sqrt(pow(_comb,2)-4.0*(_coma*_comc)))/2.0*_coma;
         }

        double RealVec::linear(){
            vector<RealUnit>units=_units;
            int len=units.size();
            _b=0;
            _c=0;
            for(int i=0;i<len;i++){
                if(units[i]._exponent==0){
                    _c=units[i]._coeff;
                }
                else if(units[i]._exponent==1){
                    _b=units[i]._coeff;
                }
            }
            return -_c/_b;
        }


         complex<double> ComplexVec::linear(){
            vector<ComplexUnit>units=_units;
            int len=units.size();
            _comb=0;
            _comc=0;
            for(int i=0;i<len;i++){
                if(units[i]._exponent==0){
                    _comc=units[i]._coeff;
                }
                else if(units[i]._exponent==1){
                    _comb=units[i]._coeff;
                }
            }
             printf("comb is %lf\n",_comb);
             printf("comc is %lf\n",_comc);
          
            return -_comc/_comb;
         }


        int RealVec::equation(){
            int expo=0;
            vector<RealUnit>units=_units;
            int len=units.size();
            for(int i=0;i<len;i++){
                if(units[i]._exponent==2)
                return 2;
                else if(units[i]._exponent==1)
                expo=1;
            }
            return expo;
        }

        int ComplexVec::equation(){
            printf("starting complex equation\n");
            int expo=0;
            vector<ComplexUnit>units=_units;
            int len=units.size();
            for(int i=0;i<len;i++){
                if(units[i]._exponent==2)
                return 2;
                else if(units[i]._exponent==1)
                expo=1;
            }
            return expo;
        }


/*

        ComplexUnit& solver::operator+(double x){
            Complex<double>com=x+5i;
        }

        ComplexUnit& operator+(int x){

        }

        ComplexUnit& operator-(double x);

        RealUnit& operator+(int x);

        RealUnit& operator+(double x);

        RealUnit& operator-(int x);

        RealUnit& operator-(double x);

*/


        ComplexVec solver::operator==(ComplexVec x, ComplexVec y){
            ComplexVec c=x-y;
            c._equation=true;
            return c;
        }

        complex<double> solver::solve(ComplexVec c){
            printf("start of complex solve\n");
            
            if(c._equation==false){
                throw "not an equation";
            }
            
            printf("before start of complex equation function\n");
            int e = c.equation();
            if(e==0){
                throw "no answer";
            }
            else if(e==1){
                return c.linear();
            }
            else
            {
                return c.quadratic();
            }
        }

        double solver::solve(RealVec r){
             if(r._equation==false){
                throw "not an equation";
            }
            int e = r.equation();
            if(e==0){
                throw "no answer";
            }
            else if(e==1){
                return r.linear();
            }
            else
            {
                return r.quadratic();
            }
        }



