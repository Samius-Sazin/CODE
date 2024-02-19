import React from 'react';
import ShowLangs from '../SHOW_LANGS/ShowLangs';
import { LoadData } from '../LOAD_DATA/LoadData';

function Home() {
  const [langs] = LoadData();

  const bestLangs = langs.filter(lang => lang.demandOutOf10 >= 8);

  return (
    <div className='mx-20 px-10 my-5 py-5 bg-black rounded-xl'>
      <div className='mb-5'>
        <h2 className='text-3xl font-bold text-[#f77000]'>Our Popular Courses : </h2>
      </div>

      <div className='grid grid-cols-2 gap-x-3'>
        {
          bestLangs.map(lang => <ShowLangs
            key={lang.id}
            lang={lang}
          />)
        }
      </div>
    </div>
  )
}

export default Home
