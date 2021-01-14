// 메인 캔버스
const canvas = document.getElementById("main-canvas");
const context = canvas.getContext("2d");

canvas.offCanvas = document.createElement("canvas");
canvas.offContext = canvas.offCanvas.getContext("2d");
canvas.offCanvas.width = 88;
canvas.offCanvas.height = 88;

const imgElem = new Image();
const sunFaceArray = [];
let angle = 0;

class SunFace {
  constructor(x, y, speed) {
    this.x = x;
    this.y = y;
    this.speed = speed;
    this.draw();
  }

  draw() {
    if (this.x < -100) this.x = 512;
    context.drawImage(canvas.offCanvas, this.x, this.y);
  }
}

function render() {
  context.clearRect(0, 0, canvas.width, canvas.height);

  let sunFace;
  for (let i = 0; i < sunFaceArray.length; i++) {
    sunFace = sunFaceArray[i];
    sunFace.x -= sunFace.speed;
    sunFace.y += Math.sin((angle++ * Math.PI) / 180) * sunFace.speed;
    sunFace.draw();
  }

  requestAnimationFrame(render);
}

imgElem.src =
  "https://studiomeal.com/wp-content/themes/studiomeal/images/dot/sunface.png";
imgElem.addEventListener("load", () => {
  canvas.offContext.drawImage(imgElem, 0, 0);

  let x, y, speed;
  for (let i = 0; i < 10; i++) {
    x = Math.floor(Math.random() * canvas.width) * 0.8;
    y = Math.floor(Math.random() * canvas.height) * 0.7;
    speed = Math.floor(Math.random() * 4) + 1;
    sunFaceArray.push(new SunFace(x, y, speed));
  }
  render();
});
