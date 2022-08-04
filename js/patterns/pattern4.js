/*
4  3  2  1
4  3  2  1
4  3  2  1
4  3  2  1
 */

//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            string += `${N - j + 1} `;            
        }

        string += '\n';
    }
    console.log(string)
}
main();