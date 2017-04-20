C_FLAG = -Wall -Wextra -g -std=c++14
PROGRAM_NAME= WriterTest

all: Driver

Driver: $(PROGRAM_NAME).o arffWriter.o
	g++ $(C_FLAG) $^ -o $(PROGRAM_NAME)

WriterTest.o: $(PROGRAM_NAME).cpp 
	g++ -c $(C_FLAG) $(PROGRAM_NAME).cpp -o $(PROGRAM_NAME).o

arffWriter.o: arffWriter.cpp
	g++ -c $(C_FLAG) arffWriter.cpp -o arffWriter.o

clean:
	rm *.o $(PROGRAM_NAME) my_Arff_File

checkmem:
	valgrind ./$(PROGRAM_NAME)

run: Driver
	./$(PROGRAM_NAME)
