// Templates are the foundation of generic programming, which involves writing code in a way that is independent of any particular type. Write a program that can create a list (create a class list) of given type (int, float, char ec.) and perform insertion and deletion on list object.
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::find
using namespace std;


template <typename T>
class List {
private:
    vector<T> elements;

public:
    
    void insert(const T& value) {
        elements.push_back(value);
        cout << value << " has been added to the list." << endl;
    }


    void remove(const T& value) {
        auto it = find(elements.begin(), elements.end(), value);
        if (it != elements.end()) {
            elements.erase(it);
            cout << value << " has been removed from the list." << endl;
        } else {
            cout << value << " is not in the list." << endl;
        }
    }

    
    void display() const {
        if (elements.empty()) {
            cout << "The list is empty." << endl;
        } else {
            cout << "List elements: ";
            for (const auto& element : elements) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    
    List<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.display();
    intList.remove(20);
    intList.display();

   
    List<char> charList;
    charList.insert('A');
    charList.insert('B');
    charList.insert('C');
    charList.display();
    charList.remove('B');
    charList.display();

  
    List<float> floatList;
    floatList.insert(1.1f);
    floatList.insert(2.2f);
    floatList.insert(3.3f);
    floatList.display();
    floatList.remove(2.2f);
    floatList.display();

    return 0;
}