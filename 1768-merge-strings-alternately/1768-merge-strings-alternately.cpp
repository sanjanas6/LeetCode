class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString;
        int i=0, j=0;
        int len1 = word1.length();
        int len2 = word2.length();
            while (i < len1 || j < len2) {
        if (i < len1) {
            mergedString += word1[i];
            i++;
        }
        if (j < len2) {
            mergedString += word2[j];
            j++;
        }
    }

    return mergedString;
}
};