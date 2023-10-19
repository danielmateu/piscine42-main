# Script de shell que muestre por pantalla la lista de archivos ignorados por git. con un -$ al final de cada hash

#!/bin/sh

# ls-files: Muestra información sobre los archivos conocidos por git
# --others: Muestra los archivos que no están en el índice
# --ignored: Muestra los archivos ignorados
# --exclude-standard: Ignora los archivos estándar
# sed: Comando para filtrar y transformar textos

git ls-files --others --ignored --exclude-standard | sed 's/$/-$/'