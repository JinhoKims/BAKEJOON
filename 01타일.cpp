//
//  main.cpp
//  BaekJoonCpp
//
//  Created by 김진호 on 2020/07/27.
//  Copyright © 2020 myProject. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >>n;
    
    long long arr[n+1];
    
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;

        for(int i=3; i<=n; i++)
        {
            arr[i]=(arr[i-1]+arr[i-2])%15746;
        }
        cout << arr[n] << endl;
    
    return 0;
}
