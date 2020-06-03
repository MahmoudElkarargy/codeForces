//
//  Watermelon.cpp
//  codeForces
//
//  Created by Mahmoud Elkarargy on 6/3/20.
//  Copyright © 2020 Mahmoud Elkarargy. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int w;
    
    //Scanning the weight.
    cin >> w;
    
    //Check if the weight is bigger than 2 and if it's even.
    if ( w>2 && w%2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
