//
//  main.cpp
//  cpsc301
//
//  Created by Abby Park on 2/5/19.
//  Copyright © 2019 Abby Park. All rights reserved.
//

#include <iostream>
using namespace std;
 int a [] = {1,2,3,4};
void printArray(){
    
    
    for (int i = 0; i < 4; i++){
        cout << a[i] << ' ';
        }
}

void reverseArray(int array[], int count){
    int temp;
    for(int i =0; i < count / 2; i++){
        temp = array[i];
        array[i] = array[count - i - 1];
        array[count - i - 1] = temp;
        
    }
    
    
}
int main()
{
    
   
    
    printArray();
    reverseArray(a, 4);
    cout << endl;
    
    printArray();
    
}
