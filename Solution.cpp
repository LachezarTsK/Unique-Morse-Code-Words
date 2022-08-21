
#include <array>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    
    inline static const int ALPHABET_SIZE = 26;
    inline static const array<string, ALPHABET_SIZE> morseLetters = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-",
        "...-", ".--", "-..-", "-.--", "--.."
    };

public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> uniqueMorseCombinations;

        for (const auto& word : words) {
            string current;
            for (const auto& letter : word) {
                current.append(morseLetters[letter - 'a']);
            }
            uniqueMorseCombinations.insert(current);
        }
        return uniqueMorseCombinations.size();
    }
};
