/*
Dabang pattern
-----------------
1  2  3  4  5  5  4  3  2  1
1  2  3  4  *  *  4  3  2  1
1  2  3  *  *  *  *  3  2  1
1  2  *  *  *  *  *  *  2  1
1  *  *  *  *  *  *  *  *  1
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){

        for(j = 1; j<= N - i + 1; j++){
            string += `${j} `
        }

        for(j = 1; j <= 2* (i -1); j++){
            string += '* '
        }

        for(j = N - i + 1; j >= 1; j--){
            string += `${j} `
        }
        string += '\n'
    }

    console.log(string)
}
main();