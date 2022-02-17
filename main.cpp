#include <iostream>

float count(int a, int b, int c, int d) {
    if (d == 0) {
        std::cout << "Division by 0 error" << std::endl;
        return 0;
    }

    return a * (b + (c / static_cast<float>(d)));
    //***************************************
    // There is another way to do this task
    //
    // return a * (b + (c / (d * 1.0f)));
    //***************************************
}

int compare(int number) {
    const int delta = number - 21;
    return number <= 21 ? delta : 2 * delta;
}

int main()
{
    // Task 1
    int a, b, c, d;
    std::cout << "a=";
    std::cin >> a;

    std::cout << "b=";
    std::cin >> b;

    std::cout << "c=";
    std::cin >> c;

    std::cout << "d=";
    std::cin >> d;

    std::cout << "result=";
    std::cout << count(a, b, c, d) << std::endl;

    //Task 2
    int number;
    std::cout << "number=";
    std::cin >> number;
    std::cout << "result=";
    std::cout << compare(number) << std::endl;

    //Task 3
    int arr[3][3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                arr[i][j][k] = i + j + k;
            }
        }
    }

    int *ptr;
    ptr = &arr[1][1][1];
    std::cout << "cube center = " << *ptr << std::endl;

    return 0;
}
