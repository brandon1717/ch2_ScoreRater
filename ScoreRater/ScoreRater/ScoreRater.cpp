// ScoreRater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	if (true)
	{
		std::cout << "This is always displayed.\n\n";
	}

	if (false)
	{
		std::cout << "This is never displayed.\n\n";
	}

	int score = 1000;

	if (score)
	{
		std::cout << "At least you didn't score zero.\n\n";
	}

	if (score >= 250)
	{
		std::cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500)
	{
		std::cout << "You scored 500 or more. Nice.\n\n";
	}

	if (score > 1000)
	{
		std::cout << "You scored 1000 or more. Impressive!\n\n";
	}
    return 0;
}

