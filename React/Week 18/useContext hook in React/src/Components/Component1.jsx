import React, {useContext} from 'react'
import { counterContext } from '../Context/context'

const Component1 = ({Cmp1_count}) => {
    const value = useContext(counterContext)
    return (
    <div>
        {value.count}
    </div>
  )
}

export default Component1
