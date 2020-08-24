#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void fun(int n);
void fun2(int n);
int main()
{
	int x;
	cout << "Enter a number:" << endl;
	cin >> x;
	auto start = high_resolution_clock::now();
	fun(x);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken by function: "
	     << duration.count() << " microseconds" << endl;
	return 0;
}
void fun(int n)
{
	if (n > 0) {
		cout << n << endl;
		fun(n - 1);
	}
}
