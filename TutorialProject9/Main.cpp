#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	//C String
	char myString[] = "Joshua";
	//C++ String
	string myName = "Josh";


	printf("%s\n", myName.c_str());

	system("PAUSE");
	return 0;

}