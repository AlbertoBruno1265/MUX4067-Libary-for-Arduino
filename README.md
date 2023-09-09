# MUX4067 Library for Arduino
## Abstract
A library to simplify the use of multiplexer HC4067 in MCUs

## Operation
The MUX 4067 has sixteen channels (c0 to c15), that can be setting as input or output.

To access a specific channel, it is necessary to pass the corresponding binary code in S0, S1, S2 and S3 pins (check the truth table below).

The SIG pin is used to send or receive the state of channel.

![Truth Table](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/Truth%20Table/Truth_Table.png)

You can access more specifications by clicking [here](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/DataSheet/cd74hc4067.pdf)

## Eletric Circuit
![Eletric Circuit](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/Electric%20Circuit/Eletric%20Circuit.png)

## Methods
| **Method**           | **Description**                                                                     | **Args**                                                                                                                                     |
| :----------------------------------------- | :------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------- |
| all_channels_value | Read all channels and save the value on an array | None
| C0(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 0 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C1(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 1 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C2(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 2 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C3(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 3 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C4(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 4 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C5(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 5 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C6(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 6 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C7(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 7 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C8(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 8 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C9(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 9 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C10(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 10 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C11(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 11 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C12(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 12 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C13(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 13 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C14(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 14 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output
| C15(bool sig_state=LOW, int sig_pwm=0) | Changes to Channel 15 | **sig_state**: A boolean value to set the output, **sig_pwm**: An integer number to represents PWM value in output

## How to install the library
**1 - Click on "Code"**

![1 - Click on Code.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/1%20-%20Click%20on%20Code.png)

**2 - Click on "Download ZIP"**

![2 - Click on Download ZIP.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/2%20-%20Click%20on%20Download%20ZIP.png)

**3 - Open Arduino IDE**

![3 - Open Arduino IDE.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/3%20-%20Open%20Arduino%20IDE.png)

**4 - Go to "Sketch"**

![4 - Go to Sketch.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/4%20-%20Go%20to%20Sketch.png)

**5 - Click on "Include Library"**

![5 - Click on Include Library.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/5%20-%20Click%20on%20Include%20Library.png)

**6 - Click on "Add .ZIP Library"**

![6 - Click on Add .ZIP Library.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/6%20-%20Click%20on%20Add%20.ZIP%20Library.png)

**7 - Click on "Downloads"**

![7 - Click on Downloads.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/7%20-%20Click%20on%20Downloads.png)

**8 - Select .ZIP Library**

![8 - Select .ZIP Library.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/8%20-%20Select%20.ZIP%20Library.png)

**9 - Success**

![9 - Success.png](https://github.com/AlbertoBruno1265/MUX4067-Libary-for-Arduino/blob/main/docs/How%20to%20Install/9%20-%20Success.png)

## My LinkedIn
Click [here](https://www.linkedin.com/in/alberto-bruno-silvestre-de-oliveira-b7a010259/) to acesse my LinkedIn
