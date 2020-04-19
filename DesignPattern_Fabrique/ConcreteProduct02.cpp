/*
 * ConcreteProduct02.cpp
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#include "ConcreteProduct02.h"

namespace DesignPatterns {

ConcreteProduct02::ConcreteProduct02() {
	// TODO Auto-generated constructor stub
	std::cout << "Construction ConcreteProduct02" << std::endl;
}

ConcreteProduct02::~ConcreteProduct02() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruction ConcreteProduct02" << std::endl;
}

void ConcreteProduct02::Identite(){
	std::cout << "Je suis un Produit concret 02" << std::endl;
}

} /* namespace DesignPatterns */
