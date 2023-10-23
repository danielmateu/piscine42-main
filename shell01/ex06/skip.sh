# Escribe una linea de comandos que muestre un ls -l cada dos lineas, a partir de la primera linea.
ls -l | sed -n 'p;n'


