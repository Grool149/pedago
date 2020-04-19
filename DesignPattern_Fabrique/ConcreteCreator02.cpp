/*
 * ConcreteCreator02.cpp
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#include "ConcreteCreator02.h"
#include "ConcreteProduct02.h"

namespace DesignPatterns {

ConcreteCreator02::ConcreteCreator02() {
	// TODO Auto-generated constructor stub
	std::cout << "Construction ConcreteCreator02" << std::endl;
}

ConcreteCreator02::~ConcreteCreator02() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruction ConcreteCreator02" << std::endl;
}

std::unique_ptr<Product> ConcreteCreator02::Factory(){
	std::unique_ptr<Product> Pro02 = std::make_unique<ConcreteProduct02>();

	return Pro02;
}

} /* namespace DesignPatterns */
