import Rating from 'react-rating';
import './ShowLangs.css';

function ShowLangsInCourses(props) {

    const { courseName, creator, yearCreated, purpose, details, outcomes, courseDuration, tutorName, rating, image } = props.lang;

    return (
        <div className='grid grid-cols-2 mb-5 bg-[#1f1f1f] px-5 py-5 rounded-lg'>

            <div className=''>
                <div>
                    <div className='Show-Lang-In-Courses'>
                        <div>
                            <img className='w-52 h-52 hover:scale-110' src={image} alt='img' />
                        </div>

                        <div>
                            <h3 className='font-bold text-xl'>{courseName}</h3>
                            <h3 className='font-normal text-medium'>Duration : {courseDuration}</h3>
                            <h4 className='font-normal text-medium mb-2'>Tutor : {tutorName}</h4>
                            <h4 className='font-normal text-medium'>Creator : {creator}</h4>
                            <h4 className='font-normal text-medium mb-2'>Creation Year : {yearCreated}</h4>

                            <Rating
                                readonly
                                initialRating={rating}
                                emptySymbol="fa-regular fa-star text-gray-00"
                                fullSymbol="fa-solid fa-star text-[#f77000]"
                            ></Rating>
                            <br />
                            <button className='mt-1 px-7 py-1 rounded-lg bg-[#f77000] text-black font-bold text-lg hover:bg-[#c45902]'>Enroll now</button>
                        </div>
                    </div>

                    <div className='mt-5 bg-black text-gray-300 rounded-lg pl-3 py-3 mr-7 hover:scale-105'>
                        <h3 className='underline font-bold text-xl'>Outcomes from this course : </h3>
                        <h4 className='font-normal text-base mb-1 hover:font-semibold' >1. {outcomes.one.slice(0, 73)}</h4>
                        <h4 className='font-normal text-base mb-1 hover:font-semibold' >2. {outcomes.two.slice(0, 73)}</h4>
                        <h4 className='font-normal text-base mb-1 hover:font-semibold' >3. {outcomes.three.slice(0, 73)}</h4>
                        <h4 className='font-normal text-base mb-1 hover:font-semibold' >4. {outcomes.four.slice(0, 73)}</h4>
                    </div>
                </div>
            </div>

            <div className='flex items-center'>
                <div className='bg-black rounded-lg text-gray-300'>
                    <div className='mb-5 pt-5 px-5'>
                        <h3 className='underline font-bold text-xl mb-1'>Purpose of this language : </h3>
                        <p>{purpose.slice(0, 250)}</p>
                    </div>

                    <div className='px-5 pb-5'>
                        <h3 className='underline font-bold text-xl'>Details : </h3>
                        <p className=''>{details.slice(0, 500)}</p>
                    </div>
                </div>
            </div>

        </div>
    )
}

export default ShowLangsInCourses
