/*
 Se recibe un numero entero positivo y se retorna la suma de los digitos elevados a si mismo, ademas
 imprime el numero mayor y la cantidad de las veces que aparece 

*/

int main(){
  
  init();
// SETUP
  Serial.begin(9600);
  
  int n;
  Serial.print("Ingrese un numero entero: ");
  while (Serial.available()==0);
  h=Serial.parseInt();
  while (n<0)
  {
    Serial.print("Tiene que ser positivo.");
    Serial.print("Ingrese un numero entero: ");
    while (Serial.available()==0);
    n=Serial.parseInt();
  }
  int h_co=h, suma=0, cifra,potencia, valor_U=0;
  int contar_U=0, sum_fu;
  
  while(h_co>0)
  {
    valor=h_co%10;
    if(valor>valor_U)
    {
      valor_U=valor;
      contar_U=1;
    }
    else if(cifra==cifra_E)
    {
      contar_U++;
    }
    potencia=cifra;
    for (int i=1;i<cifra;i++)
    {
      suma_po=0;
      for(int j=0;j<potencia;j++)
      {
        sum_fu+=cifra;
      }
      potencia=sum_fu;
    }
    suma+=potencia;
    h_co=h_co/10;
  }
  Serial.print("La suma de cada uno de los digitos elevados a si mismos del numero ");
  Serial.print(h);
  Serial.print(" es ");
  Serial.print(suma);
  Serial.print("\h");
  Serial.print("El digito mayor encontrado es el ");
  Serial.print(valor_U);
  Serial.print(" que aparece ");
  Serial.print(contar_U);
  Serial.print(" veces)");
  
  // FIN SETUP
  while(true){
    // LOOP
    // FIN LOOP
  }
  
  return 0;
}