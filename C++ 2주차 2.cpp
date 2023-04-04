#include <iostream>
#include <cstdlib>
using namespace std;

void  drawseat(int seat[10][6])
{
    cout << endl;
    cout << "1  2  3      4  5  6" << endl;  // �¼� ��ȣ 
    cout << "--------------------" << endl; // r��輱

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 6; j++) {
            if (j == 3) cout << "    ";  // ��� 
            cout << seat[i][j] << "  ";  // ���� ��Ȳ
        }
        cout << endl;
    }

}



void newreservation(int seat[10][6])
{ //���ο� �¼� ���� 
    cout << endl << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
    int row, col;
    cin >> row >> col;

    // �ش� �¼��� �������� �ʴ� ���
    if (row < 1 || row > 10 || col < 1 || col > 6) {
        cout << "�ش� �¼��� �������� �ʴ� �¼��Դϴ�." << endl;
    }
    // �̹� ����� �¼��� ���
    else if (seat[row - 1][col - 1] == 1) {
        cout << "�̹� ����� �¼��Դϴ�." << endl;
    }
    else {
        cout << "�����Ͻ� �¼��� ���� �����մϴ�. �����Ͻðڽ��ϱ�? (y/n): ";
        char confirm;
        cin >> confirm;
        if (confirm == 'y') {
            seat[row - 1][col - 1] = 1;
            cout << "�¼� ������ �Ϸ�Ǿ����ϴ�." << endl;
        }
        else {
            cout << "�¼� ������ ��ҵǾ����ϴ�." << endl;
        }
    }
}





void reservation(int seat[10][6])
{   // �¼� ���� 
    int curr_length, curr_width, new_length, new_width;  // ���� �¼��� ������ �¼�
    cout << "���� �¼��� �����ϰ��� �ϴ� �¼��� ���� ��, ��ȣ ������ �Է��� �ּ���: ";
    cin >> curr_length >> curr_width >> new_length >> new_width;

    if (seat[curr_length - 1][curr_width - 1] == 0) { //���� �¼��� ������� ���� �¼��� ���
        cout << "�¼��� ��Ȯ�� �Է��� �ּ���" << endl;
    }
    // ���� �Ұ����� ���
    else if (seat[new_length - 1][new_width - 1] == 1) {
        cout << "�̹� ����� �¼��Դϴ�. ������ �� �����ϴ�." << endl;
    }
    else {
        seat[new_length - 1][new_width - 1] = 1;  // ������ �¼� ���� ó��
        seat[curr_length - 1][curr_width - 1] = 0;  // ���� �¼� ��� ó��
        cout << "�¼� ������ �Ϸ�Ǿ����ϴ�." << endl;
    }
}




int main(void)
{
    int seat[10][6] = {};
    int menu;

    while (true) { //����ڰ� ���ϴ� ��ȣ�� ����
        cout << "** ����� �¼� �ý���**" << endl;
        cout << endl;
        cout << "1. �ű� ����" << endl;
        cout << "2. ���� ����" << endl;
        cout << "3. ���α׷� ����" << endl;
        cout << endl;
        cout << "��ȣ�� �Է��ϼ���: ";
        cin >> menu;

        if (menu == 1) {
            drawseat(seat);
            newreservation(seat);
        }

        else if (menu == 2) {
            //���� ���� 
            drawseat(seat);
            reservation(seat);
        }

        else if (menu == 3) {
            //���α׷� ���� 
            cout << "���α׷��� �����մϴ�.";
            exit(0);
        }
        else {
            //�߸��� �Է��� ���� ���
            cout << "�ùٸ� ���ڸ� �Է��� �ּ���. \n";
        }
    }
}