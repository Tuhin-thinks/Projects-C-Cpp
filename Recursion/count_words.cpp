#include <string>
#include <iostream>

int count_words(std::string string, int word_count){
    size_t found = string.find(' ');
    if (found == std::string::npos){
        return (word_count + 1);
    }
    
    return count_words(string.substr(found+1, string.size()), (word_count+1));
}

int main(){
    
    std::string str;
    std::cout << "Enter a string: ";
    // std::cin.ignore();

    getline(std::cin, str, '\n');  // input a string containing spaces

    int res = count_words(str, 0);
    std::cout << "Number of words in string ["<< str <<"] = " << res << std::endl;
    return 0;
}