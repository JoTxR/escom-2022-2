function persona(n){
    this.n=n;
    this.saludo=function(){
        alert("hola! estoy en " + this.n + '!');
    }
}

var yo= new persona('IPN');
var tu = new persona('ESCOM');
tu.saludo()
yo.saludo()

/* 
4 paginas    
1.- datos personales
2.- instrucciones
3.- test
4.- resultado del test(envie a correo el resultado)
*/