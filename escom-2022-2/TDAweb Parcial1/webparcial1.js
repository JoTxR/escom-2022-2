function algo(canvasId){
    var canvas = document.getElementById(canvasId);
    var ctx = canvas.getContext("2d");
    var w = canvas.width, h = canvas.height;
    var x = 0., y = 0., xw = 0., yw = 0., r;
    function aleatorio(max) {
        return Math.floor(Math.random() * max)
    }

    var n = window.prompt("dame un valor:");

    for (var i = 0; i < n; i++) {
	r = aleatorio(100);
        if (r <= 1) {
            xw = 0;
            yw = 0.16*y;
        } else if (r <= 8) {
            xw = 0.2*x - 0.26*y;
            yw = 0.23*x + 0.22*y + 1.6;
        } else if (r <= 15) {
            xw = -0.15 * x + 0.28 * y;
            yw = 0.26 * x + 0.24 * y + 0.44;
        } else {
            xw = 0.85 * x + 0.04 * y;
            yw = -0.04 * x + 0.85 * y + 1.6;
        }
        x = xw;
        y = yw;
        ctx.fillStyle = "color"; // Por ejemplo, el color es dado por el usuario.
        ctx.fillRect(x * 50 + 260, -y * 50 + 540, 1, 1);
    }
}