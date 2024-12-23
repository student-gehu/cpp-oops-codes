// You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; 
    cout << "Enter the number of elements in the vector: ";
    cin >> N;

    vector<int> vec(N);
    cout << "Enter " << N << " elements of the vector: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    int x;
    cout << "Enter the position of the element to be removed (1-based index): ";
    cin >> x;

    vec.erase(vec.begin() + (x - 1));

    int a, b;
    cout << "Enter the range [a, b) to remove (1-based indices, inclusive of a, exclusive of b): ";
    cin >> a >> b;

    vec.erase(vec.begin() + (a - 1), vec.begin() + (b - 1));

    cout << "Size of the updated vector: " << vec.size() << endl;

    cout << "Elements of the updated vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
