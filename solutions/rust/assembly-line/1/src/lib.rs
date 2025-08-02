// This stub file contains items which aren't used yet; feel free to remove this module attribute
// to enable stricter warnings.
#![allow(unused)]

pub fn production_rate_per_hour(speed: u8) -> f64 {
    
    if speed<=4{
        let temp_speed = speed as f64;
        return temp_speed*221.0;
    }
    else if speed>4 && speed<=8 {
        let temp_speed = speed as f64;
        return  temp_speed*221.0*0.9; }
    else{
        let temp_speed = speed as f64;
        return temp_speed*221.0*0.77;}
}

pub fn working_items_per_minute(speed: u8) -> u32 {
    let cars = production_rate_per_hour(speed) as u32;
    return cars/60;
    
}
