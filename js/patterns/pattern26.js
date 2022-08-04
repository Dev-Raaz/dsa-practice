/*
      1      
   1  2  1   
1  2  3  2  1
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N - i; j++){
            string += '  '
        }
        for(j = 1; j<=i; j++){
            string += `${j} `
        }

        for(j = j-2; j >= 1; j--){
            string += `${j} `
        }

        string += '\n'
    }

    console.log(string)


}
main();