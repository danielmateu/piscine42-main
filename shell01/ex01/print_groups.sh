# Escribe una línea de comandos que muestre, separados por comas y sin espacios, la lista de grupos a la que el login, contenido en la variable de entorno FT_USER, es miembro.

#!/bin/sh

# en el que se usa el comando groups para mostrar los grupos a los que pertenece el usuario, luego se usa el comando tr para reemplazar los espacios por comas y eliminar los saltos de línea, y finalmente se usa el comando cat con la opción -e para mostrar un $ al final de la línea.

id -Gn | tr ' ' ',' | tr -d '\n'

# en el que se usa el comando id con la opción -Gn para mostrar los grupos a los que pertenece el usuario, luego se usa el comando tr para reemplazar los espacios por comas.