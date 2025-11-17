#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A = {5, 2, 3, 4, 5, 6, -7, 8, 9, -1, 2, 3};
    int secondOddIndex = 2;
    int divisor = A[secondOddIndex];

    if (divisor == 0) {
        cout << "Помилка: ділення на нуль неможливе.\n";
        return 0;
    }

    vector<int> C;
    for (int i = secondOddIndex; i < A.size(); ++i)
        C.push_back(A[i] / divisor);

    cout << "Масив C: ";
    for (int x : C) cout << x << " ";
    cout << endl;

    return 0;
}
