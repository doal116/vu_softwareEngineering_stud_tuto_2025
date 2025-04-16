<?php
namespace AnimalKingdom {
    class Animal
    {
        public $legs;
        private $name;
        public $age;

        public function __construct($legs, $name, $age)
        {
            $this->legs = $legs;
            $this->name = $name;
            $this->age = $age;
        }
        public function eat()
        {
            echo "water";
        }
        public function getName()
        {
            return $this->name;
        }
    }
}
namespace AnimalKingdom\landKingDom {
    use AnimalKingdom\Animal;
    class Dog extends Animal
    {
        private $ears;
        public function __construct($legs, $name, $age, $ears)
        {
            $this->ears = $ears;
            parent::__construct($legs, $name, $age);
        }
        function bark()
        {
            echo "woho";
        }
        function eat()
        {
            echo "meat";
        }
        function getEars()
        {
            return $this->ears;
        }
    }
}

namespace {
    // use AnimalKingdom\Animal;
    // use AnimalKingdom\landKingDom\Dog;

    // $lion = new Animal(4, "simba", 12);
    // echo $lion->legs;
    // $dog = new Dog(4, 'rex', 5, 2);
    // echo $dog->getEars();
    // echo $dog->bark();
    // echo $dog->getName();

    echo $_SERVER['REQUEST_METHOD'];
    echo "YO";
}


?>