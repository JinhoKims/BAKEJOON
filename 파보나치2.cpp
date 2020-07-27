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
    unsigned long num=0;
    unsigned long a=0, b=1;
    cin >> num;
    unsigned long temp;
   
    for(int i=0; i<num-1; i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        
    }
    
    cout << b << endl;
    
    return 0;
}
