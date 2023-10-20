#include <iostream>
#include <string>
#include "TwoDayPackage.hpp"

using namespace std;

double TwoDayPackage::getFee(){ return fee; };
double TwoDayPackage::calculateCost() { return fee + (weight * cost); };