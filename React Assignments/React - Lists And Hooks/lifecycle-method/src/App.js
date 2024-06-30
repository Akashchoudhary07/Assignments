import logo from './logo.svg';
import './App.css';
import MyClassComponent from './ClasscomponentHook';
import MyFunctionalComponent from './FunctionalcomponentHook';

function App() {
  return (
    <div className="App">
      <div>
      <br></br><br></br>
        <h1>Life cycle in Functional Component with Hooks</h1>
        <MyFunctionalComponent/>
        <br></br><br></br><br></br><br></br>
        <hr></hr>
      </div>
      <div>
      <br></br><br></br>
        <h1>Life cycle in class Component with Hooks</h1>
        <MyClassComponent/>        
      </div>
      
    </div>
  );
}

export default App;
