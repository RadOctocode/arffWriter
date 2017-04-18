#include "arffWriter.h"



	arffWriter::arffWriter(std::string my_file_name){
		file_name = my_file_name;
	}//empty consrtcutor

	void arffWriter::writeFile(){
		std::cout<<file_name;
		std::ifstream myfile (file_name);
  		if (myfile.is_open()){
  			std::string line;
    		while ( getline (myfile,line) ){
            	std::cout<<line<<'\n';
    		}

    		myfile.close();
  		}

  		else{
    		std::cout << "Unable to open file";
  		} 
	}//end of writeFile