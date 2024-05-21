#include <iostream>
#include "input_output_Unit-test.h"
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




void testInputOutput() {
    // Тестирование функции readInput()
    {
        int N, S;
        std::vector<int> A;
        std::istringstream input("3 10\n5 6 7\n");
        std::cin.rdbuf(input.rdbuf()); // Перенаправляем cin на наш поток
        readInput(N, S, A);
    }

    // Тестирование функции printResult()
    {
        std::pair<int, std::vector<int>> result = { 2, {1, 3} };
        std::ostringstream output;
        std::streambuf* coutbuf = std::cout.rdbuf(); // Сохраняем указатель на стандартный поток вывода
        std::cout.rdbuf(output.rdbuf()); // Перенаправляем cout на наш поток
        printResult(result);
        std::cout.rdbuf(coutbuf); // Восстанавливаем стандартный поток вывода
        assert(output.str() == "2\n1 3 \n");
    }
}

