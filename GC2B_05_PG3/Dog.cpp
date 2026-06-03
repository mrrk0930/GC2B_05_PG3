#include "Dog.h"
#include <stdio.h>

Dog::Dog()
{
	
	name = "犬";
	printf("%sが歩いてきた\n",name);

}

Dog::~Dog()
{
	
	printf("%sがいなくなった\n",name);

}

void Dog::Cry()
{
	
	printf("%sが鳴いている「ワン」\n",name);

}