#pragma once
#include <iostream>
#include <string>

using namespace std;

class Package
{
protected:
	string nameSender;
	string addressSender;
	string citySender;
	string stateSender;
	string zipCodeSender;
	string nameReceiver;
	string addressReceiver;
	string cityReceiver;
	string stateReceiver;
	string zipCodeReceiver;
	double weight;
	double cost;

public:
	Package();
	Package(string nameSender, string addressSender, string citySender, string stateSender, string zipCodeSender, string nameReceiver, string addressReceiver, string cityReceiver, string stateReceiver, string zipCodeReceiver, double weight, double cost);
	

	void setNameSender(string nameSender);
	void setAddressSender(string addressSender);
	void setCitySender(string citySender);
	void setStateSender(string stateSender);
	void setZipCodeSender(string zipCodeSender);
	void setNameReceiver(string nameReceiver);
	void setAddressReceiver(string addressReceiver);
	void setCityReceiver(string cityReceiver);
	void setStateReceiver(string stateReceiver);
	void setZipCodeReceiver(string zipCodeReceiver);
	void setWeight(double weight);
	void setCost(double cost);

	//void SetValues(string nameSender, string addressSender, string citySender, string stateSender, string zipCodeSender, string nameReceiver, string addressReceiver, string cityReceiver, string stateReceiver, string zipCodeReceiver, float weight, float cost);
	string getNameSender();
	string getAddressSender();
	string getCitySender();
	string getStateSender();
	string getZipCodeSender();
	string getNameReceiver();
	string getAddressReceiver();
	string getCityReceiver();
	string getStateReceiver();
	string getZipCodeReceiver();
	double getWeight();
	double getCost();
	double calculateCost();
	void OutPutData();






};