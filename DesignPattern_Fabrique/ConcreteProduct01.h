/*
 * ConcreteProduct01.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#ifndef CONCRETEPRODUCT01_H_
#define CONCRETEPRODUCT01_H_

#include "Product.h"

namespace DesignPatterns {

class ConcreteProduct01: public Product {
public:
	ConcreteProduct01();
	~ConcreteProduct01();
	void Identite();

};

} /* namespace DesignPatterns */

#endif /* CONCRETEPRODUCT01_H_ */
