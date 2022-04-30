#include <iostream>
#include <conio.h>
#include <string>
#include <string>
#include <stdlib.h>
#include <ctime>

#define WRONGTRIES 5

void drawMan(int tries)
{
    std::cout<<std::endl<<std::endl;
	std::cout<<"  -----"<<std::endl;
	std::cout<<"  |   |"<<std::endl; 
	std::cout<<"  |"; if(tries>=1) std::cout<<"   O    "; std::cout<<std::endl;
	std::cout<<"  |"; if(tries>=3) std::cout<<"  /|\\   "; std::cout<<std::endl;
	std::cout<<"  |"; if(tries>=5) std::cout<<"  / \\    "; std::cout<<std::endl;
	std::cout<<"  |"<<std::endl; 
	std::cout<<"__|__"<<std::endl;
}

int main()
{
    srand(time(NULL));
    std::string wordList[5] = {"car","bike","mellon","orgy","asshole"};
    std::string word;
    std::string guessed;

    word = wordList[rand()%5];

    int wordLength = word.length();
    std::string displayWord(wordLength,'_');

    int found = 0;
    char guess = ' ';
    int tries = 5;
    int flagFound = 0;

    while(tries>=0)
    {
        system("cls");
        std::cout<<"Guess the word: "<<std::endl<<std::endl;
        for(int i = 0; i < wordLength;i++)
        {
            std::cout<<" "<<displayWord[i]<<" ";
        }
        std::cout<<std::endl<<std::endl;
        std::cout<<"Wrong Attempts: "<<tries<<" / "<<WRONGTRIES<<std::endl;
        std::cout<<"Guessed Letters: "<<guessed<<std::endl;

        drawMan(tries);

        if(found == wordLength)
        {
            std::cout<<std::endl;
            std::cout<<"----------------"<<std::endl;
            std::cout<<"You Win!"<<std::endl;
            std::cout<<"----------------"<<std::endl;
            break;
        }
        else if(tries == 0)
        {
            break;
        }
        std::cout<<"Pick a letter: ";
        guess = getch();
        guessed = guessed + " "+guess;
        if(displayWord.find(guess)!=std::string::npos)
        {
            tries++;
        }
        flagFound = 0;
        for(int i = 0; i < wordLength; i++)
        {
            if(word[i] == guess && displayWord[i]=='_')
            {
                displayWord[i] = guess;
                found++;
                flagFound = 1;
            }
        }
        if(!flagFound)
        {
            tries--;
        }
        
    }
    getch();
    if(found != wordLength)
        {
            std::cout<<std::endl;
            std::cout<<"----------------"<<std::endl;
            std::cout<<"You Lose!"<<std::endl;
            std::cout<<"----------------"<<std::endl;
            
        }
    return 0;

        
    
}
