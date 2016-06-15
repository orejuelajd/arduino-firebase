Tests with Firebase and Arduino
===============================

# Basic steps:

1) We need create the new project from firebase console (https://console.firebase.google.com/). In this case, the project name is "example", then the url project is https://example.firebaseio.com/

2) With the project created,  we should change the permissions to any person can send data to firebase database (In this case this a test and the security doesn't matter). In the project console we should go to "rules" and change this rules to this (Keep the json format):

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

3) Load any arduino file of this repo in arduino microcontroller, for example this --> `post-curl-arduinoyun.ino`. If the URL of the database has changed the we need to change the value of the variable `String urlDataBase` in the arduino skecth. Then you see in the firebase console or arduino serial monitor what happened.


Pruebas con Firebase and Arduino
================================

# Pasos básicos:

1) Se debe crear el proyecto desde la consola de firebase en https://console.firebase.google.com/. Para este caso, el nombre del proyecto es example, por lo tanto la URL del proyecto es https://example.firebaseio.com/

2) Ya creado el repositorio, se deben cambiar los permisos para que cualquier persona pueda enviar datos a la database de firebase. En la consola del proyecto se debe ir a reglas y cambiar dichas reglas a las siguientes (conservando el formato JSON). Esto se hace ya que es solo una prueba pero se debe tener precaución pues estamos quitando cualquier seguridad:

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

3) Cargar cualquier archivo de arduino en este repo en el microcontrolador de arduino, por ejemplo este --> `post-curl-arduinoyun.ino`. Si la url de la base de datos a la cual se le van a enviar los datos cambia entonces se debe cambiar el valor de la variable `String urlDataBase`.
