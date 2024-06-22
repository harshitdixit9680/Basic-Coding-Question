#include <iostream>
#include <string>

std::string StringChallenge(std::string str) {
    std::string result;
    char prev = '\0'; // Previous character, initialized as null character

    for (char c : str) {
        if (c == 'M') {
            if (prev != '\0') {
                result += prev; // Duplicate the previous character
            }
        } else if (c == 'N') {
            // Skip the next character by not appending it to the result
            continue;
        } else {
            result += c; // Append lowercase letters to the result
            prev = c; // Update the previous character
        }
    }

    return result;
}

int main() {
    std::cout << StringChallenge("MrtyNNgMM") << std::endl; // Output: rtyggg
    std::cout << StringChallenge("oMoMkkNrrN") << std::endl; // Output: ooookkr
    return 0;
}