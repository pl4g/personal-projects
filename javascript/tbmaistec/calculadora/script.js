function calcularResultado(x, y, operador) {
  let result = 0;

  console.log(x);
  console.log(y);
  console.log(operador);

  switch (operador) {
    case "+":
      result = x + y;
      break;
    case "-":
      result = x - y;
      break;
    case "*":
      result = x * y;
      break;
    case "**":
      result = x ** y;
      break;
    case "/":
      result = x / y;
      break;
    case "%":
      result = x % y;
      break;
    default:
      break;
  }

  document.querySelector("#resultado").value = result;
}
