#include<iostream.h>


//1.-LLenar
void crear(int **&a,int f, int c)
{
 
 a=new int*[f];

   for(int i=0; i<f; i++)
   {
      a[i]=new int[c];
   }
}

void llenar(int **&a,int f, int c)
{
        
           
     for(int i=0; i<f; i++)
     {
       for(int j=0; j<c; j++)
        {
           cout<<"A["<<i<<","<<j<<"]= ";
          cin>>a[i][j];
        }
      
     }

}
//2.-Imprimir
void imprimir(int **&a,int f, int c)
{
   cout<<endl;
   for(int i=0; i<f; i++)
     {
       for(int j=0; j<c; j++)
        {
           cout<<"    "<<a[i][j]<<"  ";
        }
        cout<<endl;
     }
 
}

//3.-sumar
int **sumar(int**&a,int **&b, int **&n,int f, int c){

 for(int i=0; i<f; i++){
                for(int j=0; j<c; j++){
               
                        n[i][j]=a[i][j]+b[i][j];
                       
                        }
                }

                 for(int i=0; i<f; i++){
                 for(int j=0; j<c; j++)
              cout<<n[i][j]<<"  ";
                 cout<<endl;
        }
}

//4.-restar
int **restar(int**&a,int **&b, int **&n,int f, int c){

 for(int i=0; i<f; i++){
                for(int j=0; j<c; j++){
               
                        n[i][j]=a[i][j]-b[i][j];
                       
                        }
                }

                 for(int i=0; i<f; i++){
                 for(int j=0; j<c; j++)
              cout<<n[i][j]<<"  ";
                 cout<<endl;
        }
}


//5.-Multiplicar por un Escalar
int**mult(int **&a,int f, int c, int es){

 for(int i=0; i<f;i++)
  for(int j=0; j<c; j++)
   a[i][j]=a[i][j]*es;
  

return a;
}

//6.-Maximo elemento de la matriz
void maximo(int **A, int f, int c)
 {
 int *tmp=new int[f];
       for (int i=0; i<f; i++)
       {
               int M= A[i][0];
               for (int j=1; j<c; j++)
                       if (A[i][j]>M)
                               M=A[i][j];
               //cout<<M<< endl;
  tmp[i]=M;
  
  
       }
    int may;
for (int i=0; i<f; i++)
{
 may=tmp[0];
     if (tmp[i]>may)
  may=tmp[i];
}
cout<<"el mayor numero de la matriz es: "<<may;
}

