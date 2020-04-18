#include <iostream>

#include <vector>

#include <string>

#include <map>

#include <algorithm>

using namespace std;



bool cmp(string a, string b)
{
    if (a.length() < b.length())

        return true;

    //���� ������ ��� ���� ����

    if (a.length() == b.length()) // �����ϱ� �ڵ带 ����

    {
           
            if (a < b)

                return true;

            else

                return false;

    }

    return false;

}



int main(void)

{

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int N;

    cin >> N;



    vector<string> v;

    map<string, bool> visited;

    for (int i = 0; i < N; i++)

    {

        string temp;

        cin >> temp;



        //���� �ܾ�� �Է����� �ʴ´�

        if (!visited.count(temp))

        {

            visited[temp] = true;

            v.push_back(temp);

        }

    }

    //����

    sort(v.begin(), v.end(), cmp); // cmp = ������

    for (int i = 0; i < v.size(); i++)

        cout << v[i] << "\n";



    return 0;

}

