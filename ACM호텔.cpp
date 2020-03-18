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
            // h = 아파트 총 층
            w = n / h + 1; // w = 몇 호(몇 번째 / 층)
            h = n % h + 1; // h = 몇 층(몇 번째 / 호)(나머지)
            if (w < 10) // 10호 미만 일 경우
                cout << h << 0 << w << endl;
            else
                cout << h << w << endl;


        }
        return 0;
    }