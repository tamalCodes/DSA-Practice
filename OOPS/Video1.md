<!-- what is a class in java ?  -->

# What is a class in java ?

A **class is a logical blueprint/template** from which individual objects are created. It is a collection of variables and methods. It is a user defined data type.

The `display()` method is used to display the details of the student. It is a member function of the class.

## Example

```java
public class StudentType {
    String name;
    int rollNo;
    String address;

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Address: " + address);
    }
}
```

## Understanding Objects

An object is an instance of a class. It is a physical entity. It is a real world entity. Here are the properties of an object:

- It has a **state**. It is represented by the attributes of the class. For example, the name, roll no and address of the student are the attributes of the student object.
- It has a **behavior**. It is represented by the methods of the class. For example, the `display()` method is used to display the details of the student.
- It has an **identity**. It is represented by an address. It is a `unique` identifier.

## How to use this class using object ?

We can create an object of the class and access the variables and methods of the class using the object. The `student` object is created using the `new` keyword.

The `new` keyword is used to create an object of a class. It allocates memory for the object and returns a reference to the object.

```java
public class Main {
    public static void main(String[] args) {
        StudentType student1 = new StudentType();
        student1.name = "John";
        student1.rollNo = 1;
        student1.address = "New York";

        student.display();
    }
}
```

## Understanding the `new` keyword

```java
StudentType student1
```

This runs at **compile** time. It allocates memory for the object and returns a reference to the object. The reference is stored in the `student1` variable. Compile time is the time when the code is compiled.

```java
new StudentType();
```

This runs at **runtime**. It allocates memory for the object and returns a reference to the object. The reference is stored in the `student1` variable. Runtime is the time when the code is executed.

## How to manipulate the state of an object ?

We can manipulate the state of an object by using the methods of the class. The `display()` method is used to display the details of the student. It is a member function of the class.

```java
public class StudentType {
    String name;
    int rollNo;
    String address;

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Address: " + address);
    }
}
```

# Java constructor

A constructor basically defines what will happen when your object will be created. When you don't have any constructor in your class, Java compiler creates a default constructor for you. But if you have defined a constructor in your class, then Java compiler will not create a default constructor for you.

```java
public class StudentType {
    String name;
    int rollNo;
    String address;

   StudentType() {
        this.name = "John";
        this.rollNo = 1;
        this.address = "New York";
    }
}
```

`this` keyword is used to refer to the current object. Like `StudentType student1 = new StudentType();` the `this` keyword refers to the `student1` object.

## Constructor overloading

```java

public class StudentType {
    String name;
    int rollNo;
    String address;

    public StudentType(String name, int rollNo, String address) {
        this.name = name;
        this.rollNo = rollNo;
        this.address = address;
    }

    public StudentType(String name, int rollNo) {
        this(name, rollNo, ""); // Call the three-argument constructor with empty address
    }

    public StudentType(String name) {
        this(name, 0, ""); // Call the two-argument constructor with rollNo=0 and empty address
    }

    public StudentType() {
        this("", 0, ""); // Call the three-argument constructor with empty name, rollNo=0, and empty address
    }
}

```

In this example, we have defined **four constructors** for the StudentType class with different parameter lists.

- The first constructor takes three parameters **name, rollNo, and address** and sets the corresponding instance variables.
- The second constructor takes **only name and rollNo** and sets address to an empty string.
- The third constructor takes **only name** and sets both rollNo and address to default values. The fourth constructor takes no arguments and sets all instance variables to default values.

# Pass by value, and Pass by reference in java

In Java, when passing an argument to a method, there are two ways to do it: pass by value and pass by reference.

- **Pass by value:** In Java, primitive data types such as int, float, char, etc., are passed by value. When a primitive value is passed to a method, a copy of the value is made and passed to the method. Any changes made to the parameter inside the method have no effect on the original value outside the method.

  ```java

  public static void main(String[] args) {
    int num = 10;
    increment(num);
    System.out.println(num); // Output: 10
  }
  public static void increment(int num) {
    num++;
    }
  ```

In the above example, the increment() method receives a copy of the num variable. Any changes made to the num variable inside the method are not reflected outside the method.


- **Pass by reference:** In Java, objects are passed by reference. When an object is passed to a method, a copy of the reference to the object is passed to the method, not a copy of the object itself. This means that any changes made to the object inside the method are also reflected outside the method.

```java
public static void main(String[] args) {
    StringBuilder sb = new StringBuilder("Hello");
    appendString(sb);
    System.out.println(sb); // Output: Hello, World!
}

public static void appendString(StringBuilder sb) {
    sb.append(", World!");
}

```

In the above example, the `appendString()` method receives a copy of the reference to the `sb` StringBuilder object. Any changes made to the `sb` object inside the method are also reflected outside the method.

It's important to note that in Java, although objects are passed by reference, the reference itself is passed by value. This means that if you assign a new value to the reference inside the method, it does not affect the original reference outside the method.


# Wrapper Classes

In Java, a wrapper class is a class that allows you to **use primitive data types as objects.** 

For example, you can use an `Integer` object to represent an `integer` value instead of using the primitive `int` data type. Wrapper classes are used when you need to work with **objects instead of primitives**, for example, when you want to store integer values in a collection.

Java provides the following eight wrapper classes:

- Byte - represents a byte value
- Short - represents a short value
- Integer - represents an int value
- Long - represents a long value
- Float - represents a float value
- Double - represents a double value
- Character - represents a char value
- Boolean - represents a boolean value



```java
import java.util.ArrayList;

public class WrapperExample {
    public static void main(String[] args) {
       Integer a = 10;
       Integer b = 20;

       swap(a, b);
    }
}
```

If we tried swapping with `int a` and `int b`, it would not work. Because `int` is a primitive data type and it is passed by value. So, the values of `a` and `b` will not be swapped. 

But, if we use `Integer` instead of `int`, it will work. Because `Integer` is a wrapper class and it is passed by reference. So, the values of `a` and `b` will be swapped.



# The `final` keyword

In Java, the `final` keyword is used to declare a variable, method, or class as immutable, which means it cannot be changed or modified after it has been initialized.

For example, if a variable is declared as `final`, its value cannot be altered once it has been assigned a value. Similarly, if a method is declared as `final` it cannot be overridden by any subclass. And if a class is declared as `final` it cannot be subclassed.

```java
public class FinalExample {
    public static void main(String[] args) {
        final int a = 10;
        a = 20; // Error: cannot assign a value to a final variable
    }
}
```

# Packages

In Java, a package is a way to organize related classes, interfaces, and sub-packages into a single namespace. This makes it easier to manage and reuse code, as well as avoid naming conflicts with classes from other packages.

The `java.util` package is a built-in package in Java that provides a collection of useful utility classes and interfaces. 

This package contains classes for data structures such as arrays, lists, sets, maps, and iterators, as well as classes for working with dates, times, and other common utility classes.

```java

import java.util.ArrayList;

public class MyArrayListExample {
    public static void main(String[] args) {
        // create a new ArrayList of strings
        ArrayList<String> list = new ArrayList<>();

        // add some elements to the list
        list.add("apple");
        list.add("banana");
        list.add("orange");

        // print the list
        System.out.println(list);
    }
}
```

`import java.util.*` imports all the classes in the `java.util` package. This is called a wildcard import.