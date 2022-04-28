#include <iostream>
using namespace std;

struct Cell{
   bool berry = 1;
};

struct TurnValues{
  int Ncoord;
  int Mcoord;
};

int main()
{
    int N, M;//length & width
    cout << "enter N & M: ";
    cin >> N >> M;
    int endCellN, endCellM;//X
    cout << "enter X coordinates";
    cin >>endCellN>> endCellM;



    Cell** field = new Cell*[M];
    for(int i = 0; i < M; i++){
        field[i]= new int[N];
    }

    TurnValues turnValues = new TurnValues[4];
    turnValues[0].Mcoord = 0;
    turnValues[0].Ncoord = 1;

    turnValues[1].Mcoord = 1;
    turnValues[1].Ncoord = 0;

    turnValues[2].Mcoord = 0;
    turnValues[2].Ncoord = -1;

    turnValues[3]Mcoord = -1;
    turnValues[3].Ncoord = 0;

    int count = 0;
    int berries = 0;
    for(int i = 0; i < M; i + turnValues[count].Mcoord){
        for(int b = 0; b < N;b + turnValues[count].Ncoord){

            if(i + turnValues[count].Mcoord < M && b + turnValues[count].Ncoord < N){
               if(field[i + turnValues[count].Mcoord][b + turnValues[count].Ncoord].berry = 1){
                   berries ++;
               }
            }
        }
    }






    for(int i = 0; i < M; i++){
        delete[] field[i];
    }
    delete[] field;

    return 0;
}
