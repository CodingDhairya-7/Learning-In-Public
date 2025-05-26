import React from 'react'
import Component1 from './Component1'

const Button = ({counts}) => {
  return (
    <div>
      <button><span><Component1 Cmp1_count={counts}/></span>I am a button</button>
    </div>
  )
}

export default Button
