Prueba con Arduino Yun de Post de datos a base de datos en Firebase
===================================================================

1) Se debe crear el proyecto desde la consola de firebase en https://console.firebase.google.com/. Para este caso, el nombre del proyecto es expin-elias, por lo tanto la URL del proyecto es https://expin-elias.firebaseio.com/

2) Ya creado el repositorio, se deben cambiar los permisos para que cualquier persona pueda enviar datos a la database de firebase. En la consola del proyecto se debe ir a reglas y cambiar dichas reglas a las siguientes (conservando el formato JSON):

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

3) Cargar el archivo `prueba-yun-firebase.ino` en el microcontrolador Arduino Yun. Si la url de la base de datos a la cual se le van a enviar los datos cambia entonces se debe cambiar el valor de la variable `String urlDataBase`.

4) (Opcional) El archivo html `registros.html` funciona con HTML5, al ponerlo a funcionar en algún Browser se podrán visualizar los registros que el arduino Yun va posteando en la base de datos `expin-elias` en Firebase en el json `registros.json`

Librería de Firebase para Arduino: https://github.com/googlesamples/firebase-arduino

Para ver vídeo de la ejecución de la prueba: https://www.youtube.com/watch?v=Kc-_GkgrFqU

Como crear la base de datos en firebase: https://www.youtube.com/watch?v=bWH2Wc_p4HU

Más información del Rest API con Curl de Firebase: https://www.firebase.com/docs/rest/api/  

Arduino Yun + Curl + Firebase, primeros pasos: http://www.fabiobiondi.com/blog/2014/02/arduino-yun-angularjs-and-firebase-with-curl-realtime-data/ 
