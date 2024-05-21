#include <iostream>
#include "input_output.h"
#include <cassert>
#include <sstream>
using namespace std;

// Считывает входные данные
void readInput(int& N, int& S, vector<int>& A) {
    cin >> N >> S;
    A.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
}

// Выводит результат
void printResult(const pair<int, vector<int>>& result) {
    cout << result.first << endl;
    for (int index : result.second) {
        cout << index << " ";
    }
    cout << endl;
}

