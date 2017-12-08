/* 
 * File:   Animal.h
 * Author: BAMBA YAYA
 *
 * Created on 8 décembre 2017, 11:55
 */

#ifndef ANIMAL_H
#define	ANIMAL_H
#include <string>
#include <vector>

class Animal {
public:
    Animal();
    Animal(const Animal& orig);
    virtual ~Animal();
   /**
    * l'accesseur pour le nom
    * @return le nom
    */
    std::string getNom();
    int getJourMesurePoids();
    std::vector<Hpoids> getVector();
    
private:
   std::string nom;
   int jourMesurePoid;
    template<typename T>
    class Hpoids
    {
        T donnee;
        
        T Retournerdonne()
        {
            return donnee;
        }
        
    };
    
     std::vector<Hpoids> poids;
  
};

#endif	/* ANIMAL_H */

