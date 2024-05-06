#include <iostream>

using namespace std;
int counter=0;
void CreateUser (string Name [] ,string ID [] ,int Room[] )
{
    string Namee;
    string IDd;
    int RoomIDd;
    cout<<"Name :";
    cin>>Namee;
    cout<<"ID :";
    cin>>IDd;
    cout<<"RoomID :";
    cin>>RoomIDd;
    Name[counter]=Namee;
    ID[counter]=IDd;
    Room[counter]=RoomIDd;
    counter++;
    cout<<"user created"<<endl;

}
void finduser(string Name [] ,string ID [] ,int Room[],string searchID)
{
for(int i=0;i<counter;i++)
{
    if (ID[i]==searchID)
    {
        cout<<"Name :"<<Name[i]<<endl;
        cout<<"ID :"<<ID[i]<<endl;
        cout<<"RoomID :"<<Room[i]<<endl;
    }
if (ID[i]!=searchID)
        {cout<<"user not found"<<endl;}
}

}
void findroom(string Name[],int Room[],int roomnumber)
{
    for(int i=0;i<counter;i++)
    {
if (Room[i]==roomnumber)
{
    cout<<"User :"<<Name[i]<<"is in room :"<<roomnumber<<endl;
}
    if (Room[i]!=roomnumber)
{cout<<"user not found"<<endl;}

    }
}

int main ()
{
    string Name[10000];
    string ID[10000];
    int RoomID[10000];
    while(true){
        int choise;
        cout<<"choose number\n1-create user\n2-find user\n3-findroom\n";
        cout<<"choise :";
        cin>>choise;
        if (choise==1)
        {
        CreateUser(Name,ID,RoomID);
        }
        else if (choise==2)
        {
            string searchID;
            cout<<"Enter search ID :";
            cin>>searchID;
        finduser(Name,ID,RoomID,searchID);
        }
        else if(choise==3)
        {   int roomnumber;
            cout<<"Enter the room number :";
            cin>>roomnumber;
            findroom(Name,RoomID,roomnumber);
        }
        else
        {
            continue;
        }
    }
return 0;
}
