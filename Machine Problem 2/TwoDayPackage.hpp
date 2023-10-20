#pragma once
#include <iostream>
#include <string>
#include "Package.hpp"

using namespace std;

class TwoDayPackage : public Package
{
	double fee;
public:
	TwoDayPackage() : Package::Package()
	{
		fee = 10.99;
	}
	TwoDayPackage(
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
		fee = 10.99;
	};

	double getFee();
	double calculateCost();

};