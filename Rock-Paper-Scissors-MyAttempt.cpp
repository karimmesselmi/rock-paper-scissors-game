
#include <iostream>
using namespace std;
int read_nbrOfround()
{
    int nbr;
    do
    {
        cout << "enter number of round games 1 to 10: ";
        cin >> nbr;
    } while (nbr < 0 || nbr >10);
    return nbr;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int choiseComputor()
{
    int computor = RandomNumber(1, 3);
    return computor;

}
int choisePlayer()
{
    int choisePayer;

    cout << "your choise:[1]:paper,[2]:stone,[3]:scissors?: ";
    cin >> choisePayer;

    return choisePayer;
}
string choisePlayer_Char(int choiseplayer)
{
    if (choiseplayer == 1)
        return "paper";
    else if (choiseplayer == 2)
        return "stone";
    else  if (choiseplayer == 3)
        return "scissors";
}
string choiseComputor_Char(int choiseComputor)
{
    if (choiseComputor == 1)
        return "paper";
    else  if (choiseComputor == 2)
        return "stone";
    else   if (choiseComputor == 3)
        return "scissors";
}
void winersPlayer_Or_computorInRound(int nbrRound, int& choiseplayer, int& choiseComputor, int& chaRchoiseP, int& chaRchoiseC)
{
    cout << "_________________________________round[" << nbrRound << "]_________________________________" << endl;
    if (choiseplayer == choiseComputor)
    {
        system("color 6F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[No winer]" << endl;

    }
    if (choiseplayer == 3 && choiseComputor == 1)
    {
        system("color 2F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[player]" << endl;

    }
    if (choiseplayer == 1 && choiseComputor == 3)
    {
        system("color 4F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[computor]" << endl;

    }
    if (choiseplayer == 2 && choiseComputor == 1)
    {
        system("color 4F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[compitor]" << endl;

    }
    if (choiseplayer == 1 && choiseComputor == 2)
    {
        system("color 2F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[player]" << endl;

    }
    if (choiseplayer == 2 && choiseComputor == 3)
    {
        system("color 2F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[player]" << endl;

    }
    if (choiseplayer == 3 && choiseComputor == 2)
    {
        system("color 4F");
        cout << "player choise: " << choisePlayer_Char(chaRchoiseP) << endl;
        cout << "computor choise: " << choiseComputor_Char(chaRchoiseC) << endl;
        cout << "round winer:[compitor]" << endl;

    }




    cout << "__________________________________________________________________________\n\n\n";


}


int countPlayerWin(int& ChoisePLAYER, int& ChoiseCOMPUTOR)
{
    int countPlayer = 0;

    if (ChoisePLAYER == 2 && ChoiseCOMPUTOR == 3 || ChoisePLAYER == 1 && ChoiseCOMPUTOR == 2 || ChoisePLAYER == 3 && ChoiseCOMPUTOR == 1)
        countPlayer++;

    return countPlayer;

}
int countComputorWin(int& ChoisePLAYER, int& ChoiseCOMPUTOR)
{
    int countComputor = 0;

    if (ChoisePLAYER == 3 && ChoiseCOMPUTOR == 2 || ChoisePLAYER == 2 && ChoiseCOMPUTOR == 1 || ChoisePLAYER == 1 && ChoiseCOMPUTOR == 3)
        countComputor++;

    return countComputor;
}
int countNOwiner(int& ChoisePLAYER, int& ChoiseCOMPUTOR)
{
    int countNOwin = 0;

    if (ChoisePLAYER == ChoiseCOMPUTOR)
        countNOwin++;

    return countNOwin;
}

void WinersofRound(int& i, int choisePlayer, int choiseComputor)
{


    int numberRoun = read_nbrOfround();

    while (i <= numberRoun)
    {

        cout << "round[" << i << "] begins:" << endl << endl;
        winersPlayer_Or_computorInRound(i, choisePlayer, choiseComputor, choisePlayer, choiseComputor);
        i++;

    }
    cout << "\t\t _________________________________________________________________________________________________" << endl << endl;
    cout << "\t\t\t\t\t\t\t ++GAME OVER++" << endl << endl;
    cout << "\t\t _________________________________________________________________________________________________" << endl << endl;
    cout << "\t\t _________________________________________[ GAME RESULTS ]________________________________________" << endl << endl;
    cout << "\t\tGame Rounds    : " << numberRoun << endl;
    cout << "\t\tPlayer Won Times   : ";
    cout << countPlayerWin(choisePlayer, choiseComputor) << endl;
    cout << "\t\tComputor Won Times : ";
    cout << countComputorWin(choisePlayer, choiseComputor) << endl;
    cout << "\t\tDraw Times         : ";
    cout << countNOwiner(choisePlayer, choiseComputor) << endl;
    if (countPlayerWin(choisePlayer, choiseComputor) < countComputorWin(choisePlayer, choiseComputor))
        cout << "\t\tFinal Winer    : computor" << endl;
    if (countPlayerWin(choisePlayer, choiseComputor) > countComputorWin(choisePlayer, choiseComputor))
        cout << "\t\tFinal Winer    : Player" << endl;
    if (countPlayerWin(choisePlayer, choiseComputor) == countComputorWin(choisePlayer, choiseComputor))
        cout << "\t\tFinal Winer    : No Winer" << endl;
    cout << "\t\t _________________________________________________________________________________________________" << endl << endl;
}


int main()
{
    srand((unsigned)time(NULL));

    int i = 1;

    WinersofRound(i, choisePlayer(), choiseComputor());








}