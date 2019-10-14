import java.util.Scanner;

/**
 * Description of class Student.
 * This class encapsulates all the Data members (all private) and the methods (all public)
 * including a public no-argument constructor to initialise the data members
 * @author (your name) 
 * @version 1.0.0
 */
public class Student
{
    // instance variables 
    private int roll;           //auto-incrementing 1, 2, 3, ...etc.
    private String stuName;     //full employee name
    private int cls;            // address of employee
    private int[] marks;          // marks in five subjects
    private char status;        // P or F for pass or failed
    private boolean deleted;    // false = student is current, true = not current

    // static variable, to be used by both static and non-static members.
    static Scanner sc = new Scanner(System.in);

    /**
     * Constructor for objects of class Employee
     */
    public Student()   // no-argument constructor
    {
        // initialise instance variables to default values
        roll = 0;
        stuName = null;
        cls = 0;
        marks = new int[5];
        status = '\u0000';
        deleted = false;
    }

    /**
     * The getData() method fills the data members of an empty Student object
     * with the values input by user.
     * @param int student index.
     * @return none.
     */
    public void getData(int i) 
    {
        roll = i+1;
        System.out.println("Roll No. : " + roll);
        System.out.print("Student Name : ");
        stuName = sc.nextLine();
        System.out.print("Class : ");
        cls = sc.nextInt();
        int total = 0;
        System.out.print("Marks in five subjects : ");
        for(int j = 0; j < 5; j++){
            marks[j] = sc.nextInt();
            total += marks[j];
        }
        sc.nextLine();  //to clear input buffer
        //deciding pass/fail status
        int count = 0;
        for(int k = 1; k < 5; k++){
            if(marks[k] >= 40) count++;
        }
        boolean pass = (marks[0] >= 40 && count >= 2 && total/5 >= 40)? true : false;
        status = pass? 'P' : 'F';
    }

    /**
     * The editData() method allows the user to modify data members of an 
     * existing Student object with the values input by user. However, the
     * roll field is made non-editable
     * @param none.
     * @return none.
     */
    public void editData()
    {
        //Roll No. is non-editable
        System.out.print("Student Name : ");
        stuName = sc.nextLine();
        System.out.print("Class : ");
        cls = sc.nextInt();
        int total = 0;
        System.out.print("Marks in five subjects : ");
        for(int j = 0; j < 5; j++){
            marks[j] = sc.nextInt();
            total += marks[j];
        }
        sc.nextLine();  //to clear input buffer
        //deciding pass/fail status
        int count = 0;
        for(int k = 1; k < 5; k++){
            if(marks[k] >= 40) count++;
        }
        boolean pass = (marks[0] >= 40 && count >= 2 && total/5 >= 40)? true : false;
        status = pass? 'P' : 'F';
    }

    /**
     * public method to extract private data member roll of an 
     * existing Student object
     * @param none.
     * @return int roll.
     * @exception none.
     */
    public int getRoll() { return roll; }

    /**
     * public method to set deleted data member to true of an 
     * existing Student object, without actually removing the object from the array
     * @param none.
     * @return none.
     * @exception none.
     */
    public void delete() { deleted = true;}

    /**
     * public method to reset deleted data member to false of an 
     * existing Student object, thus retrieving the deleted object.
     * @param none.
     * @return none.
     * @exception none.
     */
    public void restore() { deleted = false;}

    /**
     * public method to check whether an existing Student object
     * is marked deleted or not.
     * @param none.
     * @return boolean true or false.
     * @exception none.
     */
    public boolean isDeleted() { return deleted;}

    /**
     * public method to print values of existing data fields 
     * of an existing Student object in formatted tabular form using format()
     * method of java.io.PrintStream class.
     * @param none.
     * @return none.
     * @exception none.
     */
    public void displayData()
    {
        System.out.format("%1$3d  %2$-30s%3$5d", roll, stuName, cls); 
        for(int i = 0; i < 5; i++) System.out.format("%1$7d", marks[i]);
        System.out.format("%1$7c%n", status);
    }
}
