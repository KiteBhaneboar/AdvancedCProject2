#pragma once
#include <iostream>
#include <string>
#include "Package.hpp"

using namespace std;

class OvernightPackage : public Package
{
	double feePerOunce;
public:
	OvernightPackage() : Package::Package()
	{
		feePerOunce = .5;
	};
	OvernightPackage(
		string nameSender,
		string addressSender,
		string citySender,
		string stateSender,
		string zipCodeSender,
		string nameReceiver,
		string addressReceiver,
		string cityReceiver,
		string stateReceiver,
		string zipCodeReceiver,
		double weight,
		double cost) : Package::Package(
			nameSender,
			addressSender,
			citySender,
			stateSender,
			zipCodeSender,
			nameReceiver,
			addressReceiver,
			cityReceiver,
			stateReceiver,
			zipCodeReceiver,
			weight,
			cost
		)
	{
		feePerOunce = .5;
	};

	double getFeePerOunce();
	double calculateCost();

};