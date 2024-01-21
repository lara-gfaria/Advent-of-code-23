#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> numbers = {12, 13, 14};

int main(){
    string line;
    int res = 0;

    while(getline(cin, line)){
        int gamenumber = 0;
        int game = 1;
        int add = 0;
        for(unsigned int i = 5; i < line.length(); i++){
            int number = 0;
            if(isdigit(line[i])){
                if(game == 1){
                    gamenumber = gamenumber * 10 + (line[i] - '0');
                }
                else{
                    int m = i;
                    for(; line[m] != ' '; m++){
                        number = number * 10 + (line[m] - '0');
                    }
                    i = m + 1;

                    switch (line[i]){
                        case 'r':
                            if(number > numbers[0]){
                                add = 1;
                                i+=3;
                            }
                            break;
                        case 'g':
                            if(number > numbers[1]){
                                add = 1;
                                i+=5;
                            }
                            break;
                        case 'b':
                            if(number > numbers[2]){
                                add = 1;
                                i+=4;
                            }
                            break;
                    }
                }
            }
            else if(line[i] == ':'){ 
                game = 0;
            }
        }
        if(add == 0){
            res += gamenumber;
        }
    }
    cout << res << '\n';
    return 0;
}