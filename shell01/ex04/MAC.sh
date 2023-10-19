

# Escribe una línea de comandos que muestre las direcciones MAC de nuestro equipo. Cada dirección irá seguida de un salto de línea.

#!/bin/sh

# ifconfig | grep ether | cut -d ' ' -f 2

# en el que se usa el comando ifconfig para mostrar la configuración de red, luego se usa el comando grep para buscar la palabra ether, luego se usa el comando cut con la opción -d para especificar el delimitador y la opción -f para especificar el campo a mostrar.

# La palabra ether significa "ethernet", y es el nombre de la interfaz de red de nuestro equipo.

# Otra forma de hacerlo es con el comando awk:

ifconfig | grep ether | awk '{print $2}'

# en el que se usa el comando awk para mostrar el segundo campo de cada línea.


