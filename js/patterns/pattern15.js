/*
A
B  B
C  C  C
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){

        for(j = 1; j <= i; j++){
            let char = String.fromCharCode('A'.charCodeAt(0) + i - 1);
            string += `${char} `;
        }

        string += '\n'
    }
    console.log(string);
}
main();