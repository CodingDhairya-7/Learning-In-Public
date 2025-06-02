// import { useState, useEffect } from "react";
import fs from "fs/promises"
import Navbar from "@/Components/Navbar"

export default function Home() {
  // const [count, setCount] = useState(0)
  console.log("Hey, I am Dhairya")
  let a = fs.readFile(".gitignore")
  a.then(e=>{console.log(e)})
  return (
    <div>
      <Navbar />
      {/* I am a component and count :- {count}
      <br />
      <button onClick={() => setCount(count+1)}>Click Me</button> */}
      I am a component
    </div>
    
  );
}
