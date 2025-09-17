<?php
namespace POO\Aula10;
interface veiculo {
    public function mover();
}

class caroo implements veiculo {
    public function mover() {
        echo "O carro está se movendo.";
    }
}
class aviao implements veiculo {
    public function mover() {
        echo "O avião está voando.";
    }
}

$carro1 = new caroo();
$carro1->nome = "Fusca";

$carro2 = new caroo();
$carro2->nome = "Gol";

$aviao1 = new aviao();
$aviao1->nome = "Boeing";

$aviao2 = new aviao();
$aviao2->nome = "Airbus";
?>
<?php
//Crie uma interface `Forma` com o método `calcularArea()`. Implemente as classes:
// - `Quadrado` (lado),
// - `Retangulo` (base e altura),
// - `Circulo` (raio).
interface Forma {
    public function calcularArea();
}

class Quadrado implements Forma {
    private $lado;
    public function __construct($lado) {
        $this->lado = $lado;
    }
    public function calcularArea() {
        return $this->lado * $this->lado;
    }
}

class Retangulo implements Forma {
    private $base;
    private $altura;
    public function __construct($base, $altura) {
        $this->base = $base;
        $this->altura = $altura;
    }
    public function calcularArea() {
        return $this->base * $this->altura;
    }
}

class Circulo implements Forma {
    private $raio;
    public function __construct($raio) {
        $this->raio = $raio;
    }
    public function calcularArea() {
        return pi() * $this->raio * $this->raio;
    }
}
?>
<?php
// Crie uma classe pai `Animal` com o método `fazerSom()`. Implemente as classes:
// - `Cachorro` → "Au au!",
// - `Gato` → "Miau!",
// - `Vaca` → "Muuu!".

namespace POO\Aula10;
abstract class Animal {
    abstract public function fazerSom();
}

class Cachorro extends Animal {
    public function fazerSom() {
        return "Au au!";
    }
}

class Gato extends Animal {
    public function fazerSom() {
        return "Miau!";
    }
}

class Vaca extends Animal {
    public function fazerSom() {
        return "Muuu!";
    }
}
?>
<?php
// Crie uma classe abstrata `Transporte` com o método `mover()`. Implemente as classes:

// - `Carro` → "O carro está andando na estrada",
// - `Barco` → "O barco está navegando no mar",
// - `Avião` → "O avião está voando no céu".
// - `Elevador` → "O Elevador está correndo pelo no prédio".

namespace POO\Aula10;
abstract class Transporte {
    abstract public function mover();
}
class Carro extends Transporte {
    public function mover() {
        return "O carro está andando na estrada";
    }
}
class Barco extends Transporte {
    public function mover() {
        return "O barco está navegando no mar";
    }
}
class aaviao extends Transporte {
    public function mover() {
        return "O avião está voando no céu";
    }
}
class Elevador extends Transporte {
    public function mover() {
        return "O Elevador está correndo pelo no prédio";
    }
}
?>
<?php
// Crie duas classes:
// - `Email` com o método `enviar()`, que retorna "Enviando email...",
// - `Sms` com o método `enviar()`, que retorna "Enviando SMS...".
// Depois crie uma função `notificar($meio)` que aceite qualquer objeto com `enviar()` e faça a
// chamada. Teste com ambos os objetos.
namespace POO\Aula10;
class email {
    public function enviar() {
        return "enviando email...";
    }
}
class sms {
    public function enviar(){
        return "enviando sms...";
    }
}
function notificar($meio) {
    echo $meio->enviar();
}
?>
<?php
// Crie uma classe `Calculadora` com o método `somar()`.
// - Se receber 2 números, retorna a soma dos dois.
// - Se receber 3 números, retorna a soma dos três.
namespace POO\Aula10;

class calculadora {
    public function somar(...$numeros) {
        return array_sum($numeros);
    }
}
$calc = new calculadora();
echo $calc->somar(2, 3); // 5

echo $calc->somar(1, 2, 3); // 6
?>