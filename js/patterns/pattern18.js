/*
A  B  C
B  C  D
C  D  E
 */

//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            let char = String.fromCharCode('A'.charCodeAt(0) + i + j - 2)
            string += `${char} `;
        }
        string += '\n';
    }
    console.log(string)
}
main();