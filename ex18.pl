/***************************************************************************
 *   ex18.pl                                  Version 20191030.124151      *
 *                                                                         *
 *   QUEBRA-CABECA DA ZEBRA.                                               *
 *                                                                         *
 *   Copyright (C) 2019         by Leandro Dantas Lima                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Leandro Dantas Lima                                                   *
 *   Email: leandroautocontrole@gmail.com                                  *
 *   Webpage: http://beco.poli.br/leandroautocontrole@gmail.com            *
 *   Phone: (81) 98861-9469                                                *
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* DICAS */

% DICA 1:  There are 5 colored houses in a row, each having an owner, wich has 
%          an animal, a favorite cigarrette, a favorite drink.
% DICA 2:  The English lives in the red house.                             
% DICA 3:  The Spanish has a dog.                       
% DICA 4:  They drink coffee in the green house. 
% DICA 5:  The ukrainian drinks tea.                                          
% DICA 6:  The green house is adjacent to the right of the white house.       
% DICA 7:  The Winston smoker has a serpent.                                
% DICA 8:  In the yellow house they smoke Kool.                              
% DICA 9:  In the middle house they drink milk.
% DICA 10: The Norwegian lives in the first house from the left.
% DICA 11: The Chesterfield smoker lives near the man with the fox.
% DICA 12: In the house near the house with the horse they smoke Kool.
% DICA 13: The Lucky Strike smoker drinks juice.
% DICA 14: The Japanese smokes Kent.
% DICA 15: The Norwegian lives near the blue house.
         
/*-------------------------------------------------------------------------*/
/* FATOS */

% animals

animal(zebra).
animal(dog).
animal(serpent).
animal(fox).
animal(horse).

% drinks

drink(water).
drink(coffee).
drink(tea).
drink(milk).
drink(juice).

% nacionality

nacion(english).
nacion(spanish).
nacion(ukranian).
nacion(norwegian).
nacion(japanese).

% colors

color(red).
color(gren).
color(white).
color(yellow).
color(blue).

% cigarettes

smoke(winston).
smoke(kool).
smoke(chesterfield).
smoke(lucky_strike).
smoke(kent).


/* ----------------------------------------------------------------------- */
/* INFERENCIA */

