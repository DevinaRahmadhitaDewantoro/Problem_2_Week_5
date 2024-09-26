# Target to compile the object file
Multiplication: Multiplication.o
	g++ Multiplication.o -o Multiplication.exe

# Target to compile the C++ program
Multiplication.o: Multiplication.cpp
	g++ -c Multiplication.cpp -o Multiplication.o

# Target to run the program (interactively)
run: Multiplication
	./Multiplication.exe

# Target to compile the object Test file
MultiplicationTest: MultiplicationTest.o
	g++ MultiplicationTest.o -o MultiplicationTest.exe

# Target to compile the C++ Test program
MultiplicationTest.o: MultiplicationTest.cpp
	g++ -c MultiplicationTest.cpp -o MultiplicationTest.o

# Target to run the Test program
test: MultiplicationTest
	./MultiplicationTest.exe

# Target to clean up compiled files
clean:
	rm -f Multiplication.o MultiplicationTest.o Multiplication.exe MultiplicationTest.exe
