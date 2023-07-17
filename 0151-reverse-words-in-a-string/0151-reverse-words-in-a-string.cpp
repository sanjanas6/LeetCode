class Solution {
public:
    string reverseWords(string s) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        std::string word;

        // Extract words from the input string and store them in a vector
        while (iss >> word) {
            words.push_back(word);
        }

        // Join the words in reverse order with a single space
        std::ostringstream oss;
        for (int i = words.size() - 1; i >= 0; --i) {
            oss << words[i];
            if (i != 0) {
                oss << " ";
            }
        }

        return oss.str();
        
    }
};