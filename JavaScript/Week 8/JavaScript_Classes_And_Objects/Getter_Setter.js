class User{
    constructor(name) {
        // invokes the setter
        this.name = name;
    }
    
    set name(value){
        if(value.length < 4){
            alert("Name is too short . . .");
            return;
        }
        this._name = value;
    }

    get name(){
        return this._name;
    }
}

// let user = new User("Sam"); //It will show alert
let user = new User("John");
console.log(user.name);

