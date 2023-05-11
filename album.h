//
//  album.h
//  Lab 8
//
//  Created by Diyaa Hamdy on 11/05/2023.
//

#ifndef album_h
#define album_h


#endif /* album_h */
#pragma once
#include "Photo.h"

class Album : public Photo {
private:
    int id;
    string title;
    string remarks;
public:
    Album createAlbum();

};
