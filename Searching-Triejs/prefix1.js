var http=require('http');
var fs=require('fs');
var url=require('url');
var trie=require('triejs');
var server=http.createServer(function(req,res){
  
 current_url = url.parse(req.url).pathname;


if(current_url == '/') {
        fs.readFile('./prefix1.html', 'utf8', function (errors, contents) {
            res.end(contents); 
        });
    } 
 
        
   
 

}).listen(8092);

var tri=new trie();

var arr=['abhi','abhishek','romit','karan','katty','vinny','vinay','devesh'];
for(var i=0;i<8;i++){
tri.add(arr[i]);
}




var io=require('socket.io').listen(server);
 io.set('log level', 1); 
io.sockets.on('connection',function(socket){

  socket.on('message_to_server',function(data){
    var ans=tri.find(data);

   io.sockets.emit('message_to_client', ans );
});

});



