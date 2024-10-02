#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//eltérõ név
    std::cout << '1-100 ertekek duplazasa'//pontos vesszõ nincs
    for (int i = 0;)//rossz for
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"//pontos vesszõ, érték nincs
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//átlagnak nincs kezdõértéke
    for (int i = 0; i < N_ELEMENTS, i++)//pontos vesszõ helyett sima vesszõ
    {
        atlag += b[i]//pontos vesszõ
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
