#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {

    float delta, a, b, c, Dp, q, p;

    cout << "PROGRAM LICZĄCY PIERWIASTKI RÓWNANIA KWADRATOWEGO ORAZ WSPÓŁRZĘDNE WIERZCHOŁKA PARABOLI" << endl;
    do {
        cout << " Podaj liczbe a, rozna od 0: ";
        cin >> a;
    }
    while ( a==0 );
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    delta = b * b - 4 * a * c;
    cout << " DELTA = " << delta << endl;
    if ( delta>=0 ){
        Dp = sqrt(delta);
        cout << " Pierwiastek z DELTA = " << Dp << endl;
    }
    q = -b/2 * a;
    p = -delta/4 * a;
    cout << " Wspolrzedne wierzcholka paraboli to: " << endl;
    cout << " q= " << q << ", p= " << p << endl;
    float x1, x2;

    if(delta>0){
        cout << "DELTA jest większa od 0, wiec parabola ma 2 miejsca zerowe." << endl;
        x1 = ( -b - Dp) / 2 * a;
        x2 = ( -b + Dp) / 2 * a;
        cout << "Pierwiastki rzeczywiste tej funkcji to: " << " x1= " << x1 << ", x2= " << x2 << endl;
    }
    else if(delta==0){
        float x;
        cout << " DELTA jest rowna 0, wiec parabola ma jedno miejsce zerowe. " << endl;
        x = -b/2 * a;
        cout << " Pierwiastek rzeczywisty to: " << " x= " << x << endl;
    }
    else if (delta<0){
        cout << " DELTA jest mniejsza od 0, wiec parabola nie ma miejsc zerowych. " << endl;
        cout << " Funkcja nie posiada pierwiastkow rzeczywistych. " << endl;
    }
    return 0;
}