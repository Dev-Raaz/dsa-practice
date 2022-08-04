/*
Start counting from each i as long as the pattern iterations hold.
                    
1                   
2  3                
3  4  5             
4  5  6  7          
5  6  7  8  9 
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            string += `${i + j - 1} `;
        }
        string += '\n';
    }
    console.log(string)
}
main();