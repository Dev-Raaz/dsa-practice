/*
Start counting down from each i as long as the pattern iterations hold.
                    
1                   
2  1                
3  2  1             
4  3  2  1          
5  4  3  2  1
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i = 1; i <= N; i++){
        for(j = i; j >= 1; j--){
            string += `${j} `;
        }
        string += '\n';
    }
    console.log(string)
}
main();