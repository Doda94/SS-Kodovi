use rand::Rng; 
use std::io;

fn main() {
    let mut inputx = String::new();
    println!("{}","Unesi donju granicu: ");
    io::stdin().read_line(&mut inputx).unwrap();          
    let x: i32 = inputx.trim().parse().unwrap(); 
    println!("{}","Unesi gornju granicu: ");
    let mut inputy = String::new();
    io::stdin().read_line(&mut inputy).unwrap();          
    let y: i32 = inputy.trim().parse().unwrap(); 
    let secret_number = rand::thread_rng().gen_range(x, y+1);
    println!("{}","Pogodi broj: ");
    let mut done = 0;
    while (done!=1){
        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();          
        let mut n: i32 = input.trim().parse().unwrap(); 
        // println!("{}",n);
        // println!("{}",secret_number);
        if n==secret_number{
            done=1;
            println!("{}", "Bravo pogodio si!");
        }
        else{
            if n<secret_number{
                println!("{}","Ne, broj je premalen, pokusaj opet.");
            }
            else{
                println!("{}","Ne, broj je prevelik, pokusaj opet.");
            }
        }
    }
}
