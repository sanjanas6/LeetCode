class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    while (len2 != 0) {
        int temp = len2;
        len2 = len1 % len2;
        len1 = temp;
    }

    if (str1 + str2 == str2 + str1) {
        return str1.substr(0, len1);
    }
  return "";
}
};


   
