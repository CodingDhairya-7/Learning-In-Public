let button = document.getElementById("btn");

button.addEventListener("click", ()=>{
    // alert("I was clicked. Yeyy !!");
    document.querySelector(".box").innerHTML = "<b>Yayy, you were clicked</b> Enjoy your click!!";
})

button.addEventListener("contextmenu", ()=>{
    alert("Don't hack us by right click. Please !!");
})

button.addEventListener("keydown", (e)=>{
    console.log(e);
    console.log(e.key);
    console.log(e.code);
})

