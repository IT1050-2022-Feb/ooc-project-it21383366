//IT21383366
//Class 02(specialAccount)

#include <iostream>
#include <cstring>

class specialAccount : public registered_user {
    protected :
        int SpID;

    public:
        specialAccount();
        specialAccount(int RSpID, char Rfname[], char Rlname[], char Remail[], char Uname[], char RNIC[], char Rgender[], char RDOB[], int Rtp_number[], char Raddress1[], char Raddress2[], char Rcity[], char Rprovince[], int Rp_code, char Rbio[], char Ra_type[], char Rpassword[], char Rreg_date[]);
        void AddMember(int RSpID, char Rfname[], char Rlname[], char Remail[], char Uname[], char RNIC[], char Rgender[], char RDOB[], int Rtp_number[], char Raddress1[], char Raddress2[], char Rcity[], char Rprovince[], int Rp_code, char Rbio[], char Ra_type[], char Rpassword[], char Rreg_date[]);
        void deleteMembers();
        void Reservebooks();
        void verifySpecialAccount();
};

specialAccount::specialAccount() {
    SpID = 0;
    strcpy(first_name, "");
    strcpy(last_name, "");
    strcpy(email, "");
    strcpy(user_name, "");
    strcpy(NIC, "");
    strcpy(gender, "");
    strcpy(DOB, "");
    tp_number = 0;
    strcpy(address1, "");
    strcpy(address2, "");
    strcpy(city, "");
    strcpy(province, "");
    p_code = 0;
    strcpy(bio, "");
    strcpy(a_type, "");
    strcpy(password, "");
    strcpy(reg_date, "");
    strcpy(exp_date, "");
}

specialAccount::specialAccount(int RSpID, char Rfname[], char Rlname[], char Remail[], char Uname[], char RNIC[], char Rgender[], char RDOB[], int Rtp_number[], char Raddress1[], char Raddress2[], char Rcity[], char Rprovince[], int Rp_code, char Rbio[], char Ra_type[], char Rpassword[], char Rreg_date[]) {
    
}


void specialAccount::AddMember(int RSpID, char Rfname[], char Rlname[], char Remail[], char Uname[], char RNIC[], char Rgender[], char RDOB[], int Rtp_number[], char Raddress1[], char Raddress2[], char Rcity[], char Rprovince[], int Rp_code, char Rbio[], char Ra_type[], char Rpassword[], char Rreg_date[]) {

}


void specialAccount::deleteMembers() {

}


void specialAccount::Reservebooks() {

}


void specialAccount::verifySpecialAccount() {

}


//Class 02(studentAccount)

#include <iostream>
#include <cstring>

class studentAccount : public registered_user {
protected:
    int SpID;

public:
    studentAccount();
    studentAccount(int SSpID, char Sfname[], char Slname[], char Semail[], char SUname[], char SNIC[], char Sgender[], char SDOB[], int Stp_number[], char Saddress1[], char Saddress2[], char Scity[], char Sprovince[], int Sp_code, char Sbio[], char Sa_type[], char Spassword[], char Sreg_date[]);
    void AddMember(int SSpID, char Sfname[], char Slname[], char Semail[], char SUname[], char SNIC[], char Sgender[], char SDOB[], int Stp_number[], char Saddress1[], char Saddress2[], char Scity[], char Sprovince[], int Sp_code, char Sbio[], char Sa_type[], char Spassword[], char Sreg_date[]);
    void deleteMembers();
    void Reservebooks();
    void verifySpecialAccount();
};

studentAccount::studentAccount() {
    SpID = 0;
    strcpy(first_name, "");
    strcpy(last_name, "");
    strcpy(email, "");
    strcpy(user_name, "");
    strcpy(NIC, "");
    strcpy(gender, "");
    strcpy(DOB, "");
    tp_number = 0;
    strcpy(address1, "");
    strcpy(address2, "");
    strcpy(city, "");
    strcpy(province, "");
    p_code = 0;
    strcpy(bio, "");
    strcpy(a_type, "");
    strcpy(password, "");
    strcpy(reg_date, "");
    strcpy(exp_date, "");
}

studentAccount::studentAccount(int SSpID, char Sfname[], char Slname[], char Semail[], char SUname[], char SNIC[], char Sgender[], char SDOB[], int Stp_number[], char Saddress1[], char Saddress2[], char Scity[], char Sprovince[], int Sp_code, char Sbio[], char Sa_type[], char Spassword[], char Sreg_date[]) {

}


void studentAccount::AddMember(int SSpID, char Sfname[], char Slname[], char Semail[], char SUname[], char SNIC[], char Sgender[], char SDOB[], int Stp_number[], char Saddress1[], char Saddress2[], char Scity[], char Sprovince[], int Sp_code, char Sbio[], char Sa_type[], char Spassword[], char Sreg_date[]) {

}


void studentAccount::deleteMembers() {

}


void studentAccount::Reservebooks() {

}


void studentAccount::verifySpecialAccount() {

}