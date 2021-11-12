#include <iomanip>
#include <iostream>

int main(){

    float scores[9] = {85.004, 88.951, 89.5, 90, 75, 77.8, 85.6, 81.25, 89.69};
    
    
    for (float &score : scores)
    {
        std::cout << "Student A Test Scores: " << std::fixed << std::setprecision(2) << score << std::endl;
    }
    return 0;
    
}