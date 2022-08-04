/*
1  2  3  4
   2  3  4
      3  4
         4
 */



//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
   let string = ''
    for(i = 1; i <= N; i++){
      for(j = 1; j <= i - 1; j++){
         string += '  '
      }
      for(j = i; j <= N; j++){
         string += `${j} `
      }
      string += '\n';
    }

    console.log(string)
}
main();