
import java.util.HashSet;
import java.util.Set;

public class Solution {

    private static final String[] morseLetters = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-",
        "...-", ".--", "-..-", "-.--", "--.."
    };

    public int uniqueMorseRepresentations(String[] words) {

        Set<String> uniqueMorseCombinations = new HashSet<>();

        for (String word : words) {
            StringBuilder current = new StringBuilder();
            for (int i = 0; i < word.length(); ++i) {
                current.append(morseLetters[word.charAt(i) - 'a']);
            }
            uniqueMorseCombinations.add(current.toString());
        }
        return uniqueMorseCombinations.size();
    }
}
