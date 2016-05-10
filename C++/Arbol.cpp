#include <conio.h>

#include <iostream.h>

class Arbol

{

private:

int Top,Pila[10];

int Info[10],Izq[10],Der[10],Raiz,Disp;

public:

Arbol()

{

int in[10]={0,0,0,0,0,0,0,0,0,0};

for(int i=0;i<10;i++)

{

Info[i]=0;

Izq[i]=i+1;

Der[i]=-999;

Pila[i]=0;

}

Top=0;

Disp=0;

Raiz=-999;

Izq[9]=-999;

}

void PreOrd(void)

{

int Temp=Raiz;

Top=0;

Pila[0]=-999;

if(Raiz==-999)

{

cout<<"Arbol Vacio..."<<endl;

return;

}

while(Temp!=-999)

{

cout<<Info[Temp]<<endl;

if(Der[Temp]!=-999)

{

Top++;

Pila[Top]=Der[Temp];

}

if(Izq[Temp]!=-999)

{

Temp=Izq[Temp];

}

else

{

Temp=Pila[Top];

Top--;

}

}

}

void InOrd(void)

{

int Temp=Raiz,

Top=0;

Pila[0]=-999;

if(Raiz==-999)

{

cout<<"Arbol Vacio..."<<endl;

return;

}

Back:

while(Temp!=-999)

{

Top++;

Pila[Top]=Temp;

Temp=Izq[Temp];

}

Temp=Pila[Top];

Top--;

while(Temp!=-999)

{

cout<<Info[Temp]<<endl;

if(Der[Temp]!=-999)

{

Temp=Der[Temp];

goto Back;

}

Temp=Pila[Top];

Top--;

}

}

void PostOrd(void)

{

int Temp=Raiz;

Top=0;

Pila[0]=-999;

if(Raiz==-999)

{

cout<<"Arbol Vacio..."<<endl;

return;

}

Back1:

while(Temp!=-999)

{

Top++;

Pila[Top]=Temp;

if(Der[Temp]!=-999)

{

Top++;

Pila[Top]=-Der[Temp];

}

Temp=Izq[Temp];

}

Temp=Pila[Top];

Top--;

while(Temp>=0)

{

cout<<Info[Temp]<<endl;

if(Info[Temp]==Info[Raiz])

return;

Temp=Pila[Top];

Top--;

}

if(Temp<0)

{

Temp=-Temp;

goto Back1;

}

}

void Busqueda(int PosPad[2],int Elem)

{

int Temp,Temp2;

if(Raiz==-999)

{

PosPad[0]=-999;

PosPad[1]=-999;

cout<<"Arbol Vacio..."<<endl;

return;

}

if(Elem==Info[Raiz])

{

PosPad[0]=Raiz;

PosPad[1]=-999;

cout<<"Elemento Encontrado..."<<endl;

return;

}

if(Elem<Info[Raiz])

{

Temp=Izq[Raiz];

Temp2=Raiz;

}

else

{

Temp=Der[Raiz];

Temp2=Raiz;

}

while(Temp!=-999)

{

if(Elem==Info[Temp])

{

cout<<"Elemento Encontrado..."<<endl;

PosPad[0]=Temp;

PosPad[1]=Temp2;

return;

}

if(Elem<Info[Temp])

{

Temp2=Temp;

Temp=Izq[Temp];

}

else

{

Temp2=Temp;

Temp=Der[Temp];

}

}

PosPad[0]=-999;

PosPad[1]=Temp2;

cout<<"Elemento no Encontrado..."<<endl;

}

void InsOrd(int Elem)

{

int PosPad[2],Temp;

if(Disp!=-999)

{

Busqueda(PosPad,Elem);

clrscr();

if(PosPad[0]!=-999)

{

cout<<"Elemento Existente... Imposible Insertar..."<<endl;

return;

}

Temp=Disp;

Disp=Izq[Disp];

Info[Temp]=Elem;

PosPad[0]=Temp;

Izq[Temp]=-999;

Der[Temp]=-999;

if(PosPad[1]==-999)

Raiz=Temp;

else if(Elem<Info[PosPad[1]])

Izq[PosPad[1]]=Temp;

else

Der[PosPad[1]]=Temp;

cout<<"Elemento Insertado..."<<endl;

return;

}

cout<<"Arbol Lleno... Imposible Insertar..."<<endl;

}

void Eliminar(int Elem)

{

int PosPad[2];

Busqueda(PosPad,Elem);

clrscr();

if(PosPad[0]==-999)

{

cout<<"El Elemento no se Encuentra en el Arbol... Imposible Eliminar..."<<endl;

return;

}

if(Der[PosPad[0]]!=-999&&Izq[PosPad[0]]!=-999)

CasoB(PosPad);

else

CasoA(PosPad);

Izq[PosPad[0]]=Disp;

Disp=PosPad[0];

}

void CasoA(int PosPad[2])

{

int Temp;

if(Izq[PosPad[0]]==-999&&Der[PosPad[0]]==-999)

Temp=-999;

else if(Izq[PosPad[0]]!=-999)

Temp=Izq[PosPad[0]];

else

Temp=Der[PosPad[0]];

if(PosPad[1]!=-999)

{

if(PosPad[0]==Izq[PosPad[1]])

Izq[PosPad[1]]=Temp;

else

Der[PosPad[1]]=Temp;

}

else

Raiz=Temp;

}

void CasoB(int PosPad[2])

{

int PosPad2[2],Temp=Der[PosPad[0]],Temp2=PosPad[0];

while(Izq[Temp]!=-999)

{

Temp2=Temp;

Temp=Izq[Temp];

}

PosPad2[0]=Temp;

PosPad2[1]=Temp2;

CasoA(PosPad2);

if(PosPad[1]!=-999)

{

if(PosPad[0]==Izq[PosPad[1]])

Izq[PosPad[1]]=PosPad2[0];

else

Der[PosPad[1]]=PosPad2[0];

}

else

Raiz=PosPad2[0];

Izq[PosPad2[0]]=Izq[PosPad[0]];

Der[PosPad2[0]]=Der[PosPad[0]];

}

}tec;

main()

{

int PosPad[2],res,op=0;

while(op!=7)

{

clrscr();

cout<<"\n1) Pre-Orden\n2) In-Orden\n3) Post-Orden\n4) Busqueda\n5) Insercion\n6) Eliminar\n7) Salir"<<endl;

gotoxy(1,1);

cout<<"Que deseas hacer?: ";

cin>>op;

gotoxy(1,10);

switch (op)

{

case 1:

tec.PreOrd();

break;

case 2:

tec.InOrd();

break;

case 3:

tec.PostOrd();

break;

case 4:

cout<<"Que Numero deseas buscar?"<<endl;

cin>>res;

tec.Busqueda(PosPad,res);

break;

case 5:

cout<<"Que Numero quieres Insertar?"<<endl;

cin>>res;

tec.InsOrd(res);

break;

case 6:

cout<<"Que Numero quieres Eliminar?"<<endl;

cin>>res;

tec.Eliminar(res);

break;

case 7:

cout<<"Salida...";

break;

default:

cout<<"Opcion Erronea"<<endl;

break;

}

getch();

}

}