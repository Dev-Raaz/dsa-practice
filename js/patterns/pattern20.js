/*
*  *  *  *
*  *  *
*  *
*
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));

    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N - i + 1; j++){
            string += `*  `;
        }
        string += '\n';
    }

    console.log(string);
}
main();