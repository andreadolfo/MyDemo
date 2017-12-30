#include <iostream>
#include <iomanip>

using namespace std;

int SumaArray(int x[], int dimens){
    int resultado(0);
    for(int i=0;i< dimens;i++){
        resultado+=x[i];
    }
    return resultado;
}
int SumaRecursiva(int arr[], int dimens){
    if(dimens!=0)
        return arr[dimens-1] + SumaRecursiva(arr, dimens-1);
    return 0;
}
1 + 2/2! + 3/3! + 4/4! + .... + n/n!

Sume todos los elementos de un array doble usando
recursividad.

int main(){
    int arr[]={1,2,3,4,5};
    cout<<SumaRecursiva( arr, 5 )<<endl;

    // esto es prueba github

    return 0;
}
