Huffman : huffman.o main.o  
	g++ -Wall -g -O3 -o Huffman huffman.o main.o  

huffman.o : huffman.cpp huffman.h 
	g++ -Wall -g -O3 -c huffman.cpp

main.o : main.cpp 
	g++ -Wall -g -O3 -c main.cpp

clean : 
	rm -f Huffman huffman.o  main.o   
