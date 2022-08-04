/*
1  1  1  1
   2  2  2
      3  3
         4
 */

//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));

    let string = ''
    for(i = 1; i <= N; i++){
      for(j = 1; j <= i - 1; j++){
         string += '  ';
      }

      for(j = 1; j <= N - i + 1; j++){
         string  += `${i}&nbsp; `;
      }

      string += '\n';
    }

    console.log(string)

}
main();