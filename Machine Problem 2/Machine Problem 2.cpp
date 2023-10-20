#include <iostream>
#include <string>

using namespace std;

// Package.hpp

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

// Package.cpp

void Package::setNameSender(string nameSender) { nameSender = nameSender; };
void Package::setAddressSender(string addressSender) { addressSender = addressSender; };
void Package::setCitySender(string citySender) { citySender = citySender; };
void Package::setStateSender(string stateSender) { stateSender = stateSender; };
void Package::setZipCodeSender(string zipCodeSender) { zipCodeSender = zipCodeSender; };
void Package::setNameReceiver(string nameReceiver) { nameReceiver = nameReceiver; };
void Package::setAddressReceiver(string addressReceiver) { addressReceiver = addressReceiver; };
void Package::setCityReceiver(string cityReceiver) { cityReceiver = cityReceiver; };
void Package::setStateReceiver(string stateReceiver) { stateReceiver = stateReceiver; };
void Package::setZipCodeReceiver(string zipCodeReceiver) { zipCodeReceiver = zipCodeReceiver; };
void Package::setWeight(double weight) { weight = weight; };
void Package::setCost(double cost) { cost = cost; };


string Package::getNameSender() { return nameSender; };
string Package::getAddressSender() { return addressSender; };
string Package::getCitySender() { return citySender; };
string Package::getStateSender() { return stateSender; };
string Package::getZipCodeSender() { return zipCodeSender; };
string Package::getNameReceiver() { return nameReceiver; };
string Package::getAddressReceiver() { return addressReceiver; };
string Package::getCityReceiver() { return cityReceiver; };
string Package::getStateReceiver() { return stateReceiver; };
string Package::getZipCodeReceiver() { return zipCodeReceiver; };
double Package::getWeight() { return weight; };
double  Package::getCost() { return cost; };
double Package::calculateCost() { return weight * cost; }
void Package::OutPutData()
{
	cout << "Sender Name: " << nameSender << endl;
	cout << "Sender Address: " << addressSender << endl;
	cout << "Sender City" << citySender << endl;
	cout << "Sender State: " << stateSender << endl;
	cout << "Sender Zipcode: " << zipCodeSender << endl;
	cout << "Receiver Name: " << nameReceiver << endl;
	cout << "Receiver Address: " << addressReceiver << endl;
	cout << "Receiver City" << cityReceiver << endl;
	cout << "Receiver State: " << stateReceiver << endl;
	cout << "Receiver Zipcode: " << zipCodeReceiver << endl;
	cout << "Package weight: " << weight << endl;
	cout << "Shipping Cost: " << cost << endl;

};

Package::Package()
{
	nameSender = "";
	addressSender = "";
	citySender = "";
	stateSender = "";
	zipCodeSender = "";
	nameReceiver = "";
	addressReceiver = "";
	cityReceiver = "";
	stateReceiver = "";
	zipCodeReceiver = "";
	weight = 0;
	cost = 0;
};

Package::Package(
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
	double cost)
{
	this->nameSender = nameSender;
	this->addressSender = addressSender;
	this->citySender = citySender;
	this->stateSender = stateSender;
	this->zipCodeSender = zipCodeSender;
	this->nameReceiver = nameReceiver;
	this->addressReceiver = addressReceiver;
	this->cityReceiver = cityReceiver;
	this->stateReceiver = stateReceiver;
	this->zipCodeReceiver = zipCodeReceiver;
	this->weight = weight;
	this->cost = cost;
};

// TwoDayPackage.hpp

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

// TwoDayPackage.cpp

double TwoDayPackage::getFee() { return fee; };
double TwoDayPackage::calculateCost() { return fee + (weight * cost); };

// OvernightPackage.hpp
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

// OvernightPackage.cpp

double OvernightPackage::getFeePerOunce() { return feePerOunce; };
double OvernightPackage::calculateCost() { return weight * feePerOunce; };





void Dem()
{
	TwoDayPackage twoPackage{ "Lisa Carr", "2003 Edge St", "Ford City", "Michigan", "12345", "Fester Addams", "1313 Deadend Drive", "Nowheresville", "Alaska", "66613", 13.66, 0 };
	if (twoPackage.getNameSender() == "Lisa Carr") { cout << "Two Day Sender: " << twoPackage.getNameSender() << endl; };
	if (twoPackage.getAddressSender() == "2003 Edge St") { cout << "Sender address: " << twoPackage.getAddressSender() << endl; };
	if (twoPackage.getCitySender() == "Ford City") { cout << "Sender city: " << twoPackage.getCitySender() << endl; };
	if (twoPackage.getStateSender() == "Michigan") { cout << "Sender state: " << twoPackage.getStateSender() << endl; };
	if (twoPackage.getZipCodeSender() == "12345") { cout << "Sender zipcode: " << twoPackage.getZipCodeSender() << endl; };
	if (twoPackage.getNameReceiver() == "Fester Addams") { cout << "Two day Receiver: " << twoPackage.getNameReceiver() << endl; };
	if (twoPackage.getAddressReceiver() == "1313 Deadend Drive") { cout << "Receiver address: " << twoPackage.getAddressReceiver() << endl; };
	if (twoPackage.getCityReceiver() == "Nowheresville") { cout << "Receiver city: " << twoPackage.getCityReceiver() << endl; };
	if (twoPackage.getStateReceiver() == "Alaska") { cout << "Receiver state: " << twoPackage.getStateReceiver() << endl; };
	if (twoPackage.getZipCodeReceiver() == "66613") { cout << "Receiver zipcode!" << twoPackage.getZipCodeReceiver() << endl; };
	if (twoPackage.getWeight() == 13.66) { cout << "Weight: " << twoPackage.getWeight() << endl; };
	if (twoPackage.calculateCost() == 10.99) { cout << "Cost: " << twoPackage.calculateCost() << endl; };

	OvernightPackage package{ "Lisa Carr", "2003 Edge St", "Ford City", "Michigan", "12345", "Fester Addams", "1313 Deadend Drive", "Nowheresville", "Alaska", "66613", 29.92, 14.96 };
	if (package.getNameSender() == "Lisa Carr") { cout << "Overnight Sender name: " << package.getNameSender() << endl; };
	if (package.getAddressSender() == "2003 Edge St") { cout << "Overnight Sender address: " << package.getAddressSender() << endl; };
	if (package.getCitySender() == "Ford City") { cout << "Overnight Sender city: " << package.getCitySender() << endl; };
	if (package.getCitySender() == "Michigan") { cout << "Overnight Sender state: " << package.getCitySender() <<endl; };
	if (package.getZipCodeSender() == "12345") { cout << "OVernight Sender zipcode: " << package.getZipCodeSender() << endl; };
	if (package.getNameReceiver() == "Fester Addams") { cout << "Overnight Receiver name: " << package.getNameReceiver() << endl; };
	if (package.getAddressReceiver() == "1313 Deadend Drive") { cout << "Overnight Receiver address: " << package.getAddressReceiver() << endl; };
	if (package.getCityReceiver() == "Nowheresville") { cout << "Overnight receiver city: " << package.getCityReceiver() << endl; };
	if (package.getStateReceiver() == "Alaska") { cout << "Overnight receiver state: " << package.getStateReceiver() << endl; };
	if (package.getZipCodeReceiver() == "66613") { cout << "Overnight receiver zipcode: " << package.getZipCodeReceiver() << endl; };
	if (package.getWeight() == 29.92) { cout << "Overnight weight: " << package.getWeight() << endl; };
	if (package.calculateCost() == 14.96) { cout << "Overnight cost: " << package.calculateCost() << endl; };
}

int main()
{
	Dem();
}