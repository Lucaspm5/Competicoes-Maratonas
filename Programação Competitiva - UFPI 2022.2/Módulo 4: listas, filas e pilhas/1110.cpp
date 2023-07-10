#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(cin >> n){
        if(n == 0){
            break;
        }

        if(n == 1) cout << "Discarded cards: 1" << endl; 
        else{
            queue <int> cartas;

            for(int i = 1; i <= n; i++){
                cartas.push(i);
            }

            vector <int> descarte;

            while(true){
                if(cartas.size() == 2){
                    descarte.push_back(cartas.front());
                    cartas.pop();
                    break;
                } 

                descarte.push_back(cartas.front());
                cartas.pop();
                cartas.push(cartas.front());
                cartas.pop();
            }

            cout << "Discarded cards: "; 
            for(int i = 0; i < descarte.size(); i++){
                cout << descarte[i];
                if(i < descarte.size() - 1) cout << ", ";
            }

            cout << endl;

            cout << "Remaining card: " << cartas.front() << endl;
        }

          
    }
    return 0;
}
