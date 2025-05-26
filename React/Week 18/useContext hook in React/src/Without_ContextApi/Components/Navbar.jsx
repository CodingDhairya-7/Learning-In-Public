import React from 'react'
import Button from './Button'
const Navbar = ({counter}) => {
    return (
        <>
            <div>
                Navbar
            </div>
            <Button counts={counter}/>
        </>
    )
}

export default Navbar
