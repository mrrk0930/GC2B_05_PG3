#include<iostream>
#include<Windows.h>
#include<stdio.h>

template<typename Type>
Type Min(Type a, Type b)
{
	return (a < b) ? a : b;
}

template<>
char Min<char>(char a, char b)
{
	
	
		printf("数字以外は代入できません\n");
		return '\0';
	
}




int main() 
{

	SetConsoleOutputCP(65001);
	printf("%d\n",Min<int>(114,514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%lf\n", Min<double>(11.4567, 51.4567));
	printf("%c\n", Min<char>('1', '5'));
	

	return 0;
}