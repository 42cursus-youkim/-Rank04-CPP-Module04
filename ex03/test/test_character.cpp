#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "util.hpp"

void test_character() {
  test::header("Character");
  AMateria* ice = new Ice();
  AMateria* cure = new Cure();
  ICharacter* me = new Character("me");
  {
    test::subject("Equip NULL");
    me->equip(NULL);
  }
  {
    test::subject("Use Invalid Index");
    for (int i = -3; i < 20; i++)
      me->use(i, *me);
    test::subject("Invalid Unequip");
    for (int i = -3; i < 20; i++)
      me->unequip(i);
  }
  {
    test::subject("Equip Materia");
    me->equip(ice);
    test::subject("Use Materia");
    me->use(0, *me);
    test::subject("Unequip Materia");
    delete dynamic_cast<Character*>(me)->getMateria(0);
    me->unequip(0);
    test::subject("Try to use unequipped Materia");
    me->use(0, *me);
  }
  {
    test::subject("Equip same Material Multiple Times");
    for (int i = 0; i < 8; i++)
      me->equip(ice);
    for (int i = 0; i < 4; i++)
      me->use(i, *me);
  }
  {
    Character player("player");
    player.equip(ice);
    player.equip(cure);
    {
      test::subject("Deep Copy" BMAG "@Copy Constructor");
      Character playerCopy(player);
      for (int i = 0; i < 4; i++)
        playerCopy.use(i, player);
      TEST_EXPECT(playerCopy.getName() == player.getName());
    }
    {
      test::subject("Deep Copy" BMAG "@Assignment Operator");
      Character playerAssign("before assign");
      playerAssign = player;
      log::val("playerAssign:", playerAssign.getName());
      for (int i = 0; i < 4; i++)
        playerAssign.use(i, player);
      TEST_EXPECT(playerAssign.getName() == player.getName());
    }
  }

  delete me;
  delete ice;
  delete cure;
}
