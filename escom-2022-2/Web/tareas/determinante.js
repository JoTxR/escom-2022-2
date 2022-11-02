var matriz=[[],[],[]];
var total=0;
var i=0,j=0;


document.body.style.background = 'white'
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    matriz[i][j]=window.prompt("inserte valor para ["+i+"]["+j+"]");
    /* 
    input 
    formulario */
    }
}

for(i = 0; i < 3; i++){
    document.write("<center>[" + matriz[i]+"]");
    document.write("<br\>");
}

total=(matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[1][0]*matriz[2][1]*matriz[0][2]) + (matriz[2][0]*matriz[0][1]*matriz[1][2]);
total+=(matriz[0][2]*matriz[1][1]*matriz[2][0])*-1 + (matriz[1][2]*matriz[2][1]*matriz[0][0])*-1 + (matriz[2][2]*matriz[0][1]*matriz[1][0])*-1;

if (total !=0)
    document.write("<br/><br/><center>el resultado del determinante es: "+ total+"</center>");
else{
    document.write("<br/>"+total+"<br/><br/> el resultado del determinante es cero")
    window.alert(" el resultado es 0");
}