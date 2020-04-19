/*
 * ConcreteProduct02.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#ifndef CONCRETEPRODUCT02_H_
#define CONCRETEPRODUCT02_H_

#include "Product.h"

namespace DesignPatterns {

class ConcreteProduct02: public Product {
public:
	ConcreteProduct02();
	~ConcreteProduct02();
	void Identite();
};

} /* namespace DesignPatterns */

#endif /* CONCRETEPRODUCT02_H_ */
