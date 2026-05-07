#include <iostream>
#include <string>
#include <algorithm>

std::string transform_string(const std::string& s, char ch) {

    // Copy original string
    std::string result = s;

    // Find last occurrence of ch
    int index = result.find_last_of(ch);

    // Reverse from that index till end
    reverse(result.begin() + index, result.end());

    // Return final string
    return result;
}

int main() {

    std::string input;

    std::getline(std::cin, input);

    size_t space_pos = input.find(' ');

    // Extract string
    std::string s = input.substr(0, space_pos);

    // Extract character
    char ch = input[space_pos + 1];

    // Call function
    std::string result = transform_string(s, ch);

    // Print answer
    std::cout << result << std::endl;

    return 0;
}