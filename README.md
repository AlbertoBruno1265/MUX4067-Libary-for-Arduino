# MUX4067 Libary for Arduino
## Abstract
A library to simplify the use of multiplexer HC4067 in MCUs

## Operation
The MUX 4067 has sixteen channels (c0 to c15), that can be setting as input or output.
To access a specific channel, it is necessary to pass the corresponding binary code in S0, S1, S2 and S3 pins (check the truth table below).
The SIG pin is used to send or receive the state of channel.
