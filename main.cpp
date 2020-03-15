#include <iostream>
#include <tgmath.h>

using namespace std;

float a, b, c, DELTA, Dp, q, p, x, x1, x2;

int main() {
    cout << "PROGRAM LICZĄCY PIERWIASTKI RÓWNANIA KWADRATOWEGO ORAZ WSPÓŁRZĘDNE WIERZCHOŁKA PARABOLI" << endl;
    cout << " Podaj liczbe a, rozna od 0: ";
    cin >> a;
    if (a = 0) {
        cout << " Podaj inna liczbe ktora nie jest zerem: ";
        cin >> a;
    }
    else cout << " Podana liczba jest rozna od 0, mozemy przejsc dalej." << endl;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    DELTA = (b * b) - (4 * a * c);
    Dp = sqrt(DELTA);
    cout << " DELTA = " << DELTA << endl;
    cout << " Pierwiastek z DELTA = " << Dp << endl;
    if(DELTA>0){
        cout << "DELTA jest większa od 0, wiec parabola ma 2 miejsca zerowe." << endl;
        x1 = ( (- (b)) - Dp) / (2 * a);
        x2 = ( (- (b)) + Dp) / (2 * a);
        cout << "Pierwiastki rzeczywiste tej funkcji to: " << " x1= " << x1 << ", x2= " << x2 << endl;
        q = (-(b))/(2 * a);
        p = (-(DELTA))/(4 * a);
        cout << " Wspolrzedne wierzcholka paraboli to: " << endl;
        cout << " q= " << q << ", p= " << p << endl;
    }
    else if(DELTA=0){
        cout << " DELTA jest rowna 0, wiec parabola ma jedno miejsce zerowe. " << endl;
        x = -(b)/(2 * a);
        cout << "DELTA = " << DELTA << endl;
        cout << " Pierwiastek rzeczywisty to: " << " x= " << x << endl;
        q = -(b)/(2 * a);
        p = -(DELTA)/(4 * a);
        cout << " Wspolrzedne wierzcholka paraboli to: " << endl;
        cout << " q= " << q << ", p= " << p << endl;
    }
    else if (DELTA<0){
        cout << " DELTA jest mniejsza od 0, wiec parabola nie ma miejsc zerowych. " << endl;
        cout << "DELTA = " << DELTA << endl;
        cout << " Funkcja nie posiada pierwiastkow rzeczywistych. " << endl;
        q = -(b)/(2 * a);
        p = -(DELTA)/(4 * a);
        cout << " Wspolrzedne wierzcholka paraboli to: " << endl;
        cout << " q= " << q << ", p= " << p << endl;
    }
    return 0;
}
