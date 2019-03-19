// Chapter1_14.cpp : Defines the entry point for the console
//

#include <algorithm>

using namespace std;

#define LIKE_APPLE

void doSomething();

int main()
{
	// 결과는 Orange가 출력된다, #define LIKE_APPLE는 Chapter1_14.cpp 파일내에만 정의되고 
	//different_source.cpp파일에서는 정의되어 있지 않기 때문이다.
	doSomething();

	return 0;
}