const fs=require('fs');
fs.writeFileSync('example.txt',"This is experiment 2 in FSD Workshop",'utf8');
console.log('Create file run successfully');
const data=fs.readFileSync('example.txt','utf8');
console.log('File content is:',data);
fs.appendFileSync('example.txt','\nThis is new line');
//fs.unlinkSync('new.txt');
console.log("new File deleted");
//create new Folder Beyond Syllabus
fs.mkdirSync("kdcd");
console.log("Folder Created Succesfully!!");
fs.rmdirSync("kdcd");
console.log("Folder Deleted Successfully");
if (fs.existsSync("kdcd")){
    console.log('File Exists');
}
else{
    console.log("File not found");
}