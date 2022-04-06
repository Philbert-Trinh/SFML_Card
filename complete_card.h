//
// Created by ptrinh8 on 3/14/2022.
//

#ifndef CARD_COMPLETE_CARD_H
#define CARD_COMPLETE_CARD_H
#include "card_suit.h"
#include "card_value.h"
#include "card_shape.h"
#include "value_names.h"
#include <SFML\Graphics.hpp>

class complete_card: public sf::Drawable
{
private:
    card_shape background;
    card_value value_top_left;
    card_value value_bottom_right;
    card_suit suit_center;
public:
    complete_card();
    complete_card(value_names value, suit_names suit);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void set_position(int x, int y);
    friend std::ostream& operator << (std::ostream& out, const complete_card& card);
};


#endif //CARD_COMPLETE_CARD_H
