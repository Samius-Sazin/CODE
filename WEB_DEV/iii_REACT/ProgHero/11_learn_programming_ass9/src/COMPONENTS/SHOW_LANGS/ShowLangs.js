import React from 'react';
import './ShowLangs.css';
import Rating from 'react-rating';

function showLangs(props) {
  const { courseName, courseDuration, tutorName, rating, image } = props.lang;

  return (
    <div className='show-lang mb-3 bg-[#1f1f1f] px-5 py-5 rounded-lg'>
      <div>
        <img className='w-52 h-52 hover:scale-110' src={image} alt='img' />
      </div>

      <div className='flex items-center'>
        <div>
          <div className='mb-5'>
            <h3 className='font-bold text-xl'>{courseName}</h3>
            <h3 className='font-semibold text-medium'>Duration : {courseDuration}</h3>
            <h4 className='font-semibold text-medium'>Tutor : {tutorName}</h4>
          </div>

          <div>
            <Rating
              readonly
              initialRating={rating}
              emptySymbol="fa-regular fa-star text-gray-00"
              fullSymbol="fa-solid fa-star text-[#f77000]"
            ></Rating>
            <br />
            <button className='mt-2 px-7 py-1 rounded-lg bg-[#f77000] text-black font-bold text-lg hover:bg-[#c45902]'>Enroll now</button>
          </div>
        </div>
      </div>
    </div>
  )
}

export default showLangs
