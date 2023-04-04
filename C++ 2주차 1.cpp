#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int count, number;

    srand(time(NULL)); // 실행횟수

    cout << "실행 횟수: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Iteration " << i + 1 << endl;
        cout << "숫자를 입력하시오: ";
        cin >> number;

        if (number <= 0 || number > 100) {
            cout << "1부터 100사이 숫자만 가능합니다.\n";
            continue; //입력받은 수가 범위에서 벗어 나면 다음으로 넘어
        }

        cout << number << "의 배수" << ": ";
        for (int j = 1; j <= 100; j++) {
            if (j % number == 0) {
                cout << j << " ";
            }
        }
        cout << endl;

        cout << number << "의 배수가 아닌 수 " << ": ";
        for (int j = 1; j <= 100; j++) {
            if (j % number != 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}