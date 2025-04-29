import React from 'react'
import { useSelector } from 'react-redux'

export default function Count() {
    const count = useSelector(state => state.counter.value);

    return (
        <div className='bg-slate-400 px-10 py-5 rounded-lg'>
            <div>
                COUNT in COUNT Component -- {count}
            </div>

        </div>
    )
}
