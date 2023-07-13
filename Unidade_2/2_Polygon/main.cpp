#include "point2D.hpp"
#include <vector>

int main()
{
    // instancias de Point2D
    Point2D p1(0, 0);
    Point2D p2;
    p2.SetX(10);
    p2.SetY(30);

    Point2D p3(30, 20);
    Point2D p4(40, 10);
    Point2D p5(30, 0);
    Point2D p6(15, 10);

    // Vetor de Poits2D
    vector<Point2D> myShape1;
    myShape1.push_back(p1);
    myShape1.push_back(p2);
    myShape1.push_back(p3);
    myShape1.push_back(p4);
    myShape1.push_back(p5);
    myShape1.push_back(p6);

    // Impressao do Vetor
    for (size_t i = 0; i < myShape1.size(); i++)
    {
        cout << "Point id: " << i << " x: " << myShape1.at(i).GetX() << " y: " << myShape1.at(i).GetY() << endl;
    }

    // Testes de objetos dinamicos
    Point2D *p7 = new Point2D();
    p7->SetX(50);
    p7->SetY(50);

    cout << " Point 7 is dynamic !  x: " << p7->GetX() << " y: " << p7->GetY() << endl;

    Point2D *p8 = new Point2D(60, 60);

    // checagem de memory leak
    // valgrind --leak-check=full ./out
    delete p7;
    delete p8;

    return 0;
};
