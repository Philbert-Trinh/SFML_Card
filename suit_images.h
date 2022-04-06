//
// Created by ptrinh8 on 3/29/2022.
//

#ifndef CARD_SUIT_IMAGES_H
#define CARD_SUIT_IMAGES_H
#include "SFML/Graphics.hpp"
#include <map>
#include "suit_names.h"

class suit_images
{
private:
    static std::map<suit_names, sf::Texture> image;
    static std::string get_image_path(suit_names name);
    static void load_image(suit_names name);

public:
    static sf::Texture& get_image(suit_names name);

};


#endif //CARD_SUIT_IMAGES_H
