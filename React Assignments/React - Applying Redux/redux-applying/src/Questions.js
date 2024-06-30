import React from 'react'

function Questions() {
  return (
    <div>
      <div>
      <h1>React-Applying Redux</h1>
      </div>
      <div className='text-start bg-body-tertiary ps-4'>
        <h2><u>1. What is Redux?</u></h2>
    <p className='col-xl-8'>Redux is a popular state management library for JavaScript applications, most commonly used with React but also compatible with other frameworks and plain JavaScript. It provides a predictable way to manage state by using a single source of truth (the store), strict rules for updating the state (actions and reducers), and a straightforward way to track state changes (subscribers).</p>
    <h4>Core Concepts:</h4>
    <ul>
        <li>
            <strong>Store:</strong> The single source of truth holding the entire state of the app.
        </li>
        <li>
            <strong>State:</strong> Data representing the current state of the application.
        </li>
        <li>
            <strong>Actions:</strong> Plain objects representing an intention to change the state, each with a <code>type</code> property.
        </li>
        <li>
            <strong>Reducers:</strong> Pure functions that take the current state and an action, returning a new state.
        </li>
        <li>
            <strong>Dispatch:</strong> Method to send actions to the store.
        </li>
        <li>
            <strong>Selectors:</strong> Functions to extract specific pieces of state from the store.
        </li>
    </ul>
      </div>
      <br></br>
      <div className='text-start bg-body-tertiary ps-4'>
      <h2><u>2. What is Redux Thunk used for?</u></h2>
      <p className='col-xl-8'>Redux Thunk is a middleware for Redux that allows you to write action creators that return a function instead of an action object. This function receives the store's dispatch method as its argument, which can be used to dispatch actions asynchronously, perform side effects like API calls, and then dispatch regular synchronous actions once the asynchronous operations have completed.</p>
      <h4>Main Purpose of Redux Thunk:</h4>
      <ul className='col-xl-8'>
      <li>
            <strong>Handling Asynchronous Actions:</strong> Redux Thunk enables you to handle asynchronous logic in your Redux actions. This includes making asynchronous API calls, fetching data, and then dispatching actions based on the results of those asynchronous operations.
        </li>
        <li>
            <strong>Delayed Actions:</strong> Thunk middleware allows you to delay the dispatch of an action, which is useful for scenarios where you need to wait for a certain condition to be met before dispatching another action.
        </li>
        <li>
            <strong>Side Effects:
            </strong> You can perform side effects such as logging, routing, and interacting with the browser's localStorage or sessionStorage using Thunk middleware.
        </li>
      </ul>
      </div>

      <div className='text-start bg-body-tertiary ps-4'>
        <h2><u>3. What is Pure Component? When to use Pure Component over Component?</u></h2>
        <p><h4>Pure Component :-</h4></p>
        <p className='col-xl-8'>A Pure Component in React is a class component that extends React.PureComponent rather than React.Component. The main difference between a Pure Component and a regular Component (React.Component) lies in how they handle updates and rendering.</p>
        <p><h4>When to use Pure Component over Component:-</h4></p>
        <ul className='col-xl-8'>
            <li><strong>Prop-Driven Rendering:</strong>If your component relies heavily on props and most of its rendering logic is determined by prop changes, using a Pure Component can prevent unnecessary re-renders when props remain the same.</li>
            <li><strong>Performance Critical Components:</strong>In scenarios where rendering performance is critical, such as large lists, tables, or components with complex rendering logic, Pure Components can significantly reduce the number of re-renders and improve overall application performance.</li>
        </ul>
      </div>
      <div className='text-start bg-body-tertiary ps-4'>
            <h2><u>4. What is the second argument that can optionally be passed tosetState and what is its purpose?</u></h2>
            <p className='col-xl-8'>In React, when using setState to update the state of a component, the second argument that can optionally be passed is a callback function. This callback function is invoked once setState has been successfully executed and the component has been re-rendered.</p>
            <p><h4>Purpose of the Callback Function:-</h4></p>
        <ul className='col-xl-8'>
            <li><strong>1. Execution After State Update:</strong>The callback function passed as the second argument to setState is executed immediately after the state has been updated and the component has been re-rendered. This ensures that any code dependent on the updated state or the UI after the state change can be safely executed.</li>
            <li><strong>2. Access to Updated State:</strong>Inside the callback function, you have access to the updated state and props of the component. This is useful when you need to perform additional logic or trigger further actions based on the updated state.</li>
        </ul>
        </div>


    </div>
  )
}

export default Questions
