/*
 * Product.h
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */
#include <iostream>

#ifndef PRODUCT_H_
#define PRODUCT_H_

namespace DesignPatterns {

class Product {
public:
	Product();
	virtual ~Product();

	virtual void Identite() = 0;
};

} /* namespace DesignPatterns */

#endif /* PRODUCT_H_ */
