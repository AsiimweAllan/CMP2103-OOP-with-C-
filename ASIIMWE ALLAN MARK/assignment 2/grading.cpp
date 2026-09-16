#include<iostream>
#include<vector>
using namespace std;

int main(){
    //First we make the 2D array containing the answers
    int rows = 8;
    int col = 10;
    vector<vector<char>> answers(rows, vector<char>(col, 0));
    
    cout << "Enter students answers : ";
    for(int i=0; i<rows;i++){
        for(int j=0; j<col;j++){
            cin >> answers[i][j];
        }
    };
    //this creates the data containing students answers
    //then we create the array containing correct solutions
    vector<char> correct = {'D','B','D','C','C','D','A','E','A','D'};
    /*cout << "Enter solutions: ";
    for(int j=0;j<col;j++){
        cin >> correct[j];
    };*///Incase we want to provide our own solutions;
    //now we have both arrays containing students answers and correct answers, next is the comparison
    //we create another array with different students and their totals
    vector<int> students(rows, 0);

    for(int i=0; i<rows;i++){
        for(int j=0; j<col;j++){
            if(answers[i][j]== correct[j]){
                students[i]++;
            }
            
        }
    }
    //this returns an array containing the students different totals out of 10
    //Now they can be displayed
    for(int j=0;j<rows;j++){
        cout <<"Student " <<j+1 << "scored: " << students[j] << endl;
    };
    return 0;
}