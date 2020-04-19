/*
 * ConcreteProduct01.cpp
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */
#include "ConcreteProduct01.h"

namespace DesignPatterns {

ConcreteProduct01::ConcreteProduct01() {
	// TODO Auto-generated constructor stub
	std::cout << "Construction ConcreteProduct" << std::endl;
}

ConcreteProduct01::~ConcreteProduct01() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruction ConcreteProduct" << std::endl;
}

void ConcreteProduct01::Identite(){
	std::cout << "Je suis un Produit concret" << std::endl;
}

} /* namespace DesignPatterns */
