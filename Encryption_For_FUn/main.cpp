#include <iostream>

using namespace std;

void encryptionNice(){
    string input;
    int hexCorrector;
    getline(cin, input);

    char* conversion = new char[input.length()];
    for(int i = 0; i < static_cast<int>(input.length()); i++){
        hexCorrector = static_cast<int>(input[i]) + 69;
        if(hexCorrector > 255){
            hexCorrector = hexCorrector % 255;
        }
        conversion[i] = static_cast<char>(hexCorrector);
        cout << conversion[i];
    }
    cout << endl;
}

void decryptionNice(){

}
void coolStuff(){
    string input;
    int hexCorrector;
    getline(cin, input);

    char* conversion = new char[input.length()];
    for(int i = 0; i < static_cast<int>(input.length()); i++){
        if((rand() % 100) < 25){
            hexCorrector = static_cast<int>(input[i]) + 69;
            if(hexCorrector > 255){
                hexCorrector = hexCorrector % 255;
            }
            conversion[i] = static_cast<char>(hexCorrector);
            cout << conversion[i];
        }
        else{
            conversion[i] = input[i];
            cout << conversion[i];
        }
    }
    cout << endl;
}
int main(){

    encryptionNice();
}
