#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
    string textline;
    source.open("score.txt");
    double sum = 0;
    int numdata = 0;
    double sd = 0;
    while (getline(source, textline)){
        sum += stod(textline);
        sd += pow(stod(textline),2);
        numdata++;
    }
        
    cout << "Number of data = " << numdata <<endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/numdata << endl;
    cout << "Standard deviation = " << sqrt((sd/numdata)-(pow(sum/numdata,2)));
}
