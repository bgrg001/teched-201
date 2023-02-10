<!DOCTYPE html>
<html>
  <head>
    
  </head>

  <body>
    <button onclick="clicking ()">Guess</button>
    <p id="here">Are you right?</p>

    <script>
      
      var a = 10;

      function clicking (){

        var a = prompt('Guess the number'); 
        console.log("it's working");

    

        if(a == "10"){

          document.getElementById("here").innerHTML = "yes you are";
    }else 
          document.getElementById("here").innerHTML = "nope";
      }

       
       //logic <----------------------this is code that allows popups of higher or lower
        if(guessnumber == a){
          alert("yasss you guessed right");
        }else if(guessnumber > a){
          alert("too high");
        }else if(guessnumber< a){
          alert("too low");
        }

    </script>
  </body>
</html>
