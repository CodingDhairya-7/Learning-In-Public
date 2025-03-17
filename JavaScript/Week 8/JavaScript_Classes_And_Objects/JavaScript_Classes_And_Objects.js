/*
let obj = {
    a: 1,
    b: "Dhairya"
}

console.log(obj);

let animal = {
    eats: true
};

let rabbit = {
    jumps: true
};

rabbit.__proto__ = animal; // sets rabit.[[Prototype]] = animal
*/

class Animal{
    constructor(name){
        this.name = name;
        console.log('Object is created !!');
    }

    eats(){
        console.log('Animal eats !!');
    }

    jumps(){
        console.log('Animal jumps !!'); 
    }
}

class Lion extends Animal{
    constructor(name){
        super(name);
        console.log('Object is created and he is a lion');
    }

    eats(){
        super.eats();
        console.log('Lion eats !!');
    }
}

let a = new Animal("Bunny");
console.log(a);

let l = new Lion("Shera");
console.log(l);

console.log(l instanceof Lion); // true
console.log(l instanceof Animal); // true
console.log(a instanceof Lion); // false

/*
class ComplexNumber{
    constructor(num1, num2){
        this._num1 = num1;
        this._num2 = num2;
    }

    display(){
        console.log(`Your complex number is :- ${this._num1} + ${this._num2}i`);
    }

    add(other){
        return new ComplexNumber(
            this._num1 + other._num1,
            this._num2 + other._num2
        );
    }
}

let user_complexno1 = new ComplexNumber(5, 7);
let user_complexno2 = new ComplexNumber(8, 9);
user_complexno1.display();
let sum = user_complexno1.add(user_complexno2);
sum.display();
*/

class Human{
    constructor(){
        console.log('Human object created !!');
    }

    Hair(){
        console.log('Humans ka upar mala khaali hai !!');
    }
}

class Student extends Human{
    constructor(){
        super();
        console.log('Student Object created !!');
    }
    Hair(){
        super.Hair();
        console.log('Student ke hairs simple hai, school ke rules ke saabse !!');
    }
}

let humObj = new Human();
humObj.Hair();
let stuObj = new Student();
stuObj.Hair();

console.log("Student instanceof Human :- ", stuObj instanceof Human);




