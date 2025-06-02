import React from 'react'
import { useSelector, useDispatch } from 'react-redux'


const Navbar = ({counter}) => {
    const count = useSelector((state) => state.counter.value)
    return (
    <div>
      Hello, I am a Navbar and count value is {count}
    </div>
  )
}

export default Navbar
