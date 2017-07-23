#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
using namespace std;
 struct fechanac{
    int anio;
    int mes;
    int dia;
};
struct comp{
    int cod;
    char ap[15];
    char am[15];
    char pn[15];
    struct fechanac f;
}alumn[20]={{2020,"yupanqui","candia","milena",2000,01,01},
          {3321,"mamani","tique","fiorella",1999,12,12},
          {4543,"calvo","callo","yemira",1999,05,02},
          {5325,"campos","alvarez","lizeth",2000,05,30},
          {6565,"rios","huanca","luis",1999,05,10},
          {7231,"ito","ramos","leydi",1995,05,17},
          {8354,"paredes","flores","mabel",1999,12,12},
          {7254,"sosa","colquehuanca","estefany",1997,07,22},
          {1321,"phuño","cahuana","nelson",1999,11,24},
          {2231,"castillo","huanco","raul",1997,10,06},
          {4321,"ruelas","aries","gustavo",2000,06,15},
          {3361,"zapana","yupanqui","maribel",1998,04,18},
          {5431,"quispe","alanoca","yomara",1999,10,11},
          {6421,"cotrado","montalico","juan",2000,10,05},
          {5543,"huayta","quispe","jhosep",1996,05,05},
          {6498,"quispe","quispe","jhony",2000,03,03},
          {3458,"inchuña","heyson","bravo",1995,10,13},
          {2798,"huancollo","mayta","marshuri",2000,07,13},
          {3494,"chauña","quispe","marco",1997,10,23},
          {6498,"ticona","escobar","gaby",1999,12,22}
          };
/*comp inter(int i,int j)
{
    comp tmp;
    tmp.cod=alumn[i].cod;
    tmp.ap=alumn[i].ap;
    tmp.am=alumn[i].am;
    tmp.pn=alumn[i].pn;
    tmp.f.anio=alumn[i].f.anio;
    tmp.f.mes=alumn[i].f.mes;
    tmp.f.dia=alumn[i].f.dia;
    alumn[i].cod=alumn[j].cod;
    alumn[i].ap=alumn[j].ap;
    alumn[i].am=alumn[j].am;
    alumn[i].pn=alumn[j].pn;
    alumn[i].f.anio=alumn[j].f.anio;
    alumn[i].f.mes=alumn[j].f.mes;
    alumn[i].f.dia=alumn[j].f.dia;
    alumn[j].cod=tmp.cod;
    alumn[j].ap=tmp.ap;
    alumn[j].am=tmp.am;
    alumn[j].pn=tmp.pn;
    alumn[j].f.anio=tmp.f.anio;
    alumn[j].f.mes=tmp.f.mes;
    alumn[j].f.dia=tmp.f.dia;

}*/
comp mostrar()
{
    for (int i =0;i<20;i++)
   {
      cout<<left<<alumn[i].cod<<setw(3)<<" "<<setw(10)<<alumn[i].ap<<setw(3)<<" "<<setw(15)<<alumn[i].am<<setw(5)<<" "<<setw(15)<<alumn[i].pn<<" "<<setw(6)<<alumn[i].f.anio<<" "<<setw(4)<<alumn[i].f.mes<<" "<<setw(4)<<alumn[i].f.dia;
      cout<<endl;

   }

}
comp ordenarapell()
{
    for (int i =0;i<20;i++)
   {
       for (int j=i+1;j<20;j++){
       if(alumn[i].ap>alumn[j].ap)
       {
          cout<<"****************"<<alumn[i].ap<<"*********************************************"<<endl;
          //inter(i,j);
       }
       }
   }
}

int main()
{
   /*for (int i =0;i<20;i++)
   {
      cout<<alumn[i].cod<<" "<<alumn[i].ap<<" "<<alumn[i].am<<" "<<alumn[i].pn<<" "<<alumn[i].f.anio<<" "<<alumn[i].f.mes<<" "<<alumn[i].f.dia;
      cout<<endl;

   }*/
   mostrar();
   cout<<"*************************************************************"<<endl;
   cout<<"ordenar por apellido: "<<endl;
   cout<<"*************************************************************"<<endl;
   /*for (int i =0;i<20;i++)
   {
       for (int j=i+1;j<20;j++){
       if(alumn[i].ap>alumn[j].ap)
       {
          cout<<"****************"<<alumn[i].ap<<"*********************************************"<<endl;
          swap(alumn[i],alumn[i+1]);
       }
       }
   }*/
   for (int i =0;i<20;i++)
   {
      cout<<alumn[i].cod<<" "<<alumn[i].ap<<" "<<alumn[i].am<<" "<<alumn[i].pn<<" "<<alumn[i].f.anio<<" "<<alumn[i].f.mes<<" "<<alumn[i].f.dia;
      cout<<endl;

   }
    return 0;
}
