#include <iostream>
#include <vector>
#include "input_output.h"
#include "car_selection.h"

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

 
    
    return 0;
}
