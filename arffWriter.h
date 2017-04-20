#ifndef ARFFWRITER_
#define ARFFWRITER
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class arffWriter{
	
	private:
		std::string read_file;
		std::string write_file;


	public:
		std::ofstream writefile;
		std::ifstream readfile;

		arffWriter(std::string my_read_file, std::string my_write_file );//constructor
		void writeFile();//
		
};
#endif