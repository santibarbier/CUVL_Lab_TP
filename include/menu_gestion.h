#ifndef MENU_GESTION_H_
#define MENU_GESTION_H_

typedef enum GESTION_OP {
    GES_END,
    GES_ALTA_DE_LIBRO,
    GES_LISTADO,
    GES_BUSCAR_TITULO,
    GES_BUSCAR_NOMBRE,
    GES_BUSCAR_APELLIDO,
    GES_BUSCAR_ISBN,
    GES_EDITAR,
    GES_ELIMINAR
} GESTION_OP;
void gestionMenu();

#endif // MENU_GESTION_H_
