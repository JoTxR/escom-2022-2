function aleatorio(max){   
   return Math.floor(Math.random() * max)
}

var n=0,num;
var x1 =100,y1=200;
var x2=300,y2=200;
var x3 =200,y3=100;
var p1=300,p2=300;
var pmx=0,pmy=0;
var color='aqua',numero = 0;
color=window.prompt('inserte un color en ingles:'); 
while(n < 1000){
n=window.prompt('inserte un numero mayor a 1000:');  
}
var canvas = document.getElementById("canvas");
var contexto = canvas.getContext("2d");
   contexto.fillStyle = color;
    contexto.fillRect(x1,y1,2,2);
    contexto.fillRect(x2,y2,2,2);
    contexto.fillRect(x3,y3,2,2);
    contexto.fillRect(p1,p2,2,2);
    
for(var i = 0 ; i <= n ; i++){
   num = aleatorio(2);
   if (num == 0){
   p1=(x1 + p1)/2;
   p2=(y1 + p2)/2;
   contexto.fillRect(p1,p2,2,2);
   }
   else if(num == 1){
   p1=(x2+p1)/2;
   p2=(y2+p2)/2;
   contexto.fillRect(p1,p2,2,2);   
   }
   else if(num == 2){
   p1=(x3+p1)/2;
   p2=(y3+p2)/2;
   contexto.fillRect(p1,p2,2,2);
   }}
