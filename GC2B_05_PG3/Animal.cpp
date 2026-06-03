#include "Animal.h"
#include <stdio.h>

Animal::Animal()
{
	
	name = "動物";

}

Animal::~Animal()
{



}

void Animal::Cry()
{
	
	printf("%s達が鳴いている「＜=」\n", name);

}