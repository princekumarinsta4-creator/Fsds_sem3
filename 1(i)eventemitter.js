const EventEmitter = require('events'); //importing EventEmitter class from events module

const myEmitter = new EventEmitter(); //object of EventEmitter class
myEmitter.on('greet', (name) => {     //event listener for greet event
    console.log(`Hello, ${name}! Welcome To Node.js.`);   // display greeting message with name parameter
});

myEmitter.on('exit', () => { // event listener for exit event
    console.log("Exiting the program. Goodbye!"); //display exit message
    }); 
    myEmitter.emit('greet', '2nd Year Student');  //emit greet event with name parameter
    myEmitter.emit('exit');                // emit exit event