// C++ program to illustrate std::rank
#include <bits/stdc++.h>
#include <type_traits>
using namespace std;

// Driver Code
int main()
{

	cout << "rank of following type:"
		<< endl;
	cout << "int: "
		<< rank<int>::value
		<< endl;

	cout << "int[]: "
		<< rank<int[]>::value
		<< endl;

	cout << "int[][10]: "
		<< rank<int[][10]>::value
		<< endl;

	cout << "int[10][10]: "
		<< rank<int[10][10]>::value
		<< endl;
	cout << "int[10][10][10]: "
		<< rank<int[10][10][10]>::value
		<< endl;

	return 0;
}
