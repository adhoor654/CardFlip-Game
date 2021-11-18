#ifndef CARD_H
#define CARD_H

class Card {
public:
    Card() {
        id = 0;
        drawn = false;
    }

    Card(int card_id) {
        id = card_id;
        drawn = false;
    };

    int  getID()            { return id; };
    void setID(int card_id) { id = card_id; };

    bool hasBeenDrawn()     { return drawn; };
    void draw()             { drawn = true; };

    bool matches(Card other){ return (id==other.getID()); };

private:
    int id; //expected val 1 - 24
    bool drawn;
};

#endif // CARD_H
