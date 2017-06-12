/*=============================*\
| TIGESTION - Tile Map Digester |
\*=============================*/

#include "main.h"

int main(int argc, char* argv[]){
	//Main variables
	vector<SDL_Surface*> outlist; //Tiles to be output
	SDL_Surface* input, output, workA, workB;

	//Process arguments

	//Load an image

	//Get tile dimensions

	//Determine how many tiles will fit into the given image

	//Loop through every space that a tile fits in and compare it to each tile in outlist
		//If the current tile does not match any tiles in outlist then push it to the list

	//Compile outlist into single sheet
		//Get desired width in tiles
		//If zero, attempt to square them

	//Export the sheet into a PNG file
};

string getinput(){
	string input;
	getline(cin, input, '\n');
	return input;
};

void pause(){
	std::cout << "\n\nPress ENTER to continue...";
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

	return 0;
};
