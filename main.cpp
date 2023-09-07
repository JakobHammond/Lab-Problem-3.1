//
//  main.cpp
//  p3.1
//
//  Created by Jakob Hammond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void){
    //declare variables
    int fenceLength;
    int numRails;
    int numPosts;
    double costRails;
    double costPosts;
    double costFence;
    
    //ask for length
    cout << "Enter fence length in feet: ";
    cin >> fenceLength;
    
    //calculations
    numRails = fenceLength / 10 * 3;
    numPosts = fenceLength / 10 + 1;
    costRails = numRails * 9.97;
    costPosts = numPosts * 10.98;
    costFence = costRails + costPosts;
    
    //display cost
    cout << "The fence will cost $" << costFence <<endl;
}
