# Crea un script de shell que muestre en pantalla ls id de los últimos commits del repositorio.

#!/bin/sh

# log -> muestra los commits
# -n -> muestra los ultimos n commits
# --pretty=format:"%H" -> muestra el hash de cada commit

git log -n 5 --pretty=format:"%H$"