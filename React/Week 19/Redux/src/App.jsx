import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Navbar from './Components/Navbar'
import { useSelector, useDispatch } from 'react-redux'
import { increment, decrement, multiplyBy5, incrementByAmount } from './redux/counter/counterSlice'


function App() {
  const count = useSelector((state) => state.counter.value)
  const dispatch = useDispatch()

  return (
    <>
      <Navbar />
      <div>
        <button onClick={() => dispatch(decrement())}>-</button>
        Currently, count value :- {count}
        <button onClick={() => dispatch(incrementByAmount(6))}>+</button>
        <button onClick={() => dispatch(multiplyBy5())}>*</button>
      </div>
    </>
  )
}

export default App
