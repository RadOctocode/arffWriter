#ifndef ARFFWRITER_
#define ARFFWRITER
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class arffWriter{
	
	private:
		std::string file_name;

	public:
		arffWriter(std::string my_file_name );//constructor
		void writeFile();//

		
		
};
#endif