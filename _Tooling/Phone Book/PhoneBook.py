import sys
PhoneBooks=[]
Phone_BookNames_List=[]    

def AddContact():
    NameFlag=True
    NumberFlag=True
    MailFlag=True
    GenderFlag=True
    PhoneBookNumberFlag=True
    if  ShowPhoneBooks()==1:
        while PhoneBookNumberFlag:
            PhoneBook = input("Choose Phone Book Number")
            if int(PhoneBook)>len(PhoneBooks):
                print("\n********************************")
                print("You entered a phone book number that doesn't exist")
                print("Please choose correct Phone book number from the above listed menu  ")
                print("\n********************************")
            else:
                PhoneBookNumberFlag=False
            
            
        while NameFlag:
            Name      = input("\nEnter the contact name:\n")
            if Name.isalpha():
                NameFlag=False
            
            else:
                print("\nPlease Enter a valid name that consists only of letters:\n")
        while NumberFlag:
            Phone     = input("Enter the phone number ")
            if Phone.isdigit():
                NumberFlag=False
            
            else:
                print("\nPlease Enter a valid phone number that consists only of numbers:\n")
        
        while MailFlag:
            Mail      = input("Enter the contact mail ")
            regex = '^[a-z0-9]+[\._]?[a-z0-9]+[@]\w+[.]\w{2,3}$'  
            if (re.search(regex,Mail)):
                NumberFlag=False
            
            else:
                print("\nPlease Enter a valid mail for example name@gmail.com :\n")
        
        while GenderFlag:
            Gender    = input("Enter the contact gender m for male and f for female ")
            if Gender.islower() == 'm' or Gender.islower() == 'f':
               GenderFlag=False
            else:
               print("please enter valid input m for male and f for female")    
                
        
        
    #Contact={Name:[Phone,Mail,Gender]}
        PhoneBooks[(int(PhoneBook))-1].update({Name:[Phone,Mail,Gender]})
    else:
        print("You should create one first")
   

def SearchContact(SearchName):
    i=0
    while i<=(len(PhoneBooks))-1:
      for key, val in PhoneBooks[i].items():
        if SearchName==key:
          print("\n********************************")  
          print("{} : {}".format(key, val))
          print("\n********************************")
          return 1
          
      i+=1
      
    return 0    

def Edit_Contact(Search_Name):
    i=0
    while i<=(len(PhoneBooks))-1:
      for key, val in PhoneBooks[i].items():
        if Search_Name==key:
          Phone     = input("Enter the phone number ")
          Mail      = input("Enter the contact mail ")
          Gender    = input("Enter the contact gender ")
          PhoneBooks[i].update({Search_Name:[Phone,Mail,Gender]})
          print("\n\n********************************")
          print("Sucessfully Edited")
          print("\n\n********************************")
          Display_Contact(i+1)
          return 1
          
      i+=1
    return 0    


def ShowPhoneBooks():
    if Phone_BookNames_List:
        print("\n\n********************************")
        print("Your Phone Books")
        Index=1
        for i in Phone_BookNames_List:
            print(Index,"-",i)
            Index+=1
        print("\n ********************************")    
        return 1    
    else:
        print("\n\n ********************************")
        print("Your don't have any Phonebooks")
        print("\n********************************")
        return 0


def Display_Contact(Phone_Book_Number):
    print("\n\n***********************")
    print(Phone_Book_Number,"-",Phone_BookNames_List[int(Phone_Book_Number)-1])
    print("\n\n********************************")
    if len(PhoneBooks[(int(Phone_Book_Number))-1])==0:
        print("\n\n********************************")
        print("Phone Book is empty")
        print("\n\n********************************")
    else:
        for key, val in PhoneBooks[(int(Phone_Book_Number))-1].items():
            print("{} : {}".format(key, val))
    print("\n\n***********************")

def DeleteContact(Deleted):
    i=0
    while i<=(len(PhoneBooks))-1:
          for key in PhoneBooks[i].copy():
              if Deleted_Contact==key:
                print("\n")
                Confirm = input ("Do you want to delete this contact y/n")
                if Confirm == 'y' or Confirm == 'Y':
                    PhoneBooks[i].pop(key)
                    print("\n********************************")
                    print("\nSucessfully Deleted\n")
                    print("\n********************************")
                    return 1
          i+=1
    return 0      
    
    

def DeletePhoneBook(PhoneBookNum):
  PhoneBooks.pop(int(PhoneBookNum)-1)
  Phone_BookNames_List.pop(int(PhoneBookNum)-1)
  print("\n********************************")
  print("Sucsessfully Deleted")
  print("\n********************************")

while True:
  print("***Your Amazing Phone Book***\n")
  choice = int (input (" 1.Add new Phone Book : \n 2.Show Phone Books :  \n 3.Add contact :  \n 4.Edit contact :  \n 5.Show contact : \n 6.Search contact :  \n 7.Delete Contact : \n 8.Delete Phone Book : \n 9.Exit\n Please enter your choice \n"))
  PhoneBookFlag=True
  if choice == 1:
    while PhoneBookFlag:
        PhoneBook_Name=input("Choose Phone Book  Name: ")
        if PhoneBook_Name.isdigit():
            print("Please enter a valid name that consists only of letters")
        else:
            PhoneBookFlag=False
    
    Contact={}
    PhoneBooks=PhoneBooks+[Contact]
    print(len(PhoneBooks))
    Phone_BookNames_List.append(PhoneBook_Name)
  
  elif choice == 2:
    ShowPhoneBooks()
  elif choice == 3:
    AddContact()
  elif choice == 6:
    SearchN=input("Enter Name to be serached")
    if SearchContact(SearchN)==0:
        print("Name is not Found")

    
  elif choice == 5:
    if ShowPhoneBooks() == 1:
        PhoneBook = input("Choose Phone Book Number")
        Display_Contact(PhoneBook)
    else:
        None
    
  elif choice == 4:
    Edit = input("Enter the contact Name ")
    if not Edit_Contact(Edit):
       print("Name is not found")       
    
    
  elif choice == 7:
      Deleted_Contact = input("Enter the contact to be deleted")
      if not DeleteContact(Deleted_Contact):
        print("Contact Name is not found")
        
  elif choice ==8:
    ShowPhoneBooks()
    PhoneBookNumberFlag=True
    
    while PhoneBookNumberFlag:
            PhoneBookNum=input("Please enter phone book number to be deleted")
            if int(PhoneBookNum)>len(PhoneBooks):
                print("\n********************************")
                print("You entered a phone book number that doesn't exist")
                print("Please choose correct Phone book number from the above listed menu  ")
                print("\n********************************")
            else:
                DeletePhoneBook(PhoneBookNum)
                PhoneBookNumberFlag=False
        
  else:
    break;
      