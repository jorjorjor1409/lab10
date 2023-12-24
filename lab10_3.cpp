#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    cout <<setprecision(3) ;
    int count = 0;
    float sum =0;
    float sum_of_square =0 ;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
       sum += atof(textline.c_str());
       sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }
      cout << "Number of data = " << count << "\n";
      double mean = sum/count;
      cout << "Mean = " << mean << "\n";
        double sd = sqrt((sum_of_square/count)-pow(mean,2));
        cout << "Standard deviation = " << sd;
    
}