function mensaje(n,m){
    var objeto={};
    objeto.n =n;
    objeto.m=m;
    objeto.saludo = function(){
        alert("hola! Estoy en "+this.n+'! '+ ' del ' + this.m);
    }
    return objeto;
}
var s = mensaje("ESCOM","IPN");
s.n/* se puede manipular la cadena completa con este comando */
s.saludo();
