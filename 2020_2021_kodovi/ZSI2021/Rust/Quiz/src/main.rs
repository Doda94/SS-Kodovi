use std::fs;
use std::io;
use std::env;
use serde::Deserialize;
use rand::thread_rng;
use rand::seq::SliceRandom;

#[derive(Debug,Deserialize)]
struct Pitanje {
    tekst_pitanja: String,
    odgovori: [String; 4],
    tocan: String,
}

#[derive(Debug,Deserialize)]
struct Kviz {
    pitanja: Vec<Pitanje>
}

fn main(){
    let args: Vec<String> = env::args().collect();
    let tip = &args[1];
    let filename = &args[2];
    if(tip=="quiz"){
       let mut file_location = String::from("/mnt/c/Users/marko/desktop/Rust/Quiz/");
        file_location.push_str(filename);
        // println!("{:?}", args);
        let file = fs::read_to_string(file_location).expect("Nema datoteke!");
        let file_as_string = file.as_str();
        let mut kviz: Kviz = serde_json::from_str(file_as_string).expect("JSON was not well-formatted");
        // println!("{:?}", kviz.pitanja);

        let mut rng = thread_rng();
        // println!("Unshuffled: {:?}",kviz.pitanja);
        kviz.pitanja.shuffle(&mut rng);
        // println!("Shuffled: {:?}",kviz.pitanja);

        let mut br = 0;
        for (i, pitanje) in kviz.pitanja.iter_mut().enumerate() {
            println!("{}", pitanje.tekst_pitanja);
            pitanje.odgovori.shuffle(&mut rng);
            for (j,odgovor) in pitanje.odgovori.iter().enumerate(){
                println!("-{}", odgovor);
            }
            println!("Unesi odgovor:");
            let mut input = String::new();                        
            io::stdin().read_line(&mut input).unwrap();  
            if input.trim()==pitanje.tocan{
                br+=1;
            }         
            // println!("Tocno:{}",pitanje.tocan);
            // println!("Input:{}",input);
        }

        println!("Broj tocnih odgovora: {}",br);
    }
}
