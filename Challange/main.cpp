#include <iostream>
#include <vector>

using namespace std;

int main()
{
//Declaring 2 vectors
    vector <int> vector1{};
    vector <int> vector2{};
//Adding numbers into the vectors    
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
//Displaying the vectors and looking the size of them
    cout << "Vector 1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << " Is the size of vector 1." << endl;
    
    cout << "\nVector 2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << " Is the size of vector 2." << endl;
//Declaring a empty 2D vector
    vector <vector<int>> vector_2d;
//Adding vecto1 and vector2 into vector_2d
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
//Displayinf the 2D vector
    cout << "\nVector_2D" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;   
    return 0;
}
