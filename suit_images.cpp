//
// Created by ptrinh8 on 3/29/2022.
//

#include "suit_images.h"
std::map<suit_names, sf::Texture> suit_images::image;

std::string suit_images::get_image_path(suit_names name)
{
    switch (name)
    {
        case DIAMONDS: return "images/diamond.png";
        case HEARTS: return "images/heart.png";
        case SPADES: return "images/spade.png";
        case CLUBS: return "images/club.png";
    }
}

void suit_images::load_image(suit_names name)
{
    image[name].loadFromFile(get_image_path(name));
}

sf::Texture &suit_images::get_image(suit_names name)
{
    load_image(name);
    return image[name];
}
