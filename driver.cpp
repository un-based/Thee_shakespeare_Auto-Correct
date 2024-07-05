#include <bits/stdc++.h>
#include "min_edit_distance.h"
using namespace std;

int main() {

    //Opening CSV in READ Mode
    string filename = "C:\\Users\\anwes\\OneDrive\\Documents\\GitHub\\Thee_shakespeare_Auto-Correct\\shakespeare_dataset.csv"; // Change to your CSV file path
    ifstream file(filename);

    //Check CSV Status
    if (!file.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }
    
    //Input from USER
    string input;
    cin >> input;
    int relative_error = ceil((double(input.size()))/3);
    // Assuming a proportionality between the length of the word and the error 

    //Creating a instance of the Solution Class
    Solution instance;
    map<string,int> answer;
    //answer - map of {keyword,edit distance} due to redundancy in data
    
    // Iterate through each line in CSV
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string keyword;
        // Get the first column (keyword)
        if (getline(ss, keyword, ',')) {
            //make everything lower case
            for(int i=0; i<input.size(); i++)
            {
                if(input[i]>='A' && input[i]<='Z')
                {
                    input[i] = input[i]-'A'+'a';
                }
            }
            for(int i=0; i<keyword.size(); i++)
            {
                if(keyword[i]>='A' && keyword[i]<='Z')
                {
                    keyword[i] = keyword[i]-'A'+'a';
                }
            }

            //Calling the minDistance from the header file included
            if(instance.minDistance(input,keyword)<=relative_error) answer[keyword]=instance.minDistance(input,keyword);
        }
    }
    
    vector<pair<int,string>> v;
    //required to make the predictions in order of least edit distance
    for(auto &st: answer)
    {
        v.push_back({st.second,st.first});
    }
    sort(v.begin(),v.end());

    for(auto &pr:v)
    {
        cout << pr.second << endl;
    }

    file.close();
    return 0;
}