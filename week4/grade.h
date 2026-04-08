#pragma once

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Students_info.h"

using std::vector; //추가

double grade(double, double, const vector<double>&);
double grade(double, double, double);
double grade(const Student_info&);

#endif
