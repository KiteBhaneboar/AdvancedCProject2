#include "Package.hpp"

using namespace std;

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


string Package::getNameSender(){ return nameSender; };
string Package::getAddressSender() { return addressSender; };
string Package::getCitySender(){ return citySender; };
string Package::getStateSender(){ return stateSender; };
string Package::getZipCodeSender(){ return zipCodeSender; };
string Package::getNameReceiver(){ return nameReceiver; };
string Package::getAddressReceiver(){ return addressReceiver; };
string Package::getCityReceiver(){ return cityReceiver; };
string Package::getStateReceiver(){ return stateReceiver; };
string Package::getZipCodeReceiver(){ return zipCodeReceiver; };
double Package::getWeight(){ return weight; };
double  Package::getCost(){ return cost; };
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