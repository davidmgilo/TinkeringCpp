// HelloWorldVS15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" //Precompiled header @see http://stackoverflow.com/questions/4726155/whats-the-use-for-stdafx-h-in-visual-studio

using namespace std;

int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	printf("Hello world!! \n");
	int valor;
	scanf("%d", &valor);
	printf("%d \n", valor);
	cin >> valor;
	cout << valor << endl;
    return 0;
}

