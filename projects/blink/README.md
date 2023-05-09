@note
Este documento está tipado con Markdown. Servirá de ejemplo para enseñar cómo documentar un proyecto que, al compilarlo con Doxygen, genere una API con este `README.md` como página de inicio de la web. Se enseñan los principales aspectos, pero si busca por internet, encontrará muchísimas cosas que se pueden hacer. Esto es una nota, y todo lo que esté en el mismo párrafo se mete en ella. Si quieres forzar espaciado entre saltos de línea mete los símbolos de 2 retornos de carro (`\n\n`).

@warning
**Borre todas las notas y textos de ejemplo y adáptelos a su proyecto**

<!---
Esto es un comentario y no se imprime: si tienes notas o cajas seguidas y se te unen como 1 sola, puedes separarlas forzando un salto de línea: \n.
-->

\n
@note
Los títulos se indican con una almohadilla '#', subtítulos con dos '##', etc.
**Lo primero que debe aparecer es el título del proyecto y una tabla con: autores, versión del código, fecha**
\n\n
Busca el campo `PROJECT_NAME` en el fichero `Doxyfile` y pon entre comillas dobles el nombre del proyecto. Saldrá en la cabecera de la web.

# Blink
|                        |                                        |
| ---------------------- | -------------------------------------- |
| **Autores**            | Nombre1 Apellidos1, Nombre2 Apellidos2 |
| **Versión del código** | V1                                     |
| **Fecha**              | 08/05/2023                             |


@note
Lo siguiente que debe aparecer es el resumen del proyecto. Suele ocupar un par de líneas.
\n\n
💡 Puedes meter emojis en tu texto ([búscalos online](https://tutorialmarkdown.com/emojis)). \n
*Para poner texto en cursiva, rodéalo con 1 asterisco al inicio y al final sin espacios.* (`*texto cursiva aquí*`)\n
**Para poner texto en negrita, rodéalo con 2 asteriscos al inicio y al final sin espacios.** (`**texto negrita aquí**`)\n

## Resumen
Es es un proyecto básico que permite producir el parpadeo de un LED. En la versión actual está *portado* para la placa Nucleo STM32F446RE y PC. 


@note
Lo siguiente que debe aparecer es una introducción al proyecto. Cuántos bloques tiene (bloques HW y/o SW), qué hacen (someramente), etc. \n
Se recomienda usar imágenes.


## Introducción
El proyecto, portado para la placa Nucleo STM32F446RE (ver imagen), hace uso del LED de usuario de la placa.

El proyecto, portado para la el PC, hace impresiones por pantalla.

Este código no implementa ninguna máquina de estados (FSM).

![Imagen de la placa Nucleo STM32F446RE](./assets/nucleo.jpg)

@note
Para añadir una imagen, guárdala en la carpeta `/docs/html/assets/` e inclúyela como `![Texto descriptivo (sale al poner el ratón encima)](./assets/nombre_fichero.extension)`


@note
Lo siguiente que debe aparecer es una descripción de cada bloque (máquinas de estado, comportamiento, etc.) Algo que a un usuario que lo lea por primera vez le deje claro qué función tiene el bloque. Puedes usar sub-subapartados con `###`.

### Sub-apartado 1
Puedes escribir listas, enumerados... Todas las opciones de Markdown están [aquí](https://tutorialmarkdown.com/sintaxis-extendida)
- Una lista
- Tiene varios
- Elementos

1. En una lista enumerada
2. Debe haber un orden
3. Creciente de los puntos

### Otro subapartado

@note
Puedes meter hipervínculos a enlaces web como: `[texto a resaltar](URL)`

@warning
Si en tu proyecto haces mejoras, **¡no olvides meter un vídeo demostrándolas!** Una imagen vale más que mil palabras, y mil imágenes...\n


@note
Se podrían meter vídeos como ficheros adjuntos, pero haría el proyecto muy pesado.\n
Una forma inteligente y elegante puede ser añadir una imagen y que al pinchar a esa imagen te lleve al vídeo que esté subido, por ejemplo, a Youtube. 
`[![Texto](./assets/frame_o_imagen_del_video.extension)](URL "Texto descriptivo (sale al poner el ratón encima).")`
`
Un ejemplo lo tienes a continuación. Pincha en la imagen, y verás.

[![Demostrador del proyecto Retina](./assets/youtube.jpg)](https://youtu.be/A4TQE9qLXGI "Si pinchas en la imagen te lleva a un vídeo.")

