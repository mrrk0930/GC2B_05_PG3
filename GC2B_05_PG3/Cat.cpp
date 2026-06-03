#include "Cat.h"
#include <stdio.h>

Cat::Cat()
{
	
	name = "猫";
	printf("%sが歩いてきた\n",name);

}

Cat::~Cat()
{
	
	printf("%sがいなくなった\n",name);

}

void Cat::Cry()
{
	
	printf("%sが鳴いている「ニャー」\n",name);

}