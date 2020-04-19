/*
 * Creator.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */

#ifndef CREATOR_H_
#define CREATOR_H_

#include <memory>
#include "Product.h"

namespace DesignPatterns {

class Creator {
public:
	Creator();
	virtual ~Creator();

	virtual std::unique_ptr<Product> Factory() = 0;
};

} /* namespace DesignPatterns */

#endif /* CREATOR_H_ */
