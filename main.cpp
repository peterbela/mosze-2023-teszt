#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//elt�r� n�v
    std::cout << '1-100 ertekek duplazasa'//pontos vessz� nincs
    for (int i = 0;)//rossz for
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"//pontos vessz�, �rt�k nincs
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//�tlagnak nincs kezd��rt�ke
    for (int i = 0; i < N_ELEMENTS, i++)//pontos vessz� helyett sima vessz�
    {
        atlag += b[i]//pontos vessz�
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
