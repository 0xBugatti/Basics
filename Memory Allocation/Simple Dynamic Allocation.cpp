
#include <iostream>
#include <string>
using namespace std;

int main() {
int *heapvar = new int;
*heapvar = 90;
cout << * heapvar;
delete heapvar;

return 0;
}