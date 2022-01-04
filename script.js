
let btn=document.getElementById('gbtn');
btn.addEventListener("click", function());
function getdata();
    console.log("button clicked");
    //create an XHR

}








console.log("button clicked!")
//create an XHR Object
let xhr=new XMLHtp request();
//open
xhr.open("GET","https://jsonplaceholder.typicode.com/users",true)
//sent the request
xhr.send();
//handle the response
xhr.onload=function(){
    let data=JSON.parse(this.responsedtext);
    //for(let i in data) {
        //console.log(data[i].email);
    //}
    display table(data);
}
}
function display table(data){
  let tdata=document.getElementById('tabledata');
  for(let i in data){
      let row=