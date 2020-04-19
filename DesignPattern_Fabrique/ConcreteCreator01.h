/*
 * ConcreteCreator01.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#ifndef CONCRETECREATOR01_H_
#define CONCRETECREATOR01_H_

#include "Creator.h"

namespace DesignPatterns {

class ConcreteCreator01: public Creator {
public:
	ConcreteCreator01();
	~ConcreteCreator01();

	std::unique_ptr<Product> Factory();
};

} /* namespace DesignPatterns */

#endif /* CONCRETECREATOR01_H_ */
