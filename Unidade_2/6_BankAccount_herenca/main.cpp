// #include "client.hpp"
#include "cc.hpp"
#include "ce.hpp"
#include "client.hpp"

int main()
{
    Client client2("Antonio Carlos", "Rua das Oliveiras, 3333", "Pesquisador", 49000);
    Client client3("Joao da Silva");
    Client client4("Cristian Ribeiro", "Rua das Bromelias");
    Client client5("Ricardo Silva", "Rua sem nome", "Mecanico");
    Client *client6 = new Client("Maria da Silva", "None", "Vendedora", 5000);

    ContaCorrente c1(&client3, 100000);
    ContaCorrente c2(&client5, 50000);
    ContaCorrente c3(&client3, 20000);
    ContaCorrente c4(client6, 30000);
    ContaEspecial c5(&client3, 0, 15000);

    // c2.Transfer(25000, c5);
    c2 >> c5;

    cout << c2.GetInfo() << endl;
    cout << c5.GetInfo() << endl;

    delete client6;

    return 0;
}
