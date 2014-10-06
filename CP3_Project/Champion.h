#ifndef _CHAMPION_INTERFACE
#define _CHAMPION_INTERFACE

namespace Game
{
	enum ChampionParameters
	{
		CurrentHealth,
		MaximumHealth,
		CurrentPower,
		MaximumPower,
		Range,
		MovementSpeed,
		BasicDamage,
		AttackSpeed,
		Level,
		Experience,
	};

	enum TypeOfChange
	{
		Gain,
		Loose,
	};

	class Champion
	{
		private:
			int _currentHealth,
				_maximumHealth,
				_currentPower,
				_maximumPower,
				_range,
				_movementSpeed,
				_basicDamage,
				_attackSpeed,
				_level,
				_experience;
			int& GetChangingParameter(ChampionParameters param);
			int Modification(TypeOfChange type, int change);
		public:
			Champion();
			void ChangeStatistics(ChampionParameters param, TypeOfChange type, int change);
			int GetParameter(ChampionParameters param);
	};
}

#endif