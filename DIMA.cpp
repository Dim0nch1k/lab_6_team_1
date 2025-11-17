#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A = {5, 2, 3, 4, 5, 6, -7, 8, 9, -1, 2, 3};
    int n = A.size();

    vector<int> odd_indices;
    for (int i = 0; i < n; ++i)
        if (A[i] % 2 != 0)
            odd_indices.push_back(i);

    cout << "Масив A: ";
    for (int x : A) cout << x << " ";
    cout << endl;

    if (odd_indices.size() < 2) {
        cout << "Менше ніж 2 непарних елементи. Неможливо виконати завдання.\n";
        return 0;
    }

    cout << "Індекс другого непарного елемента: " << odd_indices[1] << endl;
    cout << "Значення другого непарного елемента: " << A[odd_indices[1]] << endl;

    return 0;
}

