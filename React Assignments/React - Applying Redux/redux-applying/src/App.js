import logo from './logo.svg';
import './App.css';
import '../node_modules/bootstrap/dist/css/bootstrap.css'
import Questions from './Questions';
import Searchbar from './Searchbar';
import Searchbutton from './Searchbutton';

function App() {
  return (
    <div className="App">
      <Questions/>
      <div className='text-start ps-4 bg-dark-subtle'>
        <h2><u>5. Create a Table and Search data from table using React Js?</u></h2>
        <Searchbar/>
        {/* <Searchbutton/> */}
      </div>
      
    </div>
  );
}

export default App;
