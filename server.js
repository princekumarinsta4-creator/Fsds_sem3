const fs = require('fs');
fs.writeFile(
    'sample.txt','welcome to full stack development',(err)=>{
        if(err){
            console.log('error creating file: ',err);
            return;
        }
        console.log('file created successfully!');
    }
);

fs.readFile('sample.txt','utf-8',(err,data) => {
    if(err){
        console.log('error in reading file',err);
        return;
    }
    console.log('file content: ',data);
}
);
fs.appendFile(
    'sample.txt','nSdmester:3',(err)=>{
      if(err){
            console.log('error updating file: ',err);
            
        }
        else{
        console.log('\n3.file updated successfully!');
    }
});
fs.unlink(
    'example.txt',(err)=>{
        if(err){
            console.error('error deleting file: ',err);
            
        }
        else{
        console.log('\n3.file deleted successfully!');
    }
});