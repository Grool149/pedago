/*
 * ConcreteCreator01.cpp
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */
#include "ConcreteCreator01.h"
#include "ConcreteProduct01.h"

namespace DesignPatterns {

ConcreteCreator01::ConcreteCreator01() {
	// TODO Auto-generated constructor stub
	std::cout << "Construction ConcreteCreator" << std::endl;
}

ConcreteCreator01::~ConcreteCreator01() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruction ConcreteCreator" << std::endl;
}

std::unique_ptr<Product> ConcreteCreator01::Factory(){
	std::unique_ptr<Product> Pro01 = std::make_unique<ConcreteProduct01>();

	return Pro01;
}

} /* namespace DesignPatterns */
