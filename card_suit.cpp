//
// Created by ptrinh8 on 3/13/2022.
//

#include "card_suit.h"

card_suit::card_suit(): card_suit(SPADES)
{}

card_suit::card_suit(suit_names suit)
{
    sprite.setTexture(suit_images::get_image(suit));
}

void card_suit::center()
{
    float x = (((temp_card.getGlobalBounds().width/2)+(temp_card.getGlobalBounds().left)) - (sprite.getGlobalBounds().width/2));
    float y = (((temp_card.getGlobalBounds().height/2)+temp_card.getGlobalBounds().top) - (sprite.getGlobalBounds().height/2));
    sprite.setPosition(x,y);
}

void card_suit::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(sprite, states);
}

suit_names card_suit::get_image_names()
{
    return suit_names();
}

