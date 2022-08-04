/*
1  2  3
4  5  6
7  8  9
 */

//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    let count = 1
    for(i = 1; i <= N; i++){

        for(j = 1; j <= N; j++){
            string += `${count} `;
            count++;
        }
        string += '\n';
    }
    console.log(string)
}
main();