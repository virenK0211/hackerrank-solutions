challenege=https://www.hackerrank.com/contests/hourrank-28/challenges/clock-delay/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the lagDuration function below.
int lagDuration(int h1, int m1, int h2, int m2, int k) {
k=60*k;
    h1=60*h1;
    h2=60*h2;
    h1=h1+m1+k;
    h2=h2+m2;
    int d=h1-h2;
   return d;
    
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string h1M1H2M2_temp;
        getline(cin, h1M1H2M2_temp);

        vector<string> h1M1H2M2 = split_string(h1M1H2M2_temp);

        int h1 = stoi(h1M1H2M2[0]);

        int m1 = stoi(h1M1H2M2[1]);

        int h2 = stoi(h1M1H2M2[2]);

        int m2 = stoi(h1M1H2M2[3]);

        int k;
        cin >> k;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = lagDuration(h1, m1, h2, m2, k);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
