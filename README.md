Test of a data post (http post) with arduino yun with curl to a firebase database
=================================================================================

1) We need create the new project from firebase console (https://console.firebase.google.com/). In this case, the project name is "example", then the url project is https://example.firebaseio.com/

2) With the project created,  we should change the permissions to any person can send data to firebase database (In this case this a test and the security doesn't matter). In the project console we should go to "rules" and change this rules to this (Keep the json format):

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

3) Load the file `post-curl-arduinoyun.ino` in arduino microcontroller. If the URL of the database has changed the we need to change the value of the variable `String urlDataBase` in the arduino skecth.

4) (Optional) The HTML file `registers.html` works with HTML5, if you run it with some browser you can see the firebase database registers that the arduino is posting in the database `example` in json file `registers.json`

Sources:

Firebase library for arduino: https://github.com/googlesamples/firebase-arduino

How create a firebase database? (in spanish): https://www.youtube.com/watch?v=bWH2Wc_p4HU

More information of the Firebase Rest API with Curl: https://www.firebase.com/docs/rest/api/  

Arduino Yun + Curl + Firebase, first steps: http://www.fabiobiondi.com/blog/2014/02/arduino-yun-angularjs-and-firebase-with-curl-realtime-data/


Prueba con Arduino Yun de Post de datos con curl a una base de datos en Firebase
================================================================================

1) Se debe crear el proyecto desde la consola de firebase en https://console.firebase.google.com/. Para este caso, el nombre del proyecto es example, por lo tanto la URL del proyecto es https://example.firebaseio.com/

2) Ya creado el repositorio, se deben cambiar los permisos para que cualquier persona pueda enviar datos a la database de firebase. En la consola del proyecto se debe ir a reglas y cambiar dichas reglas a las siguientes (conservando el formato JSON). Esto se hace ya que es solo una prueba pero se debe tener precaución pues estamos quitando cualquier seguridad:

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

3) Cargar el archivo `post-curl-arduinoyun.ino` en el microcontrolador Arduino Yun. Si la url de la base de datos a la cual se le van a enviar los datos cambia entonces se debe cambiar el valor de la variable `String urlDataBase`.

4) (Opcional) El archivo html `registers.html` funciona con HTML5, al ponerlo a funcionar en algún Browser se podrán visualizar los registros que el arduino Yun va posteando en la base de datos `example` en Firebase en el json `registers.json`

Fuentes:

Librería de Firebase para Arduino: https://github.com/googlesamples/firebase-arduino

Como crear la base de datos en firebase: https://www.youtube.com/watch?v=bWH2Wc_p4HU

Más información del Rest API con Curl de Firebase: https://www.firebase.com/docs/rest/api/  

Arduino Yun + Curl + Firebase, primeros pasos: http://www.fabiobiondi.com/blog/2014/02/arduino-yun-angularjs-and-firebase-with-curl-realtime-data/
