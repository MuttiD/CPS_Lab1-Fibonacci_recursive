# Fibonacci Numbers using Recursive Function

## Definition
In mathematics, the Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones. Individual numbers in the Fibonacci sequence are known as Fibonacci numbers, commonly denoted Fn . The sequence commonly starts from 0 and 1. Starting from 0 and 1, the first few values in the sequence are:[1]

Example of Fibonacci Sequence up to 13:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.

[Fibonacci Numbers](https://en.wikipedia.org/wiki/Fibonacci_sequence) 

A recursive function is a function that calls itself, either directly or 
indirectly. To calculate the Fibonacci numbers using a recursive function, 
we can define a function that takes an integer argument [n] and returns the [n]th 
Fibonacci number. If [n] is 0 or 1, the function simply returns [n]. 
Otherwise, it calls **itself twice** with arguments [n-1] and [n-2], and 
sums the results to get the [n]th Fibonacci number.

## The project

The task given was to generate an algorithm in C++ capable to list a Fibonacci Sequence up to a defined sequence number [n] and print it in a terminal on PC or in the LCD of the microcontroller (we used mbed LCP1768 in this case). We have chosen to print the results in the PC.

## Technologies Used

### Microcontroller
* ARM mbed LCP1768 <br />
[mbed](https://os.mbed.com/platforms/mbed-LPC1768/)

### Terminal Emulator 
* Tera Term <br />
[tera term](https://ttssh2.osdn.jp/index.html.en)

### IDE
* Keil Studio <br />
[Keil](https://www.keil.arm.com/)


## Troubleshooting

No issues presented during the compilation of the code.



## Related Links

* [Mbed OS Stats API](https://os.mbed.com/docs/latest/apis/mbed-statistics.html).
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Mbed boards](https://os.mbed.com/platforms/).

### License and contributions

The software is provided under Apache-2.0 license. Contributions to this project are accepted under the same license. Please see [CONTRIBUTING.md](./CONTRIBUTING.md) for more info.
