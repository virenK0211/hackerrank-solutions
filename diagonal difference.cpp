



#include <bits/stdc++.h>
  

using namespace std;
int n;
// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
unsigned int one=0;unsigned int two=0;
    for(int x=0;x<n;x++)
    {
        for(int y=x;y<=x;y++)
        {
            one+=arr[x][y];
            
        }
    }  int s;
    for(int r=0;r<n;r++)
    {     
        s=n-(r+1);
        
            two+=arr[r][s];
        
        
    }
    
    int tell=one-two;
    
    return tell;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << abs(result) << "\n";

    fout.close();

    return 0;
}
