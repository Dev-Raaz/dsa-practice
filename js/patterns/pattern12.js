/*
A  B  C
A  B  C
A  B  C
 */

//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string =''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            let char = String.fromCharCode('A'.charCodeAt(0) + j - 1)
            string += `${char} `
        }
        string += '\n';
    }
    console.log(string)
}
main();