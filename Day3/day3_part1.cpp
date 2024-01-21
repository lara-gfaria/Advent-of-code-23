#include <iostream>
#include <string>
#include <vector>

int main(){
    string line;
    vector<vector<int>> values(3);
    
    while(getline(cin, line)){
        values.push_back(line);
        if(values.lenght() == 3){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < line.size(); j++){
                    if(isdigit(j)){
                        for(int m = j; isdigit(m) ; m++){
                            
                        }
                    }
                }
            }
        }
    }

    return 0;
}