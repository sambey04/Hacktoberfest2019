import java.util.Scanner;
/**
 * This is the Main class that contains the main() method for the project.
 * @author (your name) 
 * @version 1.0.0
 */
public class Main
{
    /**
     * This is the main method which makes use of class Student and its methods.
     * @param args Unused.
     * @return Nothing.
     */
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of Students : ");
        int n = sc.nextInt();
        Student[] arr = new Student[n];   //create an array of Student objects
        //all cells initialised to null
        int numRec = 0; // number of employee records in the array
        int choice = 0;
        boolean found = false;
        int roll = 0;
        // menu - there are 8 menu items, the last being "Exit Program"
        while (choice < 8){
            System.out.print("\f"); // clears screen
            System.out.println("\tMain Menu");
            System.out.println("1. Add Student Records.");
            System.out.println("2. Search Student Record.");
            System.out.println("3. Edit Existing Student Record.");
            System.out.println("4. Delete Student Record.");
            System.out.println("5. Print All Existing Student Records.");
            System.out.println("6. Display Deleted Records Only.");
            System.out.println("7. Restore a Deleted Record.");
            System.out.println("8. Exit Program.");
            do {
                System.out.print("Enter your choice (1-8) : ");
                choice = sc.nextInt();
                sc.nextLine();
            } while ((choice < 1 || choice > 8) && 
            System.out.printf("Invalid Choice. Try again ...%n") != null);

            switch(choice){
                case 1:             //if user chooses first choice Add New Record
                for(int i = 0; i < n; i++){
                    Student s = new Student();    //create a new Student object
                    s.getData(i);                    //fill the object with data
                    arr[i] = s;              //object is inserted into the Employee array
                    numRec++;
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 2:                         //if user chooses second choice Search
                if(numRec == 0) {
                    System.out.println("No Record in data base");
                    System.out.print("Press ENTER to proceed... ");
                    sc.nextLine();  // just to hold the screen and to absorb ENTER
                    break;
                }
                System.out.print("Enter Student Roll : ");   //to search by Roll
                roll = sc.nextInt();
                sc.nextLine();
                found = false;  //initially set to false because search has not yet started.
                for (int i = 0; !found && i < numRec; i++){
                    if(roll == arr[i].getRoll()){   //found
                        if(arr[i].isDeleted()){ //deleted field of the record is set
                            System.out.println("This Record has been deleted.");
                        }
                        else {
                            System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                            arr[i].displayData();
                        }
                        found = true;
                    }
                }
                if (!found){
                    System.out.println("Student Not Found : ");
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 3:                         //if user chooses edit
                if(numRec == 0) {
                    System.out.println("No Record in data base");
                    System.out.print("Press ENTER to proceed... ");
                    sc.nextLine();  // just to hold the screen and to absorb ENTER
                    break;
                }
                System.out.print("Enter Student Roll : ");   //to search by Roll
                roll = sc.nextInt();
                sc.nextLine();
                found = false;  //initially set to false because search has not yet started.
                for (int i = 0; !found && i < numRec; i++){
                    if(roll == arr[i].getRoll()){   //found
                        if(arr[i].isDeleted()){ //deleted field of the record is set
                            System.out.println("This Record has been deleted.");
                        }
                        else {
                            System.out.println("Present values of this record are:");
                            System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                            arr[i].displayData();
                            System.out.println("Enter new values:");
                            System.out.println("Student ID : " + roll + "\t\tNot Editable");
                            arr[i].editData();
                        }
                        found = true;
                    }
                }
                if (!found){
                    System.out.println("Student Not Found : ");
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 4:         //if user chooses to delete a record
                System.out.print("Enter Student Roll : ");   //to search by Roll
                roll = sc.nextInt();
                sc.nextLine();
                found = false;
                for (int i = 0; i < numRec; i++){
                    if(roll == arr[i].getRoll()){   //found
                        arr[i].displayData();   //the record is first displayed before deletion
                        arr[i].delete();        //the record is actually not deleted, but the
                        //deleted field is set. It can be retrieved any time
                        System.out.println("Student record has been deleted");
                        found = true;
                    }
                }
                if (!found){
                    System.out.println("Student Not Found : ");
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 5:     //Printing Existing Students Records
                if(numRec == 0) {
                    System.out.println("No Record in data base");
                    System.out.print("Press ENTER to proceed... ");
                    sc.nextLine();  // just to hold the screen and to absorb ENTER
                    break;
                }
                System.out.println("\nTable of All Existing Students:\n");
                // printing Formatted Table Header
                System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                //Printing actual records in tabular form
                for (int i = 0; i < numRec; i++){
                    if(!arr[i].isDeleted()){
                        arr[i].displayData();
                    }
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 6:     //Printing Deleted Employees Records
                if(numRec == 0) {
                    System.out.println("No Record in data base");
                    System.out.print("Press ENTER to proceed... ");
                    sc.nextLine();  // just to hold the screen and to absorb ENTER
                    break;
                }
                System.out.println("\nTable of All Deleted Students:\n");
                // printing Formatted Table Header
                System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                //Printing actual records in tabular form
                for (int i = 0; i < numRec; i++){
                    if(arr[i].isDeleted()){
                        arr[i].displayData();
                    }
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;

                case 7:                         //Restoring a deleted record
                if(numRec == 0) {
                    System.out.println("No Record in data base");
                    System.out.print("Press ENTER to proceed... ");
                    sc.nextLine();  // just to hold the screen and to absorb ENTER
                    break;
                }
                System.out.print("Enter Deleted Student Roll : ");   //to search by Roll
                roll = sc.nextInt();
                sc.nextLine();
                found = false;  //initially set to false because search has not yet started.
                for (int i = 0; !found && i < numRec; i++){
                    if(roll == arr[i].getRoll()){   //found
                        if(!arr[i].isDeleted()){ //deleted field of the record is not set
                            System.out.println("This Record is a valid record, not deleted.");
                            System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                            arr[i].displayData();
                        }
                        else {
                            arr[i].restore();
                            System.out.println("This Record has been restored.");
                            System.out.format("%1$-5s  %2$-29s%3$5s%4$7s%5$7s%6$7s%7$7s%8$7s%9$7s%n", 
                                "R.N.", "Student Name", "Class", "Eng", "Math", "Phy", "Chem", "Bio", "status");
                            arr[i].displayData();
                        }
                        found = true;
                    }
                }
                if (!found){
                    System.out.println("Student Not Found : ");
                }
                System.out.print("Press ENTER to proceed... ");
                sc.nextLine();  // just to hold the screen and to absorb ENTER
                break;
            }
        }
        System.out.println("Thank you for using this program.");
    }
}
