#ifndef _TIEMPO_H
#define _TIEMPO_H


class Tiempo {
  private:
    int hora;

    int minuto;

    int segundo;


  public:
    Tiempo(int h, int m, int s);

    int getHora();

    int getMinuto();

    int getSegundo();

};
#endif
