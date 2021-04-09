/*
 Se recibe un numero entero positivo y se retorna la suma de los digitos elevados a si mismo, ademas
 imprime el numero mayor y la cantidad de las veces que aparece 
*/

int main()
{
  
  init();
// SETUP
  Serial.begin(9600);
  
  int h;
  Serial.print("Ingrese un numero entero: ");
  while (Serial.available()==0);
  h=Serial.parseInt();
  while (h<0)
  {
    Serial.print("Tiene que ser positivo.");
    Serial.print("Ingrese un numero entero: ");
    while (Serial.available()==0);
    h=Serial.parseInt();
  }
  int h_co=h, sum=0, valor,potencia, valor_U=0;
  int contar_U=0, sum_fu;
  
  while(h_co>0)
  {
    valor=h_co%10;
    if(valor>valor_U)
    {
      valor_U=valor;
      contar_U=1;
    }
    else if(valor==valor_U)
    {
      contar_U++;
    }
    potencia=valor;
    for (int t=1;t<valor;t++)
    {
      sum_fu=0;
      for(int s=0;s<potencia;s++)
      {
        sum_fu+=valor;
      }
      potencia=sum_fu;
    }
    sum+=potencia;
    h_co=h_co/10;
  }
  Serial.print("La suma de cada uno de los digitos elevados a si mismos del numero ");
  Serial.print(h);
  Serial.print(" es ");
  Serial.print(sum);
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
