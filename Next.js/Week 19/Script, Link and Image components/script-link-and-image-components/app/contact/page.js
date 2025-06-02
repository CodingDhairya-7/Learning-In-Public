import React from 'react'
import Script from 'next/script'

const contact = () => {
  return (
    <div>
      <Script>
        {`alert("Welcome to Contact Page !!")`}
      </Script>
      Contact Page !!
    </div>
  )
}

export default contact

export const metadata = {
  title: "Facebook - Contact Page",
  description: "This is contact page of Facebook",
};
