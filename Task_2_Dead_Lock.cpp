// Task_2_Dead_Lock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::vector<int> testVector = { 3, 7, 1, 9, 8, 11, 23, 27, 35 };

	DeadLockExample deadLock;
	deadLock.AddRange(testVector);
}

