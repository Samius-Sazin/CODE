//final keyrd, Static final keyword
//final variable value can be change after initialze,
//to initialize final variable value later must use constructor
//to initialize later static final variable must use static block

//Final mehod can accessible by child class
//But final method can not be overriden
//we can not inherit final class

class student{
    //FINAL VARIABLE
    final int NUM_1 = 10; //ok

    //blank final variable
    //to initialize later, must use constructor
    final int NUM_2;
    student() {
        NUM_2 = 50;
    }



    //STATIC FINAL VARIABLE
    static final int NUM_3 = 5;//ok

    //BLANK STATIC FINAL VARIABLE
    //to initialize later, must use static block
    static final int NUM_4;
    static{
        NUM_4 = 6;
    }
}