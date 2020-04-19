/*
 * Main.cpp
 *
 *  Created on: 10 sept. 2018
 *      Author: GROGNET_O
 */
#include "ConcreteCreator01.h"
#include "ConcreteCreator02.h"

using namespace DesignPatterns;

void TestPattern(){
	std::unique_ptr<Product> pProduit04;
	{
		std::unique_ptr<Creator> pFab04 = std::make_unique<ConcreteCreator01>();
		pProduit04 = pFab04->Factory();
	}

	std::cout << "Utilisation du Produit..." << std::endl;
	pProduit04 -> Identite();
/*
	ConcreteCreator01 Fab01;
	std::unique_ptr<Product> pProduit01 = Fab01.Factory();

	ConcreteCreator02 Fab02;
	std::unique_ptr<Product> pProduit02 = Fab02.Factory();

	std::unique_ptr<Creator> pFab03 = std::make_unique<ConcreteCreator01>();
	std::unique_ptr<Product> pProduit03 = pFab03->Factory();
*/
}

int main(){
	TestPattern();

	return 0;
}

