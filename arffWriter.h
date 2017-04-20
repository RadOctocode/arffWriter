#ifndef ARFFWRITER
#define ARFFWRITER
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class arffWriter{
	


	public:
		std::ofstream write_file;
		std::ifstream read_file;

		arffWriter(std::string my_read_file, std::string my_write_file );//constructor
		void writeFile();//
		
};
#endif