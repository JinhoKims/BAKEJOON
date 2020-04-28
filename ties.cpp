#include<iostream>
#include<tuple>
using namespace std;

    typedef std::tuple<int, double, int, double> Mytuple;

    int main()
    {
        Mytuple c0(0, 1, 2, 3);

        int v2 = 88;
        int v4 = 4;
        double v5 = 5;
        int v6 = 6;
        double v7 = 7;

        std::tie(v4, v5, v6, v7) = c0; 
        // �� Ÿ�� ���ڵ��� ������ ��ȯ�Ǳ⿡, v4~v7�� ���� ����ȴ�.
        cout << v5 << endl; // 1 


        // �ݴ뵵 ����������.
        auto i = std::tie(v2, v4, v6);
        std::get<0>(i) = 77777;
        cout << v2 << endl;


        return 0;
    }

