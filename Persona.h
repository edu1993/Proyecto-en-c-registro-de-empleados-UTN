#ifndef _PERSONA_H
#define _PERSONA_H


class Persona {
  private:
    long dni;

    char* nomape;


  public:
    Persona(long d, const char* & na);
    void setNombre(const char * );
    void setDni(long);

    char* getNombre();

    long getDni();

};
#endif
