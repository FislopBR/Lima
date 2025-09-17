<?php
class cachorro {
    public $nome;
    public $raca;
    public $idade;
    public $cadastro;
    public $sexo;

    public function __construct($nome, $raca, $idade, $cadastro, $sexo) {
        $this->nome = $nome;
        $this->raca = $raca;
        $this->idade = $idade;
        $this->cadastro = $cadastro;
        $this->sexo = $sexo;
    }
}

 $cachorro1 = new cachorro("Rex", "Labrador", 5, true, "Macho");
 $cachorro2 = new cachorro("Bela", "Poodle", 3, false, "Fêmea");
 $cachorro3 = new cachorro("Thor", "Bulldog", 2, true, "Macho");
 $cachorro4 = new cachorro("Luna", "Beagle", 4, false, "Fêmea");
 $cachorro5 = new cachorro("Max", "Golden Retriever", 6, true, "Macho");
 $cachorro6 = new cachorro("Mia", "Shih Tzu", 1, false, "Fêmea");
 $cachorro7 = new cachorro("Rocky", "Boxer", 3, true, "Macho");
 $cachorro8 = new cachorro("Bella", "Cocker Spaniel", 2, false, "Fêmea");
 $cachorro9 = new cachorro("Charlie", "Dachshund", 4, true, "Macho");
 $cachorro10 = new cachorro("Lola", "Schnauzer", 5, false, "Fêmea");
?>

<?php
class Usuario {
    public $nome;
    public $cpf;
    public $sexo;
    public $email;
    public $estado_civil;
    public $cidade;
    public $estado;
    public $endereco;
    public $cep;

    public function __construct($nome, $cpf, $sexo, $email, $estado_civil, $cidade, $estado, $endereco, $cep) {
        $this->nome = $nome;
        $this->cpf = $cpf;
        $this->sexo = $sexo;
        $this->email = $email;
        $this->estado_civil = $estado_civil;
        $this->cidade = $cidade;
        $this->estado = $estado;
        $this->endereco = $endereco;
        $this->cep = $cep;
    }
}

$Usuario1 = new Usuario("josenildo Afonso Souza", "100.200.300-40", "masculino", "Josenildo.Souza@gmail.com", "casado", "Xique-Xique", "Bahia", "Rua da amizade, 99", "40123-96");
$Usuario2 = new Usuario("Valentina Passos Sherrer", "070.070.060-70", "feminino", "scherrer.valen@outlook.com", "divorciada", "Iracemapolis","São Paulo", "Avenida da Saudade,1942", "23456-24" );
$Usuario3 = new Usuario("Claudio Braz Nepumoceno", "575.575.242-32", "masculino", "ClaClau.nepumoceno@gmail.com", "solteiro", "Piripiri", "Piaui", "Estrada 3,33", "12345-99");
?>