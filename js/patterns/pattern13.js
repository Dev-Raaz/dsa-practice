/*
A  B  C
D  E  F
G  H  I
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    let char = 'A';

    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){

            string += `${char} `;
            char = String.fromCharCode(char.charCodeAt(0) + 1)
        }
        string += '\n'
    }
    console.log(string)
}
main();