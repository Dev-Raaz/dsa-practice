/*
                    i
                    
1                   1->1s
2  2                2->2s
3  3  3             3->3s
4  4  4  4          4->4s
5  5  5  5  5       5->5s
 */


//Main Function
const main = ()=>{
    let i, j;
    const N = Number(window.prompt('Enter your rows'));
    let string = ''
    for(i=1; i <= N; i++){
        for(j = 1; j <= i; j++){
            string += `${i} `;
        }

        string += '\n';
    }
    console.log(string)
}
main();