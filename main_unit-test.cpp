#include <iostream>
#include <vector>
#include "input_output_Unit-test.h"
#include "car_selection_Unit-test.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "¬ведите число выставлено на продажу  автомобилей , после число которое удалось накопить ,после числа стоимость автомобилей "  << endl;
    int N;
    int S;
    vector<int> A;

    // „тение входных данных
    readInput(N, S, A);

    // Ќахождение максимального количества автомобилей
    auto result = maxCars(N, S, A);

    // ¬ывод результата
    printResult(result);

    testInputOutput();
    std::cout << "All tests passed successfully!\n";
    testCarSelection();
    std::cout << "All tests passed successfully!\n";
    
    return 0;
}
