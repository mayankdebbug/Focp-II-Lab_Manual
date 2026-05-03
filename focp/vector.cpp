#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> v;
for(int i = 1; i <= 10; i++) {
v.push_back(i);
cout << "Inserted: " << i << " | Size: " << v.size()<< " | Capacity: " << v.capacity() << endl;
}
}