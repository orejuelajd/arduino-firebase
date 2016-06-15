Test of a data post (http post) with arduino yun with curl to a firebase database
=================================================================================

With this example your arduino yun post data to a firebase database.

**Note:** We assumed that you have a firebase created and the rules changed.

1) Load the file `post-curl-arduinoyun.ino` in arduino microcontroller. If the URL of the database has changed the we need to change the value of the variable `String urlDataBase` in the arduino skecth.

2) (Optional) The HTML file `registers.html` works with HTML5, if you run it with some browser you can see the firebase database registers that the arduino is posting in the database `example` in json file `registers.json`. Remember change in the html file (registers.html) the value of this variable `urlDataBase` with the url of your database of the firebase project.

Sources:

Firebase library for arduino: https://github.com/googlesamples/firebase-arduino

How create a firebase database? (in spanish): https://www.youtube.com/watch?v=bWH2Wc_p4HU

More information of the Firebase Rest API with Curl: https://www.firebase.com/docs/rest/api/  

Arduino Yun + Curl + Firebase, first steps: http://www.fabiobiondi.com/blog/2014/02/arduino-yun-angularjs-and-firebase-with-curl-realtime-data/


Prueba con Arduino Yun de Post de datos con curl a una base de datos en Firebase
================================================================================

Con este ejemplo tu arduino yun hará posts de datos a una base de datos en firebase.

**Nota:** Ya debiste haber creado la base de datos en firebase y haberle cambiado las reglas para que cualquiera pueda enviar o leer datos de ella.

1) Cargar el archivo `post-curl-arduinoyun.ino` en el microcontrolador Arduino Yun. Si la url de la base de datos a la cual se le van a enviar los datos cambia entonces se debe cambiar el valor de la variable `String urlDataBase`.

2) (Opcional) El archivo html `registers.html` funciona con HTML5, al ponerlo a funcionar en algún Browser se podrán visualizar los registros que el arduino Yun va posteando en la base de datos `example` en Firebase en el json `registers.json`. Recuerda cambiar en el archivo html (registers.html) el valor de la variable `urlDataBase` con la url de tu base de datos del proyecto de firebase.

Fuentes:

Librería de Firebase para Arduino: https://github.com/googlesamples/firebase-arduino

Como crear la base de datos en firebase: https://www.youtube.com/watch?v=bWH2Wc_p4HU

Más información del Rest API con Curl de Firebase: https://www.firebase.com/docs/rest/api/  

Arduino Yun + Curl + Firebase, primeros pasos: http://www.fabiobiondi.com/blog/2014/02/arduino-yun-angularjs-and-firebase-with-curl-realtime-data/
