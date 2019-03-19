#include <iostream>

void doSomething()
{
using namespace std;
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif // LIKE_APPLE

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif // !LIKE_APPLE
}