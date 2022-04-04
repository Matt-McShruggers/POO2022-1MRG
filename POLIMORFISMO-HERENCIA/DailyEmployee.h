// Fig. 21.17-5: DailyEmployee.h
// DailyEmployee class definition.
#ifndef DAILY_H
#define DAILY_H

#include "Employee.h" // Employee class definition

class DailyEmployee : public Employee{
public:
    static const int daysPerMonth = 30; // average amount of days in one month
    DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

    void setWage( double ); // set daily wage
    double getWage() const; // return daily wage
    void setDays( double ); // set days worked
    double getDays() const; // return days worked

    // keyword "virtual" signals intent to override
    virtual double earnings() const; // calculate earnings
    virtual void print() const; // print DailyEmployee object

private:
    double dailyWage; // wage per day
    double workedDays; // amount of days worked

}; // end class DailyEmployee

#endif // DAILY_H