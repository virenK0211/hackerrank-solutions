i dont know what the question actually meant. It was less classes and instances and more of \n !!

challenege=https://www.hackerrank.com/challenges/30-class-vs-instance/problem

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
if(initialAge<0)
{
    age=0;
    cout<<"Age is not valid, setting age to 0.\n";
}
        else
        age=initialAge;
        
    }

    void Person::amIOld(){
       if(age<13)
           cout<<"You are young.\n";
        else if(age>=13&&age<18)
            cout<<"You are a teenager.\n";
        else cout<<"You are old.\n";

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
    }
