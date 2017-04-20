#include "arffWriter.h"



	arffWriter::arffWriter(std::string my_read_file, std::string my_write_file){
      write_file.open(my_write_file);
      read_file.open(my_read_file);

	}//empty consrtcutor

	void arffWriter::writeFile(){
  		if (read_file.is_open()){
  			std::string line;
    		while ( getline (read_file,line) ){
            	write_file<<line<<'\n';
    		}

    		read_file.close();
  		}

  		else{
    		std::cout << "Unable to open file";
  		} 

  		write_file.close();
	}//end of writeFile

  /*int main ()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    string content = "";
    int i;

    for(i=0 ; infile.eof()!=true ; i++) // get content of infile
        content += infile.get();

    i--;
    content.erase(content.end()-1);     // erase last character

    cout << i << " characters read...\n";
    infile.close();

    outfile << content;                 // output
    outfile.close();
    return 0;
}*/