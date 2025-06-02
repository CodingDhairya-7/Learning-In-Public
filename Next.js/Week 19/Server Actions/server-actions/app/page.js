"use client"
import { submitAction } from "@/action/form"
import { useRef } from "react";

export default function Home() {
  let ref = useRef()
  return (
    <div className="w-2/3 mx-auto my-12">
      <form ref={ref} action={(e)=> {submitAction(e); ref.current.reset}}>
        <div>
          <label htmlFor="name">Name</label>
          <input type="text" className="text-black bg-white mx-4" id="name" name="name" />
        </div>
        <div>
          <label htmlFor="add">Address</label>
          <input type="text" className="text-black bg-white mx-4" id="add" name="add" />
        </div>
        <div>
          <button className="border border-white px-3" type="submit">Submit</button>
        </div>
      </form>
    </div>
  );
}
