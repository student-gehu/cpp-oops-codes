// Construct a C++ program to demonstrate different methods of List, Vector and Map in STL (Standard Template Library)
#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

int main() {
    cout << "=== List Demonstration ===" << endl;
    list<int> myList = {10, 20, 30};
    
  
    myList.push_back(40); 
    myList.push_front(5); 
    
 
    cout << "List elements: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    
    myList.pop_back(); 
    myList.pop_front(); 
    
    cout << "After popping front and back: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

  
    myList.remove(20); 
    cout << "After removing 20: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

   
    cout << "\n=== Vector Demonstration ===" << endl;
    vector<int> myVector = {1, 2, 3};
    

    myVector.push_back(4);
    myVector.push_back(5);
 
    cout << "Vector elements: ";
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;


    cout << "Element at index 2: " << myVector[2] << endl;

  
    myVector.insert(myVector.begin() + 1, 10); 
    cout << "After inserting 10 at index 1: ";
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;

   
    myVector.erase(myVector.begin() + 2); 
    cout << "After erasing element at index 2: ";
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;

    cout << "\n=== Map Demonstration ===" << endl;
    map<int, string> myMap;
    
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    
    cout << "Map elements:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

   
    cout << "Value associated with key 2: " << myMap[2] << endl;


    myMap[2] = "Twenty";
    cout << "After modifying key 2: ";
    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

   
    myMap.erase(1); // Remove the pair with key 1
    cout << "After erasing key 1: ";
    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}