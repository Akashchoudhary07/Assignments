import React from 'react';

class MyClassComponent extends React.Component {
  constructor(props) {
    super(props);
    this.state = { count: 0 };
    console.log('Constructor');
  }

  static getDerivedStateFromProps() {
    console.log('getDerivedStateFromProps');
    return null; 
  }

  componentDidMount() {
    console.log('componentDidMount');
  }

  shouldComponentUpdate() {
    console.log('shouldComponentUpdate');
    return true; 
  }

  getSnapshotBeforeUpdate() {
    console.log('getSnapshotBeforeUpdate');
    return null; 
  }

  componentDidUpdate() {
    console.log('componentDidUpdate');
  }

  componentWillUnmount() {
    console.log('componentWillUnmount');
  }

  handleClick = () => {
    this.setState({ count: this.state.count + 1 });
  }

  render() {
    console.log('render');
    return (
      <div>
        <p>You clicked {this.state.count} times</p>
        <button onClick={this.handleClick}>Click me</button>
      </div>
    );
  }
}

export default MyClassComponent;
