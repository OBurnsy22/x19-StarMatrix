//Author: Matthew Burns

#include<iostream>
#include<vector>

using namespace std;

int main() {

int cols, rows;
vector <vector<char> > starMatrix;

cout<<"Enter rows and columns of stars:"<<endl;
cin>>rows;
cin>>cols;

starMatrix.resize(rows);

if(rows > 0 && cols > 0)
{
    for(int r = 0; r < rows; r++)
    {
        starMatrix[r].resize(cols);
    }
    
    for(int x = 0; x < starMatrix.size(); x++)
    {
        for(int y =0; y < starMatrix[x].size(); y++)
        {
            starMatrix[x][y] = '*';
            cout<<starMatrix[x][y];
        }
        cout<<endl;
    }    

}
    
return 0;
}
