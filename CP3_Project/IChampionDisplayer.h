#ifndef _ICHAMPIONDISPLAYER_DECLARATION
#define _ICHAMPIONDISPLAYER_DECLARATION

#include "GameEnums.h"
#include <vector>

namespace Display
{
	//Interface to define graphics. ChampionType has to implement IChampionDisplayer.
	template <class ChampionType>
	class IChampionDisplayer
	{
		public:
			//Displays attack animation of a champion
			virtual void DisplayAttack(std::vector<ChampionType*> filteredEnemies) = 0;
			//Displays death of a champion
			virtual void DisplayDeath() = 0;
			//Displays move of a champion
			virtual void DisplayMove(Game::Direction direction, int change) = 0;



			//Displays that champion is being attacked
			virtual void DisplayBeingAttacked()
			{
				//TODO
			}
			
			//Displays change in current health
			virtual void DisplayCurrentHealthChange(Game::TypeOfChange type, int change)
			{
				//TODO
			}
			
			//Displays change in maximum health
			virtual void DisplayMaximumHealthChange(Game::TypeOfChange type, int change)
			{
				//TODO - maybe as DisplayCurrentHealthChange if whole health bar will possibly be updated?
			}
			


			//Shows champion on map
			virtual void DisplayOnMap()
			{
				//TODO
			}



			//Returns selected champion parameter
			virtual int GetParameter(Game::ChampionParameters param) = 0;
	};
}

#endif