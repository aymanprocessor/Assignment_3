class product
{ 
    
    public: 

    string productName; 

    void printname() 
    { 
       cout << Product Name is: " << productName; 
    } 
}; 
  



class Product
{ 
    
public: 
    virtual void printName() = 0; 
    
}; 
  
 
class Derived: public Product
{ 
     
public: 
    void printName() { cout << "printName() called"; } 
}; 
