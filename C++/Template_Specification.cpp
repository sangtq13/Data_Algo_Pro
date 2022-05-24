#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
const char* F[] = {"apple", "orange", "pear"};
const char* C[] = {"red", "green", "orange"};

template <>
struct Traits <Fruit>{
    static string name(int index){
        if (index<0 || index>2) return "unknown";
        return F[index];
    }
};

template <>
struct Traits <Color>{
    static string name(int index){
        if (index<0 || index>2) return "unknown";
        return C[index];
    }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}

