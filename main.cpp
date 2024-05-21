#include <iostream>
#include <vector>
#include "input_output.h"
#include "car_selection.h"

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

 
    
    return 0;
}
