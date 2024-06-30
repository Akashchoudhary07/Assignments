import React, { useEffect, useState } from 'react'

function Searchbar() {

    const [data, setData] = useState([]);
    const [search, setSearch] = useState([]);

    const find = (e)=>{
        const str = e.target.value;
    const s = data.filter((n) => n.name.startsWith(str));
    const i = data.filter((d) => d.name.includes(str));
    setSearch(s);
    setSearch(i)
    }

    useEffect(()=>{

        fetch('https://jsonplaceholder.typicode.com/users')
        .then((res)=> {return res.json()})
        .then((a)=>{
            setData(a)
            setSearch(a)
        })
    },[])

    return (
        <div>
            <div className='container'>
                <div className='row pt-5'>
                    <div>
                        <div className='d-flex w-50 mx-auto'>
                            <input
                                type="text"
                                onChange={find}
                                className="form-control"
                                id="formGroupExampleInput"
                                placeholder="Enter name..."
                            />
                            <button className='btn btn-warning mx-3'>Search</button>
                        </div>
                        <table className="table table-light table-hover table-bordered mt-5 bg-light">
                            <thead>
                                <tr>
                                    <th scope="col">Name</th>
                                    <th scope="col">Username</th>
                                    <th scope="col">Email</th>
                                </tr>
                            </thead>
                            <tbody>
                                {search.map((v, index) => (
                                    <tr key={index}>
                                        <th scope="row">{v.name}</th>
                                        <td>{v.username}</td>
                                        <td>{v.email}</td>
                                    </tr>
                                ))}
                            </tbody>
                        </table>
                    </div>
                </div>
            </div>
        </div>
    )
}

export default Searchbar
