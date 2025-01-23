#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki1("Chef Gordon Ramsey");
    kokki1.makeSalad(11);
    kokki1.makeSoup(15);

    Chef kokki2("Chef Mario Balotelli");
    ItalianChef kokki3("Italian chef Mario Balotelli");
    kokki2.makeSalad(11);
    kokki2.makeSoup(6);
    kokki3.askSecret("pizza",18,14);



    return 0;
}
