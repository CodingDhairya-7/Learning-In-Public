import React, {useEffect} from 'react'

const Navbar = ({color}) => {
  useEffect(() => {
    alert("Color was changed !!")
  }, [color])

  useEffect(() => {
    alert("Hey, Welcome to my Page. This is a best one of the hooks, I've learned !!");
    return () => {
      alert("Component was unmounted.")
    }
  }, [])
  return (
    <div>
      I am a navbar of {color} color hehe ...
    </div>
  )
}

export default Navbar
