import React from 'react'
import './Card.css'
const Card = (props) => {
  return (
    <div className='card'>
        <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSRwnwn3HN6kUbTjupVg-zQXldWieHq439MLw&s" alt="" width="304vw" height="252vh" style={{border: "2px solid pink"}}/>
        <h1>{props.title}</h1>
        <p>{props.desc}</p>
    </div>
  )
}

export default Card
