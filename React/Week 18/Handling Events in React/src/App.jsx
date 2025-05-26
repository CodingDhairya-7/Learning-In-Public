import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0)
  const [name, setName] = useState("CodingDhairya-7")
  const [form, setForm] = useState({})

  const handleClick = () => {
    alert("Hey !! I am clicked ...");
  }
  const handleMouseOver = () => {
    console.log("Hey !! I am a mouse over ...");
  }
  const handleChange = (e) => {
    // setName(e.target.value)
    setForm({...form, [e.target.name]: e.target.value})
  }

  return (
    <>
      <div className="btn">
        <button onClick={handleClick}>Click Me !!</button>
      </div>
      <div className="red" onMouseOver={handleMouseOver}>
        Hello, I am a red div.
      </div>
      <input type="text" value={name} onChange={handleChange} />
      <input type="text" name="email" value={form.email?form.email:""} onChange={handleChange} />
      <input type="text" name="phone" value={form.phone?form.phone:""} onChange={handleChange} />
    </>
  )
}

export default App
