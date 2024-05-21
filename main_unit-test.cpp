#include <iostream>
#include <vector>
#include "input_output_Unit-test.h"
#include "car_selection_Unit-test.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "������� ����� ���������� �� �������  ����������� , ����� ����� ������� ������� �������� ,����� ����� ��������� ����������� "  << endl;
    int N;
    int S;
    vector<int> A;

    // ������ ������� ������
    readInput(N, S, A);

    // ���������� ������������� ���������� �����������
    auto result = maxCars(N, S, A);

    // ����� ����������
    printResult(result);

    testInputOutput();
    std::cout << "All tests passed successfully!\n";
    testCarSelection();
    std::cout << "All tests passed successfully!\n";
    
    return 0;
}
