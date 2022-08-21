
/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function (words) {

    const morseLetters = [
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-",
        "...-", ".--", "-..-", "-.--", "--.."];
    
    const ascii_small_case_a = 97;
    const uniqueMorseCombinations = new Set();

    for (let word of words) {
        const current = [];
        for (let i = 0; i < word.length; ++i) {
            current.push(morseLetters[word.codePointAt(i) - ascii_small_case_a]);
        }
        uniqueMorseCombinations.add(current.join(''));
    }
    return uniqueMorseCombinations.size;
};
