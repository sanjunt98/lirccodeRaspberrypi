# lirccodeRaspberrypi
Raspberry, Smart Home Automation Control Using Lirc
The kit includes
1k resistors
40 pin Raspberry Pi connector
Bc547 Transister 
TSOP4838 IR receive And Ir Trasmitter(IR Blaster).


Decoding the IR signal
I started this project with the simple goal of wanting to turn on my heater on my way home from work so I could come home to a nice warm apartment. I have a wall mounted heater / air-conditioner with an infrared remote control. I didn't know anything about infrared, but I figured there must be a fairly easy way to capture the IR signal and play it back. I wasn't sure exactly what I needed to do this, so I did some research. I came across this wonderful video by David L. Jones. In the video, he uses a fancy oscilloscope to view the waveform produced by an infrared remote, and then analyzes it to show us how it works. Infrared turned out to be fairly simple, and the video gave me an idea of the parts I would need to get this project working.

What I got out of the video was the following:

For most products, an infrared remote is just using non-visible light to send a sequence of 1s and 0s
To capture an IR signal, you can either use a photo diode (to capture the infrared frequency), or an infrared receiver (to give you a digital 1 or 0)
Many products operate at 38 kHz and use the NEC protocol
A "carrier wave" (for our purposes) is just an infrared light turning on and off very quickly. In this case, 38,000 times a second
1s and 0s are encoded by pulsing (turning the LED on and off) at 38 kHz for a particular amount of time, pausing a particular amount, pulsing, pausing, etc. until the full signal has been sent
When there is no signal, reading the output from the infrared receiver will return a 1. When the LED is pulsing, the infrared receiver returns a 0 (this may be flipped, but for my hardware and OS, a 1 = carrier wave absent, 0 = carrier wave present)
Watch the video a few more times if it doesn't make sense, especially around the 7 minute mark. In essence, the only thing an infrared remote is doing is turning a light on and off very quickly in a particular pattern.
