#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getcurrentValue(int i, vector<int> &currentValue){
    if(currentValue[0] == 0){
        currentValue[0] = i;
    }
    currentValue[1] = i;
}

int main() {
    string line;
    int result = 0;

    while (getline(cin, line)) {
        vector<int> currentValue(2, 0);
        for(unsigned int i = 0; i < line.length(); i++){
            if (isdigit(line[i])){ getcurrentValue(line[i] - '0', currentValue); }
            else{
                switch(line[i]){
                    case 'o':
                        if("one" == line.substr(i, 3)){ getcurrentValue(1, currentValue); break;}
                    case 't':
                        if("two" == line.substr(i, 3)){ getcurrentValue(2, currentValue); break;}
                        else if("three" == line.substr(i, 5)){ getcurrentValue(3, currentValue); break;}
                    case 'f':
                        if("four" == line.substr(i, 4)){ getcurrentValue(4, currentValue); break;}
                        else if("five" == line.substr(i, 4)){ getcurrentValue(5, currentValue); break;}
                    case 's':
                        if("six" == line.substr(i, 3)){ getcurrentValue(6, currentValue); break;}
                        else if("seven" == line.substr(i, 5)){ getcurrentValue(7, currentValue); break;}
                    case 'e':
                        if("eight" == line.substr(i, 5)){ getcurrentValue(8, currentValue); break;}
                    case 'n':
                        if("nine" == line.substr(i, 4)){ getcurrentValue(9, currentValue); break;}
                }
            }
        }
        result += currentValue[0] * 10 + currentValue[1];     
    }
    cout << result << endl;
    return 0;
}
