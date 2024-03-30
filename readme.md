# ANALOG:
* we use A before the number for mentioning the ANALOG on the arduino board
* we use the func AnalogWrite()
* we use this to customize the voltage we want which isn't possible with the digital as it only have HIGH & LOW voltages
* value between 0 - 255 
* 255 = 5v
* if we want 2.5v we can use 255/2 = 128 or so
* if we want 20% of 5v we can do 255 255 * 0.2 = 51 for 1v which is dimmer light
* how it works in reality is that the arduino flip at a very high speed (milisenconds) between the 5v and 0v depends on what value we input e.g. if we put 128 which is half it will flip at same rate between 5v and 0v.. if we use 1v or aka 255/5 in binary it will turn off more than on so it will look more dim light for us


# DIGITAL:
*  on the arudion it either start with D or just a number while analog always start with A before the number
* we use the func DigitalWrite()
* HIGH = 5v - LOW=0v - fixed we can't play with it as it's fixed
* the ~ symbol near the number in digital means PWM which lets you use pulse-width modulation same as with analog number and by using analogWrite() - if use digitalWrite() we can only use HIGH or LOW as the second parameter
