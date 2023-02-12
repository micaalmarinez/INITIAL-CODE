#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    int select;
    
    cout << " STUDENT INFORMATION SYSTEM" << endl;
   
    cout << "----------------------------------------------------------"<<endl;
    cout << "Please Select an option!"<< endl;
    cout << " 1. Faculty"<< endl;
    cout << " 2. Student" <<endl;
    cout << " 3. Exit "<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cin >> select;
    cout << endl;
    
    switch ( select) {
    case 1:  {
    
    string userName;
    string userPassword ;
    string Id;
    
    cout << "User ID number: ";
    cin >> Id;
    cin.ignore();
    cout << "Faculty Name: ";
    getline( cin, userName);
    cout << "Please enter your password: ";
        cin >> userPassword;
        
        cout << endl;

        if (userPassword == "010101" ) {
            cout << "FACULTY INFORMATION!" << endl;
            
             cout << "Position: "<<endl;
             cout << "Address: " <<endl;
             cout << "Contact Number: " <<endl;               cout << "Email: "<< endl; }
            
            
                 
            break; }
           
          
           case 2:  {
            
            string Id1;
            string name1;
            string pass1; 
            string course, Level;
            int select1;
            
          cout << "Student ID Number: ";
    cin >> Id1;
    cin.ignore();
    
    cout << "Student Name: ";
    getline( cin,name1);
    
    cout << "Enter Your Course: ";
    getline(cin, course);
    
    cout << "Enter Your Year Level: ";
    getline (cin, Level);
    
    cout << "Please enter your user password: ";
        cin >> pass1;
        
         do{
        cout << endl;
           
            if ( pass1 == "Almarinez") {
                cout << ""<<endl;
                
    cout << endl;         
              
    cout << "----------------------------------------------------------"<<endl;
    cout << "Please Select an Option!"<< endl;
    cout << " 1. Demographics"<< endl;
    cout << " 2. Grades" <<endl;
    cout << " 3. Schedule"<<endl;
    cout << " 4. Exit"<<endl;
    cout << "If you don't have any transactions please select exit"<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cin >> select1; }
    
    else if (pass1 != "Almarinez" ){
       cout << "INVALID PASSWORD!";
         exit(0);}
    
    
    switch (select1) {
    
    case 1: {
                cout << " DEMOGRAPHICS:" << endl;
           cout << endl;
        
           cout << "Full Name: Mica Casipong Almarinez"<< endl;
           cout << endl;
        
           cout << "Gender: Female"<< endl;
           cout << endl;
        
           cout << "Date of Birth: February 22, 2002"<< endl;
           cout << endl;
           
        
           cout << "Place of Birth: Brgy. Loma Biñan City of Laguna" << endl;
           cout<<endl;
           
           
           cout << "Address:  #141 Rosal Street Barangay Loma Binan City of Laguna" << endl;
           cout << endl;
           
           cout << "Email Address: micaalmarinez22@gmail.com" << endl;
           cout << endl;
        
           cout << "Contact Number: 0995-655-7885" << endl;
           cout<< endl;
           
          
                
                break; }
                    
    case 2:  {
           
        
                cout << " DIPLOMA IN COMPUTER ENGINEERING TECHNOLOGY"<<endl;
                cout << endl; 
            
                cout << "GRADES:"<< endl;
            
                cout << "Physics for Engineers: 1.75"<< endl;
                cout<< endl;
            
                cout << "Computer Engineering Technology: 1.00" << endl;
                cout<< endl;
            
                cout << "Consumer Electronics Servicing: 1.75"<<endl;
                cout<< endl;
            
                cout << "Filipinolohiya at Pambansang Kaunlaran: 1.25" << endl;
                cout<< endl;
            
                cout << "Object-Oriented Programming: 1.50" << endl;
                cout<< endl;
            
                cout << "Computer-Aided Drafting: 1.25" << endl;
                cout<< endl;
            
                cout << "Physical Fitness: 1.50" << endl;
                cout<< endl;
        
        
        
       break;   }    
       
     case 3: {
          
           cout << "SCHEDULE" << endl<<endl;
           
           cout << "SUBJECTS:"<< endl;
            
                cout << "Physics for Engineers :" <<endl;
                cout << "Saturday ( 8:30AM - 12 :30PM)"<< endl;
                cout<< endl;
            
                cout << "Computer Engineering Technology:" << endl;
                cout <<  "TUESDAY ( 2:00PM - 5:00PM)" << endl;
                cout<< endl;
            
                cout << "Consumer Electronics Servicing:" <<endl;
                cout << "TUESDAY (7:30AM - 09:00PM)"<<endl;
                cout<< endl;
            
                cout << "Filipinolohiya at Pambansang Kaunlaran:"<< endl;
                cout << "SATURDAY (5:00PM-7:00PM)" << endl;
                cout<< endl;
            
                cout << "Object-Oriented Programming:" << endl; 
                cout << "MONDAY (3:00PM-9:00PM)" << endl;
                cout<< endl;
            
                cout << "Computer-Aided Drafting:" <<endl;
                cout << "FRIDAY (2:00PM-5:00PM)" << endl;
                cout<< endl;
            
                cout << "Physical Fitness:" <<endl; 
                cout << " WEDNESDAY (10:00AM - 12:00NN)" << endl;
                cout<< endl;
           break; }
           
           case 4: {
          
           cout << "" << endl<<endl;
           
           cout << ""<< endl;  
           
           exit(0);}
           
            
                                                       
    }
            } while (select1 !=4); {
                exit(0);}
          
                
  
                 
                            
                break; }
                
      
               
  
    }
  
    
 
    
    return 0;
}    