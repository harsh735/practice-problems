/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let x = s.trim();
    let len = 0;
    for(let i =0; i < x.length; i++){
        if(x[i] === " "){
            len = 0;
        }
        else {
            len++;   
        }
    }
    return len;
    

};