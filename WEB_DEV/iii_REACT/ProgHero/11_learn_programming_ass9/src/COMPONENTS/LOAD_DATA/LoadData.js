import { useEffect, useState } from 'react';



//Lang = language
//Function that fetch data from programmingLang.json file
function LoadData() {
    const [langs, setLangs] = useState([]);

    useEffect(() => {
        fetch('/programmingLang.json')
        .then(res => res.json())
        .then(data => setLangs(data));
    }, [])

    return [langs, setLangs];
}

export {LoadData};
