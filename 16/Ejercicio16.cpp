#include <iostream>

using namespace std;

int main()
{
    int i =0, valor;
    int j=0;

    cout << "Contamos valores hasta leer negativo con while" << endl;
    j=0;
    cin >> valor ;
    while (valor >=0)
    {
        j++;
        cin >> valor;
    }
    if (!j)
        cout << "No se ingresaron valores" << endl;
    else
        cout << "Se ingresaron " << j << " valores." << endl;
    return 0;
}
