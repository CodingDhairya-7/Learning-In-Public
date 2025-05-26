import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import { useForm } from "react-hook-form"
import { createLogger } from 'vite'


function App() {
  const [count, setCount] = useState(0)
  const {
    register,
    handleSubmit,
    watch,
    formState: { errors, isSubmitting },
  } = useForm();

  const delay = (d) =>{
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve()
      }, d * 1000);
    })
  }
  const onSubmit = async (data) => {
    await delay(4)
    console.log(data)
  }

  return (
    <>
      {isSubmitting && <div>Loading...</div>}
      <div className="container">
        <form action="" onSubmit={handleSubmit(onSubmit)}>
          <input {...register("username", {required: {value: true, message: "This field is required."}, minLength: {value: 3, message: "Min. Length is 3"}, maxLength:{value: 8, message: "Max. Length is 8"}})} type="text" placeholder='Enter your Username' />
          {errors.username && <div className='red'>{errors.username.message}</div>}
          <br />
          <input {...register("password")} type="password" placeholder='Enter your Password' />
          <br />
          <input disabled={isSubmitting} type="submit" value="Submit" />
        </form>
      </div>
    </>
  )
}

export default App
