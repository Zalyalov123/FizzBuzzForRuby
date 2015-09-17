//
//  main.cpp
//  SecondWork
//
//  Created by Ильда  Залялов on 17.09.15.
//  Copyright (c) 2015 Ильда  Залялов. All rights reserved.
//

#include <iostream>
using std::cout;

class FzzBzz
{
public:
    void fizzbuzz (int i = 0){
        if (i > 100) {
            return;
        }
        if (i % 15 == 0){
            cout << "Fizz \n";
        }
        else if (i % 3 == 0){
            cout << "Buzz \n";
        }
        else if (i % 5 == 0){
            cout << "FizzBuzz \n";
        }
        else{
            cout << i<<"\n" ;
        }
        
        fizzbuzz(i+1);
    }
};
int main(int argc, const char * argv[]) {
    
    FzzBzz cpp;
    cpp.fizzbuzz();
    
    return 0;
}
