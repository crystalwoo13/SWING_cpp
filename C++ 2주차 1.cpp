#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int count, number;

    srand(time(NULL)); // ����Ƚ��

    cout << "���� Ƚ��: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Iteration " << i + 1 << endl;
        cout << "���ڸ� �Է��Ͻÿ�: ";
        cin >> number;

        if (number <= 0 || number > 100) {
            cout << "1���� 100���� ���ڸ� �����մϴ�.\n";
            continue; //�Է¹��� ���� �������� ���� ���� �������� �Ѿ�
        }

        cout << number << "�� ���" << ": ";
        for (int j = 1; j <= 100; j++) {
            if (j % number == 0) {
                cout << j << " ";
            }
        }
        cout << endl;

        cout << number << "�� ����� �ƴ� �� " << ": ";
        for (int j = 1; j <= 100; j++) {
            if (j % number != 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}