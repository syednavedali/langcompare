use std::time::Instant;

fn main() {
    let n = 1_000_000_000;
    let mut sum: i64 = 0;
    let start_time = Instant::now();
    for i in 1..=n {
        sum += i;
    }
    let elapsed = start_time.elapsed();
    println!("Sum: {}", sum);
    println!("Time taken: {:.9}s", elapsed.as_secs_f64());
}