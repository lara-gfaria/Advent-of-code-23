#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string line;
    int result = 0;

    while (getline(cin, line)) {
        vector<int> currentValue(2, 0);
        for(unsigned int i = 0; i < line.length(); i++){
            if (isdigit(line[i])){
                if(currentValue[0] == 0){
                    currentValue[0] = line[i] - '0';
                }
                currentValue[1] = line[i] - '0';
            }
        }
        result += currentValue[0] * 10 + currentValue[1];     
    }
    cout << result << endl;
    return 0;
}
