import React, { useState, useEffect } from 'react';

function MyFunctionalComponent() {
  const [count, setCount] = useState(0);

  useEffect(() => {
    console.log('Component did mount or update');
    return () => {
      console.log('Component will unmount');
    };
  }, [count]); 

  console.log('render');
  
  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Click me</button>
    </div>
  );
}

export default MyFunctionalComponent;
