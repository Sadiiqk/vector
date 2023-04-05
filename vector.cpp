#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Funktion för att sortera och sätta in kortet i listan
void insert(vector<int>& card_list, int card) {
    auto it = lower_bound(card_list.begin(), card_list.end(), card);
    card_list.insert(it, card);
}

// Funktion för att skapa och sortera kortleken
vector<int> create_deck() {
    vector<int> deck;
    for (int i = 1; i <= 13; i++) {
        for (int j = 0; j < 4; j++) {
            int card = i + j * 13;
            insert(deck, card);
        }
    }
    return deck;
}

int main() {
    vector<int> deck = create_deck();

    // Skriv ut kortleken
    for (int i = 0; i < deck.size(); i++) {
        cout << deck[i] << " ";
    }
    cout << endl;

    return 0;
}
