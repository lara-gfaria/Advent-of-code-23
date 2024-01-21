#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string line;
    int res = 0;

    while(getline(cin, line)){
        int pass = 1;
        vector<int> max (3, 0);
        for(unsigned int i = 5; i < line.length(); i++){
            int number = 0;
            if(isdigit(line[i]) && pass == 0){
                int m = i;
                for(; line[m] != ' '; m++){  number = number * 10 + (line[m] - '0'); }
                i = m + 1;
                switch (line[i]){
                    case 'r':
                        if(number > max[0]){
                            max[0] = number;
                            i+=3;
                        }
                        break;
                    case 'g':
                        if(number > max[1]){
                            max[1] = number;
                            i+=5;
                        }
                        break;
                    case 'b':
                        if(number > max[2]){
                            max[2] = number;
                            i+=4;
                        }
                        break;
                }
            }
            else if(line[i] == ':'){
                pass = 0;
            }
        }
        res += (max[0] * max[1] * max[2]);
    }
    cout << res << '\n';
    return 0;
}