class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<string> invalid; 

        for (int i = 0; i < transactions.size(); ++i) {
            string current = transactions[i];
            vector<string> currentInfo = splitTransaction(current);

            string name = currentInfo[0];
            int time = stoi(currentInfo[1]);
            int amount = stoi(currentInfo[2]);
            string city = currentInfo[3];

            if (amount > 1000) {
                invalid.push_back(current);
                continue;
            }

            bool found = false;

            for (int j = 0; j < transactions.size(); ++j) {
                if (i != j) {
                    string other = transactions[j];
                    vector<string> otherInfo = splitTransaction(other);

                    string otherName = otherInfo[0];
                    int otherTime = stoi(otherInfo[1]);
                    string otherCity = otherInfo[3];

                    if (name == otherName && abs(time - otherTime) <= 60 && city != otherCity) {
                        found = true;
                        break;
                    }
                }
            }

            if (found) {
                invalid.push_back(current);
            }
        }

        return invalid;
    }

private:
    vector<string> splitTransaction(string transaction) {
        vector<string> result;
        stringstream ss(transaction);
        string item;

        while (getline(ss, item, ',')) {
            result.push_back(item);
        }

        return result;
    }
};
