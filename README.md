# ch02-composition-relationship
## Demonstrates a composition relationship between three classes

In this example, we have three classes: **Engine**, **Car**, and **Person**. The Engine class has a method **start()** that simply outputs a message to the console indicating that the engine has started. The Car class has a private member engine of type Engine, and a method **start()** that calls the **start()** method of the engine member and then outputs a message indicating that the car has started. The Person class has a private member car of type Car, and a method **drive()** that calls the **start()** method of the car member and then outputs a message indicating that the person is driving the car.

This demonstrates a **composition relationship** between the classes, where **Person** is composed of a **Car**, which is composed of an **Engine**. The **Person** class owns a **Car** object, which owns an **Engine** object. When the **Person** object is created and its **drive()** method is called, it starts the **Car** object, which in turn starts the **Engine** object, and then outputs a message indicating that the person is driving the car.
