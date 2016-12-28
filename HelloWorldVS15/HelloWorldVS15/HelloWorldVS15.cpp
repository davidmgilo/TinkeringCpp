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

//more info on includes:
//http://stackoverflow.com/questions/1137966/displaying-the-include-hierarchy-for-a-c-file-in-visual-studio
//https://msdn.microsoft.com/en-us/library/36k2cdd4.aspx
//http://www.learncpp.com/
