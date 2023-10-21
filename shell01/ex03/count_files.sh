# • Escribe una línea de comandos que muestre el número de archivos y de directorios del directorio actual y de todos sus subdirectorios, incluido el "."del directorio inicial y que elimine todos los expacios en blanco al principio de las líneas y los espacios en blanco inútiles.

#!/bin/bash

# find . -type f -o -type d | wc -l

find . -type f -o -type d | sed -e 's/^ *//' | wc -l

# En el que se usa el comando find con la opción -type f para buscar solo archivos, la opción -o para buscar archivos o directorios, y el comando wc con la opción -l para contar el número de líneas.