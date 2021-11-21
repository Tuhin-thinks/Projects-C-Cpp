#include <iterator>
#include <iomanip>
#include <iostream>

float average_scores(float scores[], int n_scores){
    float sum = 0.0, average = 0.0;
    for(int i=0; i<n_scores; i++){
        sum += scores[i];
    }
    return (sum / n_scores);
}


int main(){

    
    int n_scores;
    std::cout << "Enter number of test scores:";
    std::cin >> n_scores;
    float scores[n_scores];
    int count = 1;
    
    while (n_scores--){
        std::cout << "Enter test score " << count << ":" << std::endl;
        std::cin >> scores[count-1];
        count ++;
    }
    
    // float scores[9] = {85.004, 88.951, 89.5, 90, 75, 77.8, 85.6, 81.25, 89.69};
    float avg_score = average_scores(scores, count-1);
    
    std::cout << "The average of all test scores is: " << std::fixed << std::setprecision(2) << avg_score << std::endl;
    return 0;
    
}