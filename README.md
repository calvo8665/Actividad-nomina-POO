Evidencia de ejecucion
---
<img width="316" height="767" alt="image" src="https://github.com/user-attachments/assets/51e023d3-6123-4e46-a7f9-56d83420576c" />

<img width="267" height="143" alt="image" src="https://github.com/user-attachments/assets/fa54198d-e325-42cb-b39d-72c5d0ae93ab" />

Tabla de datos
---
<img width="1427" height="795" alt="image" src="https://github.com/user-attachments/assets/9b58292a-eb26-4e7d-905e-65a0a2bf50db" />

Respuestas del diseño 
---
__1.¿Cuál es la clase base y por qué?__

La clase base es `Empleado` porque todos los tipos de empleados tienen cosas en común como el nombre, el salario base y el cálculo del salario.
Las demás clases heredan de ella para reutilizar esos atributos y métodos.

__2.¿Qué método se sobrescribe en las clases derivadas?__

El método que se sobrescribe es `calcularSalario()` porque cada empleado calcula el salario de forma diferente dependiendo del bono que recibe.

También se sobrescribe el método `mostrarInformacion()` para mostrar el cargo correspondiente.

__3.¿Dónde se evidencia el polimorfismo en el programa?__

El polimorfismo se ve en el vector:
std::vector<Empleado*> vectorEmpleados;
porque en ese vector se guardan empleados de diferentes tipos usando la clase base `Empleado`.

También se ve en el ciclo:
for(auto & empleado : vectorEmpleados)
ya que el programa llama el mismo método pero cada objeto responde según su tipo.

__4.¿Por qué sería menos adecuado resolver este ejercicio con muchos if o switch?__

Porque el código quedaría más largo y más desordenado.

Además, cada vez que se agregara un nuevo tipo de empleado tocaría modificar varios `if` o `switch`.

Con polimorfismo cada clase se encarga de calcular su salario y el código queda más organizado.

__Dificultad encontrada__

Una dificultad que tuve fue entender cómo funcionaba el `vector<Empleado*>`.

Al principio no entendía cómo se podían guardar objetos diferentes en el mismo vector.

La parte del código relacionada con eso fue:
std::vector<Empleado*> vectorEmpleados;

Después de revisar el ejemplo de figuras geométricas entendí que las clases hijas pueden usarse como tipo `Empleado` porque heredan de esa clase.

También entendí mejor cómo funciona el polimorfismo cuando se recorren los empleados en el `for`.

__Uso de IA__
Se utilizó inteligencia artificial como apoyo para comprender mejor algunos conceptos del ejercicio y organizar partes de la documentación.
Asi mismo para la realizacion de la tabla de datos 
