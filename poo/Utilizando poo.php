<?php
class Carro {
    public $marca;
    public $modelo;
    public $ano;
    public $revisao;
    public $n_donos;

    public function __construct($marca, $modelo, $ano, $revisao, $n_donos) {
        $this->marca = $marca;
        $this->modelo = $modelo;
        $this->ano = $ano;
        $this->revisao = $revisao;
        $this->n_donos = $n_donos;
    }
}

$carro1 = new Carro("porsche", "911", 2020, false, 3);
$carro2 = new Carro("mitsubishi", "lancer", 1945, true, 1);
$carro3 = new Carro("reliant", "robin", 1973, false, 5);
$carro4 = new Carro("honda", "nsx", 1999, true, 2);
$carro5 = new Carro("lamborghini", "murciélago", 2005, true, 2);
$carro6 = new Carro("opel", "omega", 1995, false, 1);

?>