# • Escribe una línea de comandos que muestre el número de archivos y de directorios del directorio actual y de todos sus subdirectorios, incluido el "."del directorio inicial.

#!/bin/bash

find . -type f -o -type d | wc -l

# En el que se usa el comando find con la opción -type f para buscar solo archivos, la opción -o para buscar archivos o directorios, y el comando wc con la opción -l para contar el número de líneas.