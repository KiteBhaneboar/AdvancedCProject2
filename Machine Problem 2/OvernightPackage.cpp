#include <iostream>
#include <string>
#include "OvernightPackage.hpp"

using namespace std;

double OvernightPackage::getFeePerOunce() { return feePerOunce; };
double OvernightPackage::calculateCost() { return weight * feePerOunce; };