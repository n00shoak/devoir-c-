#ifndef EXO3_H
#define EXO3_H

#include <string>
#include <vector>

void deplacement();

class Lieu {
private:
	std::string _nom;
	std::string _descritpion;
	int _difficulte;
	std::vector<int> _tableau;
public:
	int getContent(int x,int y);

    void setContent(int x, int y, char nouveauContenu);
    
    void resetContent();
    
    void affiche();
    
    Lieu();
    
    Lieu(std::string nom, std::string decription,int dificulte, std::vector<int> tableau);
};

#endif