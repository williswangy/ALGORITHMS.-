//Yuan Wang

#include <cstdlib>
#include <string>

using namespace std;

class Node{
    unsigned char data;
    unsigned int frequency;
    unsigned char min;
    Node * leftChild;
    Node * rightChild;

public:
    Node(){}
    Node(const Node &n) {
	data = n.data; 
	frequency = n.frequency; 
	leftChild = n.leftChild; 
	rightChild = n.rightChild;
}
    Node(unsigned char d, unsigned int f): data(d), frequency(f), min(d){}
    Node(Node *, Node *);
    void fillCodebook(string *, string &);
    bool operator> (const Node &);
};

class Heap{
    Node **minHeap;
    int heapSize;
public:
    Heap(){
	heapSize = 0; 
	minHeap = new Node*[257];
} // max of 255 characters
    void push(Node *);
    int size(){
	return heapSize;
}
    void pop();
    Node * top(){
	return minHeap[1];
}
};
