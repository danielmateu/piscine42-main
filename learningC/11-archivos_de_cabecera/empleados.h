

typedef enum cargo_t
{
    PROGRAMADOR,
    ANALISTA,
    GERENTE
} Cargo;

typedef struct empleado_t
{
    char nombre[30];
    char apellido[40];
    char id[9];
    Cargo cargo;
} Empleado;

void print_empleado(Empleado *empl);
