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

    //같은 길이인 경우 사전 순서

    if (a.length() == b.length()) // 간단하기 코드를 줄임

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



        //같은 단어는 입력하지 않는다

        if (!visited.count(temp))

        {

            visited[temp] = true;

            v.push_back(temp);

        }

    }

    //정렬

    sort(v.begin(), v.end(), cmp); // cmp = 포인터

    for (int i = 0; i < v.size(); i++)

        cout << v[i] << "\n";



    return 0;

}

