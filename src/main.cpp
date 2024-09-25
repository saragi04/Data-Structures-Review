#include "Vector.hh"
//#include "LinkedList.hh"
#include "DoubleLinkedList.hh"
#include "CircularList.hh"
#include "Queue.hh"

using namespace std;

int main(){
    // Vector<int> myVector;
    // myVector.push_back(1);
    // myVector.push_back(2);
    // myVector.push_back(3);
    // myVector.push_back(7);
    // myVector.push_back(8);
    // myVector.push_back(9);
    // Vector<int> myOtherVector;
    // myOtherVector.push_back(4);
    // myOtherVector.push_back(5);
    // myOtherVector.push_back(6);
    // myVector.insert(&myOtherVector,3);
    // myVector.Print();
    // myVector.remove(1, myOtherVector.getSize()-1);
    // cout << endl;
    // myVector.Print();
    // List<int> myList;
    // myList.pushBack(1);
    // myList.pushBack(2);
    // myList.pushBack(3);
    // myList.pushBack(4);
    // myList.pushBack(5);
    // myList.pushBack(6);
    // myList.Print();
    // myList.Remove(0);
    // myList.Print();
    // myList.pushBack(7);
    // myList.Print();
    // DList<int> myDlist;
    // myDlist.pushBack(5);
    // myDlist.pushBack(4);
    // myDlist.pushBack(3);
    // myDlist.pushBack(2);
    // myDlist.pushBack(1);
    // myDlist.Print();
    // Clist<int> myCircular;
    // myCircular.pushback(2);
    // myCircular.pushback(3);
    // myCircular.push_front(1);
    // myCircular.push_front(0);
    // myCircular.pushback(5);
    // myCircular.insert(4,4);
    // myCircular.remove(5);
    // myCircular.Print();
    Queue<int> cola;
    cola.push(2);
    cola.push(3);
    cola.push(4);
    cola.pop();
    cola.print();
    return 0;
    }