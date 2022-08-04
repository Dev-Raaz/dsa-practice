/*
A  A  A
B  B  B
C  C  C
 */

const root = document.querySelector('#root');


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){

        for(j = 1; j <= N; j++){
            
            //ASCII Conversions
            let ch = String.fromCharCode('A'.charCodeAt(0) + i - 1);
            string += `${ch} `;
        }

        string += '\n';
    }
    console.log(string)
}
main();