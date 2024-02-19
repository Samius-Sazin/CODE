import React from 'react'
import { LoadData } from '../LOAD_DATA/LoadData';
import ShowLangsInCourses from '../SHOW_LANGS/ShowLangsInCourses';

function Courses() {
    const [langs] = LoadData();

    return (
        <div className='mx-20 px-10 my-5 py-5 bg-black rounded-xl'>
            {
                langs.map(lang => <ShowLangsInCourses
                    key={lang.id}
                    lang={lang}
                  />)
            }
        </div>
    )
}

export default Courses
