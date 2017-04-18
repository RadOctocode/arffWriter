#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>
#include "arffWriter.h"


	int main(){
		arffWriter myWriter("Dump001_Anonymous 28-03-17 19h04m.txt");
		myWriter.writeFile();
		return 0;
	}