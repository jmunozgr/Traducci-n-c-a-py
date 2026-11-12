#include <iostream>
#include <string>
using namespace std;

int main() {
    string producto;

    int cantidad;
    int productosRegistrados = 0;
    int productosConDescuento = 0;

    double precio;
    double totalProducto;
    double descuento;
    double totalCompras = 0;
    double totalPagado = 0;

    cout << "Ingrese el nombre del producto (FIN para terminar): ";
    getline(cin, producto);

    while (producto != "FIN") {

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        cout << "Ingrese el precio unitario: ";
        cin >> precio;

        cin.ignore(); //esta linea no se debe traducir a python

        productosRegistrados++;

        totalProducto = cantidad * precio;
        descuento = 0;

        if (totalProducto >= 100000) {
            descuento = totalProducto * 0.10;
            productosConDescuento++;
        }
        else if (totalProducto >= 50000) {
            descuento = totalProducto * 0.05;
            productosConDescuento++;
        }

        double valorFinal = totalProducto - descuento;

        cout << "\nProducto: " << producto << endl;
        cout << "Valor original: $" << totalProducto << endl;
        cout << "Descuento: $" << descuento << endl;
        cout << "Valor a pagar: $" << valorFinal << endl;

        totalCompras += totalProducto;
        totalPagado += valorFinal;

        cout << "\nIngrese el nombre del producto (FIN para terminar): ";
        getline(cin, producto);
    }

    cout << "\n--- RESUMEN DE LA COMPRA ---" << endl;
    cout << "Productos registrados: " << productosRegistrados << endl;
    cout << "Productos con descuento: " << productosConDescuento << endl;
    cout << "Valor original de las compras: $" << totalCompras << endl;
    cout << "Valor final a pagar: $" << totalPagado << endl;

    return 0;
}