goal :-
    animal(zebra),
    animal(dog),
    animal(serpent),
    animal(fox),
    animal(horse),
    drink(water),
    drink(coffee),
    drink(tea),
    drink(milk),
    drink(juice),
    nacion(english),
    nacion(spanish),
    nacion(ukranian),
    nacion(norwegian),
    nacion(japanese),
    color(red),
    color(gren),
    color(white),
    color(yellow),
    color(blue),
    smoke(winston),
    smoke(kool),
    smoke(chesterfield),
    smoke(lucky_strike),
    smoke(kent),
    tabela(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    !,
    nl,
    writeln('--------------------------------------------------------------------------------------------------------'),
    writeln('--------------------------------------------------------------------------------------------------------'),
    writeln('\t\t###############  SOLUTION   ###############'),
    writeln('--------------------------------------------------------------------------------------------------------'),
    writeln('--------------------------------------------------------------------------------------------------------'),
    writeln('HOUSE COLOR \tANIMAL \t\tDRINK \t\tNATIONALITY  \t\tSMOKE'),
    writeln('--------------------------------------------------------------------------------------------------------'),
    format(' ~w \t~w \t\t~w \t\t~w \t\t~w ', [Co1,An1,Dr1,Na1,Sm1]),
    writeln('\n--------------------------------------------------------------------------------------------------------'),
    format(' ~w \t\t~w \t\t~w \t\t~w \t\t~w ', [Co2,An2,Dr2,Na2,Sm2]),
    writeln('\n--------------------------------------------------------------------------------------------------------'),
    format(' ~w \t\t~w \t~w \t\t~w \t\t~w ', [Co3,An3,Dr3,Na3,Sm3]),
    writeln('\n--------------------------------------------------------------------------------------------------------'),
    format(' ~w \t\t~w \t\t~w \t\t~w \t\t~w ', [Co4,An4,Dr4,Na4,Sm4]),
    writeln('\n--------------------------------------------------------------------------------------------------------'),
    format(' ~w \t\t~w \t\t~w \t\t~w \t\t~w ', [Co5,An5,Dr5,Na5,Sm5]),
    writeln('\n--------------------------------------------------------------------------------------------------------'),
    writeln('--------------------------------------------------------------------------------------------------------'),
    nl.
/*-------------------------------------------------------------------------*/

tabela(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5):-
    regra1(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra2(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra3(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra4(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra5(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra6(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra7(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra8(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra9(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra10(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra11(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra12(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra13(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra14(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5), 
    regra15(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, An3,Dr3,Na3,Co3,Sm3, An4,Dr4,Na4,Co4,Sm4, An5,Dr5,Na5,Co5,Sm5).

/*-------------------------------------------------------------------------*/
% formato das regras:
% regra(An1,Dr1,Na1,Co1,Sm1, An2,Dr2,Na2,Co2,Sm2, ..., An5,Dr5,Na5,Co5,Sm5) 
/*-------------------------------------------------------------------------*/
% REGRA 1:  There are 5 colored houses in a row, each having an owner, wich has 
%          an animal, a favorite cigarrette, a favorite drink.
%regra(Animal, Drink, Nationality, Color, Smoke).

% usarei a regra1 para localizar na distribuicao a zebra e a agua que e o objetivo principal.

regra1(zebra,water,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(zebra,_,_,_,_, _,water,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(zebra,_,_,_,_, _,_,_,_,_, _,water,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,water,_,_,_, _,_,_,_,_).
regra1(zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,water,_,_,_).

regra1(_,water,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, zebra,water,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, zebra,_,_,_,_, _,water,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,water,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,water,_,_,_).

regra1(_,water,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,water,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, zebra,water,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,water,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_, _,water,_,_,_).

regra1(_,water,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,water,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,water,_,_,_, zebra,_,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,water,_,_,_, _,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_, _,water,_,_,_).

regra1(_,water,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_).
regra1(_,_,_,_,_, _,water,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,water,_,_,_, _,_,_,_,_, zebra,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,water,_,_,_, zebra,_,_,_,_).
regra1(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, zebra,water,_,_,_).


/*-------------------------------------------------------------------------*/
% REGRA 2:  The English lives in the red house.                             
%regra(Animal, Drink, Nationality, Color, Smoke).

regra2(_,_,english,red,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra2(_,_,_,_,_, _,_,english,red,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra2(_,_,_,_,_, _,_,_,_,_, _,_,english,red,_, _,_,_,_,_, _,_,_,_,_).
regra2(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,english,red,_, _,_,_,_,_).
regra2(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,english,red,_).

/*-------------------------------------------------------------------------*/
% REGRA 3:  The Spanish has a dog.                       
%regra(Animal, Drink, Nationality, Color, Smoke).

regra3(dog,_,spanish,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra3(_,_,_,_,_, dog,_,spanish,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra3(_,_,_,_,_, _,_,_,_,_, dog,_,spanish,_,_, _,_,_,_,_, _,_,_,_,_).
regra3(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, dog,_,spanish,_,_, _,_,_,_,_).
regra3(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, dog,_,spanish,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 4:  They drink coffee in the green house. 
    %regra(Animal, Drink, Nationality, Color, Smoke).

regra4(_,coffee,_,green,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra4(_,_,_,_,_, _,coffee,_,green,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra4(_,_,_,_,_, _,_,_,_,_, _,coffee,_,green,_, _,_,_,_,_, _,_,_,_,_).
regra4(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,coffee,_,green,_, _,_,_,_,_).
regra4(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,coffee,_,green,_).

/*-------------------------------------------------------------------------*/
% REGRA 5:  The ukrainian drinks tea.                                          
%regra(Animal, Drink, Nationality, Color, Smoke).

regra5(_,tea,ukranian,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra5(_,_,_,_,_, _,tea,ukranian,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra5(_,_,_,_,_, _,_,_,_,_, _,tea,ukranian,_,_, _,_,_,_,_, _,_,_,_,_).
regra5(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,tea,ukranian,_,_, _,_,_,_,_).
regra5(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,tea,ukranian,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 6:  The green house is adjacent to the right of the white house.       
%regra(Animal, Drink, Nationality, Color, Smoke).

regra6(_,_,_,white,_, _,_,_,green,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra6(_,_,_,_,_, _,_,_,white,_, _,_,_,green,_, _,_,_,_,_, _,_,_,_,_).
regra6(_,_,_,_,_, _,_,_,_,_, _,_,_,white,_, _,_,_,green,_, _,_,_,_,_).
regra6(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,white,_, _,_,_,green,_).
/*-------------------------------------------------------------------------*/
% REGRA 7:  The Winston smoker has a serpent.                                
%regra(Animal, Drink, Nationality, Color, Smoke).

regra7(serpent,_,_,_,winston, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra7(_,_,_,_,_, serpent,_,_,_,winston, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra7(_,_,_,_,_, _,_,_,_,_, serpent,_,_,_,winston, _,_,_,_,_, _,_,_,_,_).
regra7(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, serpent,_,_,_,winston, _,_,_,_,_).
regra7(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, serpent,_,_,_,winston).

/*-------------------------------------------------------------------------*/
% REGRA 8:  In the yellow house they smoke Kool.                              
%regra(Animal, Drink, Nationality, Color, Smoke).

regra8(_,_,_,yellow,kool, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra8(_,_,_,_,_, _,_,_,yellow,kool, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra8(_,_,_,_,_, _,_,_,_,_, _,_,_,yellow,kool, _,_,_,_,_, _,_,_,_,_).
regra8(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,yellow,kool, _,_,_,_,_).
regra8(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,yellow,kool).

/*-------------------------------------------------------------------------*/
% REGRA 9:  In the middle house they drink milk.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra9(_,_,_,_,_, _,_,_,_,_, _,milk,_,_,_, _,_,_,_,_, _,_,_,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 10: The Norwegian lives in the first house from the left.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra10(_,_,norwegian,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 11: The Chesterfield smoker lives near the man with the fox.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra11(fox,_,_,_,_, _,_,_,_,chesterfield, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra11(_,_,_,_,chesterfield, fox,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra11(_,_,_,_,_, fox,_,_,_,_, _,_,_,_,chesterfield, _,_,_,_,_, _,_,_,_,_).
regra11(_,_,_,_,_, _,_,_,_,chesterfield, fox,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra11(_,_,_,_,_, _,_,_,_,_, fox,_,_,_,_, _,_,_,_,chesterfield, _,_,_,_,_).
regra11(_,_,_,_,_, _,_,_,_,_, _,_,_,_,chesterfield, fox,_,_,_,_, _,_,_,_,_).
regra11(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, fox,_,_,_,_, _,_,_,_,chesterfield).
regra11(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,chesterfield, fox,_,_,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 12: In the house near the house with the horse they smoke Kool.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra12(horse,_,_,_,_, _,_,_,_,kool, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra12(_,_,_,_,kool, horse,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra12(_,_,_,_,_, horse,_,_,_,_, _,_,_,_,kool, _,_,_,_,_, _,_,_,_,_).
regra12(_,_,_,_,_, _,_,_,_,kool, horse,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra12(_,_,_,_,_, _,_,_,_,_, horse,_,_,_,_, _,_,_,_,kool, _,_,_,_,_).
regra12(_,_,_,_,_, _,_,_,_,_, _,_,_,_,kool, horse,_,_,_,_, _,_,_,_,_).
regra12(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, horse,_,_,_,_, _,_,_,_,kool).
regra12(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,kool, horse,_,_,_,_).

/*-------------------------------------------------------------------------*/
% REGRA 13: The Lucky Strike smoker drinks juice.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra13(_,juice,_,_,luck_strike, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra13(_,_,_,_,_, _,juice,_,_,luck_strike, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra13(_,_,_,_,_, _,_,_,_,_, _,juice,_,_,luck_strike, _,_,_,_,_, _,_,_,_,_).
regra13(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,juice,_,_,luck_strike, _,_,_,_,_).
regra13(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,juice,_,_,luck_strike).

/*-------------------------------------------------------------------------*/
% REGRA 14: The Japanese smokes Kent.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra14(_,_,japanese,_,kent, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra14(_,_,_,_,_, _,_,japanese,_,kent, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra14(_,_,_,_,_, _,_,_,_,_, _,_,japanese,_,kent, _,_,_,_,_, _,_,_,_,_).
regra14(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,japanese,_,kent, _,_,_,_,_).
regra14(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,japanese,_,kent).

/*-------------------------------------------------------------------------*/
% REGRA 15: The Norwegian lives near the blue house.
%regra(Animal, Drink, Nationality, Color, Smoke).

regra15(_,_,_,blue,_, _,_,norwegian,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra15(_,_,norwegian,_,_, _,_,_,blue,_, _,_,_,_,_, _,_,_,_,_, _,_,_,_,_).
regra15(_,_,_,_,_, _,_,_,blue,_, _,_,norwegian,_,_, _,_,_,_,_, _,_,_,_,_).
regra15(_,_,_,_,_, _,_,norwegian,_,_, _,_,_,blue,_, _,_,_,_,_, _,_,_,_,_).
regra15(_,_,_,_,_, _,_,_,_,_, _,_,_,blue,_, _,_,norwegian,_,_, _,_,_,_,_).
regra15(_,_,_,_,_, _,_,_,_,_, _,_,norwegian,_,_, _,_,_,blue,_, _,_,_,_,_).
regra15(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,_,blue,_, _,_,norwegian,_,_).
regra15(_,_,_,_,_, _,_,_,_,_, _,_,_,_,_, _,_,norwegian,_,_, _,_,_,blue,_).
/*-------------------------------------------------------------------------*/

/* ----------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : PL config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20150620.224740 */
