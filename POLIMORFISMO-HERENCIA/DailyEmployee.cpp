// Fig. 21.18-5: DailyEmployee.cpp
// DailyEmployee class member-function definitions.
#include <iostream>
#include "DailyEmployee.h" // DailyEmployee class definition
using namespace std;

// constructor
DailyEmployee::DailyEmployee( const string &first, const string &last, const string &ssn, double dailyWage, double daysWorked ) : Employee( first, last, ssn ){
    setWage( dailyWage ); // validate daily wage
    setDays( daysWorked ); // validate days worked
} // end DailyEmployee constructor

// set wage
void DailyEmployee::setWage( double wageToSet ){
    dailyWage = ( wageToSet < 0.0 ? 0.0 : wageToSet );
} // end function setWage

// return wage
double DailyEmployee::getWage() const{
    return dailyWage;
} // end function getWage

// set hours worked
void DailyEmployee::setDays( double accountedDays ){
    workedDays = ( (( accountedDays >= 0.0 ) && ( accountedDays <= daysPerMonth )) ? accountedDays : 0.0 );
} // end function setHours

// return hours worked
double DailyEmployee::getDays() const{
    return workedDays;
} // end function getHours

// calculate earnings;
// override pure virtual function earnings in Employee
double DailyEmployee::earnings() const{
    if ( getDays() > 0 ) // verifier to check if employee has worked for at least 1 day
        return getWage() * getDays();
    else
        return 0.0; // logically if you don't work a single day, you don't get any cash
} // end function earnings

// print HourlyEmployee's information
void DailyEmployee::print() const{
    cout << "Daily employee: ";
    Employee::print(); // code reuse
    cout << "\nSalary:";
    cout << "\nDays worked: " << getDays() << "; Daily wage: " << getWage();
} // end function print