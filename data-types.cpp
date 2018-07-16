fixed and setprecision was pain in the ass. also cin.ignore() found at the end
challenge https://www.hackerrank.com/challenges/30-data-types/problem

    
    // Declare second integer, double, and String variables.
    int i1;double d1;string s1;
cin>>i1>>d1;
cin.ignore();
getline(cin,s1);
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+i1<<"\n";
    // Print the sum of the double variables on a new line.
double res;
res=d1+d;
   cout<<fixed<<setprecision(1)<<res<<"\n"; 
    // Concatenate and print the String variables on a new line
cout<<s<<""<<s1;
    // The 's' variable above should be printed first.
