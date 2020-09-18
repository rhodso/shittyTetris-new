//Header file auto-generated using CPP-Getter-Setter-Generator
#ifndef PIECE_H
#define PIECE_H

//Includes
#include "ofMain.h"
#include "tile.h"
#include "grid.h"


class piece {
	public:
		//Constructor and Destructor
		piece();
		~piece();

		//Getters and Setters
		int getX();
		int getY();
		int getType();
		int getSpin();
		ofColor getColour();

		void setX( int _x );
		void setY( int _y );
		void setType( int _type );
		void setSpin( int _spin );
		void setColour( ofColor _colour );

		//Other methods

	private:
		//Variables
		int x;
		int y;
		int type;
		int spin;
		ofColor colour;

};
#endif