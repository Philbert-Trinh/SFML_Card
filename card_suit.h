//
// Created by ptrinh8 on 3/13/2022.
//

#ifndef CARD_CARD_SUIT_H
#define CARD_CARD_SUIT_H
#include <SFML/Graphics.hpp>
#include "card_shape.h"
#include "card_value.h"
#include "suit_images.h"

class card_suit : public sf::Drawable
{
private:
    card_shape temp_card;
    sf::Sprite sprite;

public:
    card_suit();
    card_suit(suit_names suit);
    void center();
    suit_names get_image_names();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
};


#endif //CARD_CARD_SUIT_H
