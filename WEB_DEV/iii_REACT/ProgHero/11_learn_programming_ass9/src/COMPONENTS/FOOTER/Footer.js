import React from 'react'
import {LoadData} from '../LOAD_DATA/LoadData'
import ShowDataInChart from '../SHOW_DATA_in_CHART_for_FOOTER/ShowDataInChart';

function Footer() {
    const [langs] = LoadData();
    
    const bestLangs = langs.filter(lang => lang.demandOutOf10 > 8);

    return (
        <div className='grid grid-cols-3 gap-x-10 mx-10 bg-black px-20 py-20'>
            <div>
                <h3 className='text-[#f77000] mb-4 font font-bold text-2xl'>About</h3>
                <p className='mb-2'>Programming language is a structured set of instructions use communicate with computers, enabling developers to create software and applications by specifying tasks and operations.</p>
                <p className='mb-2'><i className="fa-solid fa-phone-volume"></i> 01700XXX001</p>
                <p><i className="fa-regular fa-envelope"></i> sain_learning@gmail.com</p>
            </div>

            <div className='border-s-2 border-gray-700'>
                <h3 className='text-[#f77000] ml-5 mb-4 font font-bold text-2xl'>Popular Courses</h3>
                <ul className='ml-10'>
                    <li className='list-disc mb-2'>{bestLangs[0]?.courseName}<br/><small>by {bestLangs[0]?.tutorName} (Rating : {bestLangs[0]?.rating}/5)</small></li>
                    <li className='list-disc mb-2'>{bestLangs[1]?.courseName}<br/><small>by {bestLangs[1]?.tutorName} (Rating : {bestLangs[1]?.rating}/5)</small></li>
                    <li className='list-disc'>{bestLangs[2]?.courseName}<br/><small>by {bestLangs[2]?.tutorName} (Rating : {bestLangs[2]?.rating}/5)</small></li>
                </ul>
            </div>

            <div className='border-s-2 border-gray-700'>
                <h3 className='text-[#f77000] ml-5 mb-4 font font-bold text-2xl'>Chart</h3>
                <div className='ml-5'><ShowDataInChart /></div>
            </div>
        </div>
    )
}

export default Footer
