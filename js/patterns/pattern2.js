/*
1  1  1  1
2  2  2  2
3  3  3  3
4  4  4  4
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string =''
    
    for(i = 1; i <= N; i++){
        let row = "";
        for(j = 1; j <= N; j++){
            string += `${i} `;
        }
        string += '\n';
    }
    console.log(string);
}
main();