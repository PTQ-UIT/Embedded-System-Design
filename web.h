const char MAIN_page[] PROGMEM = R"=====(
<html>
<head>
  <meta charset="UTF-8">
  <title>ESP8266 kết nối WiFi bằng điện thoại</title>
</head>
<body>
<form action="caidat" method="post">
  <div class="container">
    <label for="uname"><b>Username</b></label>
    <input type="text" placeholder="Enter Username" name="tenwifi" required>

    <label for="psw"><b>Password</b></label>
    <input type="password" placeholder="Enter Password" name="matkhau" required>

    <button type="submit">Login</button>
    
  </div>

  
</form>
</body>

</html>
)=====";
