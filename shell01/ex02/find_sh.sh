# Escribe una linea de comandos que busque en el directorio en curso y en todos sus subdirectorios todos los todos los archivos cuyo nombre se termine por ".sh" (Sin las comillas) y no muestre nada más que sus nombres, sin el sufijo ".sh" y ordenados alfabéticamente, sin distinción de mayúsculas y minúsculas.


# en el que se usa el comando find con la opción -type f para buscar solo archivos, la opción -name "*.sh" para buscar archivos cuyo nombre termine en .sh, la opción -exec para ejecutar el comando basename con la opción {} para reemplazar el nombre del archivo y la opción \; para indicar el final del comando
find . -type f -name "*.sh" -exec basename {} .sh \;