//7.-Transpuesta
int **tra(int**&a,int fil,int col){

 int **t;
 crear(t, fil, col);
 for(int i=0; i<fil; i++){
 for(int j=0; j<col; j++){
 t[i][j]=a[j][i];

 }
 for(int i=0; i<fil; i++){
      for(int j=0; j<col; j++)
      cout<<t[i][j]<<"  ";
      cout<<endl;

 }

}

//8.-Hallar la inversa
void inversa(int **&a,int f, int c)
{
 double pivot;
 r= new double*[f];
 for(int i=0;i<f;i++)
  r[i]=new double[2*c];
 for(i=0;i<f;i++)
 {
  for(int j=0;j<2*c;j++)
  {
   r[i][j]=0;
  }
 }
 for(int i=0;i<f;i++)
 {
  r[i][i]=1;
 }
 for(int int i=0;i<f;i++)
 {
  k=0;
  for(int j=c;j<2*c;j++)
  {
   r[i][j]=m[i][k];
   k++;
  }
 }
 invierte();

  cout<<"La Inversa: "<<endl;
 for(int i=0;i<f;i++)
 {
  for(int j=0;j<c;j++)
  {
   cout<<r[i][j]<<"   ";
  }
  cout<<endl;
 } 

}

void invierte ()
{
 int t,m;
 double pi,temp;
 t=c;
 t=c;m=0;int n, i=1;
 for(m=0;m<(f-1);m++)
 {
  //temp=(r[m+1][t])/(r[m][t]);
  for(i=m+1;i<f;i++)
  {
   temp=(rpta[i][t])/(r[m][t]);
   for(j=0;j<2*c;j++)
   {
    r[i][j]=(r[i][j])-((r[m][j])*temp);

   }
  }
  t++;

 }
 t=2*c-1;
 for(m=(f-1);m>0;m--)
 {
  //temp=(r[m+1][t])/(r[m][t]);
  for(i=m-1;i>=0;i--)
  {
   temp=(r[i][t])/(r[m][t]);
   for(j=0;j<2*c;j++)
   {
    r[i][j]=(r[i][j])-((r[m][j])*temp);

   }
  }
  t--;
 }
 for(i=0;i<fil;i++)
 {
 pi=r[i][t];
 for(j=0;j<2*c;j++)
 {
 r[i][j]=(r[i][j])/pi;
 }
 t++;
}
 
}


//9.- Hallar la determinante
int determinante(int a[3][3]){
 double d;
 d=a[0][0]*a[1][1]*a[2][2];
 d+=a[0][1]*a[1][2]*a[2][0];
 d+=a[1][0]*a[2][1]*a[0][2];
 d-=a[0][2]*a[1][1]*a[2][0];
 d-=a[0][1]*a[1][0]*a[2][2];
 d-=a[0][0]*a[2][1]*a[1][2];
 cout<<"La determinante es: "<<d<<endl;

}
//10.-Ordenar los elementos de la matriz por filas

 


//11.-Intercambiar filas
//void intfilas(int pos1,int pos2)

 


//12.-Intercambiar columnas

 

 

//13.-La suma de todos los elementos
int**sumele(int**a, int f, int c)
{
 int sum=0;
      for(int i=0;i<f;i++)
      {
    for(int j=0;j<c;j++){
    sum=sum+a[i][j];
      }
   }
   return sum;
}
//14.-Simetrica
bool simetrica(int**a,int fil)
 {
       int c=0;
       for (int i=0; i<fil; i++)
               for (int j=0; j<fil; j++)
                       if (i!=j && a[i][j]==a[j][i])
                                       c++;
                       if(c==fil)
                               return true;
                       else
                               return false;
 }


//15.-Identidad
bool identidad(int**a,int fil)
 {
       for (int i=0; i<fil; i++)
               for (int j=0; j<fil; j++)
               {
                       if(i==j && a[i][j]!=1)
                               return false;
                       if(i!=j && a[i][j]!=0)
                               return false;
               }
       return true;

 }
//16.-crear una matriz identidad
void crearid(int **a,int fil, int col)
{
 
 for(int i=0;i<fil;i++){
  for(int j=0;j<col;j++){
   if(i==j) a[i][j]=1;
   else a[i][j]=0;
  }
  }
}
//17.-determinar si el sistema de ecuaciones no tiene solucion
//18.-determinar si el sistema de ecuaciones tiene infinitas soluciones
//19.-determinar si el sistema de ecuaciones tiene una sola solucion
void gauss(){
double a,b,c,d,e,f,g,h,i;
   cout<<"ingrese primera ecuacion(Ax+By=C), ingrese valores de A B C"<<endl;
   cin>>a;cin>>b;cin>>c;
   cout<<"ingrese segunda ecuacion(Ax+By=C), ingrese valores de A B C"<<endl;
   cin>>d;cin>>e;cin>>f;
   cout<<"ingrese tercera ecuacion(Ax+By=C), ingrese valores de A B C"<<endl;
   cin>>g;cin>>h;cin>>i;
    const int length=3;
    double m[][length]={{a,b,c}, {d,e,f}, {g,h,i}};

    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++)
           
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;

    for(int f=0;f<length-1;f++){
        double div=m[f][f];

        for(int c=0;c<length;c++)
            m[f][c]=m[f][c]/div;
        double mul=-m[(f+1)%length][f];

        for(int c=0;c<length;c++)
            m[(f+1)%length][c]=m[(f+1)%length][c]+mul*m[f][c];

        for(int i=0;i<length;i++){
            for(int j=0;j<length;j++)
               
                cout<<m[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl;

        mul=-m[(f+2)%length][f];

        for(int c=0;c<length;c++)
            m[(f+2)%length][c]=m[(f+2)%length][c]+mul*m[f][c];

    }
    int cont=0;
    for(int i=0;i<length-1;i++)
    {
       if(m[length-1][i]==0)
         cont++;
   }
   for(int i=0;i<length;i++){
            for(int j=0;j<length;j++)
               
                cout<<m[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl;
   if(cont==length-1&&m[length-1][length-1]==0)
      cout<<"tiene infinitas soluciones"<<endl;
   else if(cont==length-1&&m[length-1][length-1]!=0)
      cout<<"no tiene solucion";
   else cout<<"tiene unica solucion"<<endl;

}

 


int main(){
 int **m;
 crear(m,3,3);
 int **a;
 crear(a,3,3);
 int **n;
crear(n,3,3);
 int tipo;

 


 for( ; ; ){
  cout<<"                  --------------------------------------------------------------------------------"<<endl;
  cout<<"                  |                              SISTEMA DE ECUACIONES                           |"<<endl;
  cout<<"                  --------------------------------------------------------------------------------"<<endl;
  cout<<"                  |          1.LLenar Matrices                                                   |"<<endl;
  cout<<"                  |          2.Imprimir Matrices                                                 |"<<endl;
  cout<<"                  |          3.Sumar Matrices                                                    |"<<endl;
  cout<<"                  |          4.Restar Matrices                                                   |"<<endl;
  cout<<"                  |          5.Multiplicar por un Escalar                                        |"<<endl;
  cout<<"                  |          6.Hallar El Maximo Elemento de la Matriz                            |"<<endl;
  cout<<"                  |          7.Hallar la Transpuesta                                             |"<<endl;
  cout<<"                  |          8.Hallar la Inversa                                                 |"<<endl;
  cout<<"                  |          9.Hallar la Determinante                                            |"<<endl;
  cout<<"                  |          10.Ordenar los Elementos de la Matriz por Filas                     |"<<endl;
  cout<<"                  |          11.Intercambiar Dos Filas                                           |"<<endl; 
  cout<<"                  |          12.Intercambiar Dos Columnas                                        |"<<endl;
  cout<<"                  |          13.Hallar la Suma de Todos sus Elementos                            |"<<endl;
  cout<<"                  |          14.Indicar si es Simetrica                                          |"<<endl;
  cout<<"                  |          15.Indicar si es Identidad                                          |"<<endl;
  cout<<"                  |          16.Crear una Matriz Identidad                                       |"<<endl;
  cout<<"                  |          17.Determinar si el sistema de ecuaciones no tiene solucion         |"<<endl;
  cout<<"                  |             Determinar si el sistema de ecuaciones tiene infinitas soluciones|"<<endl;
  cout<<"                  |             Determinar si el sistema de ecuaciones tiene una sola solucion   |"<<endl;
  cout<<"                  |          18.Salir                                                            |"<<endl;
  cout<<"                  |     Elige una opcion:                                                        |"<<endl;
  cout<<"                  --------------------------------------------------------------------------------"<<endl;
  cin>>tipo;
  switch(tipo){
 
  case 1:
    int fil, col;
        cout<<"Ingresar filas:"<<endl;
    cin>>fil;
        cout<<"Ingresar columnas"<<endl;
        cin>>col;
        llenar(m,fil,col);
   break;
  case 2:
     
    imprimir(m,3,3);
 
   break;
  case 3:
 
  int fil3, col3;
        cout<<"Ingresar filas:"<<endl;
    cin>>fil3;
        cout<<"Ingresar columnas"<<endl;
        cin>>col3;
      
        llenar(m,fil3,col3);
        llenar(a,fil3,col3);
      // sumar(m,a,n,3,3);
 
    break;
  case 4:
   int fil4, col4;
        cout<<"Ingresar filas:"<<endl;
    cin>>fil4;
        cout<<"Ingresar columnas"<<endl;
        cin>>col4;
      
        llenar(m,fil4,col4);
        llenar(a,fil4,col4);
      // restar(m,a,n,3,3);
     break;
  case 5:

      int fi, co;
        cout<<"Ingresar filas:"<<endl;
        cin>>fi;
        cout<<"Ingresar columnas"<<endl;
        cin>>co;
        llenar(m,fi,co);
      int e;
    cout<<"ingresar el escalar"<<endl;
    cin>>e;
      // mult(m,3,3,e);
    imprimir(m,3,3);
   break;
  case 6:
    break;
  case 7:
    int f7, c7;
        cout<<"Ingresar filas:"<<endl;
        cin>>f7;
        cout<<"Ingresar columnas"<<endl;
        cin>>c7;
        llenar(m,f7,c7);
        //tra(m,f7,f7);

     break;
  case 8:
 
   break;
  case 9:
    break;
  case 10:
     break;
  case 11:
 


   break;
  case 12:
    break;
  case 13:
     break;
  case 14:
 
   break;
  case 15:
 
    break;
  case 16:
   int f1, c1;
        cout<<"Ingresar filas:"<<endl;
        cin>>f1;
        cout<<"Ingresar columnas"<<endl;
        cin>>c1;
 
   crearid(m,f1,c1);
   imprimir(m, f1,c1);
     break;
  case 17:
   gauss();
 
   break;
  case 18:
 
   return 0;
   break;
  }

 }

}
