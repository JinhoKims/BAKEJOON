    #include <iostream>
    using namespace std;


    int main()
    {
        int T;
        cin >> T;
        while (T--)
        {
            int h, w, n;
            cin >> h >> w >> n;
            n--;
            // h = ����Ʈ �� ��
            w = n / h + 1; // w = �� ȣ(�� ��° / ��)
            h = n % h + 1; // h = �� ��(�� ��° / ȣ)(������)
            if (w < 10) // 10ȣ �̸� �� ���
                cout << h << 0 << w << endl;
            else
                cout << h << w << endl;


        }
        return 0;
    }