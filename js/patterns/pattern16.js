/*
A  
B  C
C  D  E
D  E  F  G
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            let char = String.fromCharCode('A'.charCodeAt(0) + i + j - 2)
            string += `${char} `;
        }
        
        string += '\n';
    }

    console.log(string)
}
main();