var x;
var y;
var num;
        document.body.style.background = 'white';
        x= window.prompt("inserte un numero para verificar si es maravilloso");
        numero(x)
        document.write("<br/><center>"+ y+" es un numero maravilloso!!!</center>");
    
        function numero(x){
            y = x;
            document.write(x+ "<br\>");
            while (x!=1){
                if(x%2 != 0){
                    x = x*3+1;
                    document.write(x+ "<br\>")
                }
                if(x%2 == 0){
                    x/=2;
                    document.write(x+ "<br\>")
                }}
            return y;
        }
        
    