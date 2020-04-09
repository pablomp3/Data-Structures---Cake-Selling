#include <iostream>
#include <sstream>

using namespace std;

int main()
{
//--------------------------------------------------
    string line;// = "test one two three.";
    getline(cin,line);
    float price[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 20){
        ssin >> price[i];
        ++i;
    }
    for(i = 0; i < 20; i++){
        //cout << price[i] << endl;
    }
//--------------------------------------------------

    int tam = 0;
    for (int j=0; j<20; j++){
        if (price[j] != 0){
            tam = tam + 1;

        }
    }
    //cout << "num de inputs: " << tam << endl; //num of inputs

    int portion[tam];
    int h=1;
    for (int k=0; k < tam; k++){
        portion[k] = h;
        h++;
    }

    int size = tam;
    int const goal = size;
    int remain = size;
    float most_exp = 0; //most expensive piece
    int most_exp_index = 0;
    int sum = 0;

    float best_price = 0;

    float price_per_piece[size];

    float order_price[size];
    int order_price_index[size];


    for (int i=0; i<size; i++){
        price_per_piece[i+1] = price[i+1]/portion[i+1];
        price_per_piece[i] = price[i]/portion[i];
        //cout << price_per_piece[i] << ", ";

        if (price_per_piece[i+1] > price_per_piece[i] && price_per_piece[i+1] > most_exp){
            most_exp = price_per_piece[i+1];
            most_exp_index = i+1;}

/*//---- sorted prices array ---------
        if (price_per_piece[i+1] > price_per_piece[i]){
            for (int g=0; g<100; g++){
                order_price[i] = price_per_piece[i+1];
                order_price_index[i] = order_price_index[i+1];
                order_price[i+1] = order_price[i];
                order_price_index[i+1] = order_price_index[i];
            }
        }
        else if (price_per_piece[i] > price_per_piece[i+1]){
            for (int g=0; g<100; g++){
                order_price[i+1] = price_per_piece[i];
                order_price_index[i+1] = order_price_index[i];
                order_price[i] = order_price[i+1];
                order_price_index[i] = order_price_index[i+1];
            }
        }
//---- finish sorted prices array --------*/

        else if (price_per_piece[i+1] < price_per_piece[i] && price_per_piece[i] > most_exp){
            most_exp = price_per_piece[i];
            most_exp_index = i;
        }
        //no//else cout << "no update";
    }
    //cout << endl << "new most expensive piece: " << most_exp << endl << "most_index: " << most_exp_index << endl;

    while (sum<goal){

        if (remain >= portion[most_exp_index])
        {
            //cout << portion[most_exp_index] << " + ";
            best_price = best_price + price[most_exp_index];
            sum = sum + portion[most_exp_index];
            remain = remain - portion[most_exp_index];
        }

        else{
            int check = size; //para el remainder, empiezo en la porcion más pequeña y voy viendo cuál encaja perfectamente
            while(remain != 0){
                if (remain == portion[check]){
                    //cout << portion[check];
                    best_price = best_price + price[check];
                    sum = sum + portion[check];
                    remain = remain - portion[check];
                }
                else check--;
            }
        }
        //no//cout << sum;
    }
    //cout << endl << "Best price is USD " << best_price;
    cout << best_price;
    return 0;
}
