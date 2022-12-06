#include <playableCharacter.hpp>

PlayableCharacter::PlayableCharacter(std::string name, unsigned int lvl, unsigned int xp, unsigned int maxHp, int currentHp,
                                     unsigned int maxMp, unsigned int gold)
    : _name(name), _lvl(lvl), _xp(xp), _maxHp(maxHp), _currentHp(currentHp),
      _maxMp(maxMp), _gold(gold), _weapon(availableWeapons.at(WEAPONS::DAGGER)){};
PlayableCharacter::~PlayableCharacter(){};

std::string PlayableCharacter::getName()
{
    return this->_name;
}

unsigned int PlayableCharacter::getCurrentHp()
{
    return this->_currentHp;
}
unsigned int PlayableCharacter::getLvl()
{
    return this->_lvl;
};
unsigned int PlayableCharacter::getXp()
{
    return this->_xp;
};

void PlayableCharacter::lvlUp()
{
    this->_lvl += 1;
    this->_maxHp += 50;
};
void PlayableCharacter::setXp(int xp)
{
    this->_xp += xp;
    if (this->_xp >= 100)
    {
        std::cout << "You went up one level!" << std::endl;
        lvlUp();
        this->_xp = 0;
    }
};

bool PlayableCharacter::isAlive()
{
    return _currentHp > 0;
}

void PlayableCharacter::takeDamage(unsigned int damage)
{
    _currentHp -= damage;
}

void PlayableCharacter::heal(unsigned int healAmount)
{
    _currentHp += healAmount;
    if (_currentHp > _maxHp)
    {
        _currentHp = _maxHp;
    }
}

float PlayableCharacter::hPPercentage()
{
    return (float)_currentHp / (float)_maxHp;
}

std::string PlayableCharacter::currentHealth()
{
    return std::to_string(_currentHp) + " / " + std::to_string(_maxHp);
}

Weapon PlayableCharacter::returnWeapon()
{
    return this->_weapon;
}

void PlayableCharacter::changeWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}

void PlayableCharacter::addGold(uint goldAmount)
{
    this->_gold += goldAmount;
}

void PlayableCharacter::subtractGold(int goldAmount)
{
    this->_gold -= goldAmount;
}
int PlayableCharacter::getGold()
{
    return this->_gold;
}
