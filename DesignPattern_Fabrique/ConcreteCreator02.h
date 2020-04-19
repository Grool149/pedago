/*
 * ConcreteCreator02.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#ifndef CONCRETECREATOR02_H_
#define CONCRETECREATOR02_H_

#include "Creator.h"

namespace DesignPatterns {

class ConcreteCreator02: public Creator {
public:
	ConcreteCreator02();
	~ConcreteCreator02();

	std::unique_ptr<Product> Factory();
};

} /* namespace DesignPatterns */

#endif /* CONCRETECREATOR02_H_ */
