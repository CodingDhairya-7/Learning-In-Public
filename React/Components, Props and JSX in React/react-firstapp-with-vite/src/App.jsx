// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
// import './App.css'

import Card from "./Components/Card";
import Footer from "./Components/Footer";
import Navbar from "./Components/Navbar";

function App() {

  return (
    <>
      <Navbar />
      <div className="cards">
        <Card title="Card 1" desc="Card 1 Description" />
        <Card title="Card 2" desc="Card 2 Description" />
        <Card title="Card 3" desc="Card 3 Description" />
        <Card title="Card 4" desc="Card 4 Description" />
      </div>
      <Footer />
    </>
  )
}

export default App
