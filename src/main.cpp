#include "Vector.hh"
#include "List.hh"

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
    List<int> myList;
    myList.pushBack(1);
    myList.pushBack(2);
    myList.pushBack(3);
    myList.pushBack(4);
    myList.pushBack(5);
    myList.pushBack(6);
    myList.pushFront(0);
    myList.Print();
    myList.Remove(myList.getSize()-1);
    myList.Print();
    return 0;

    }