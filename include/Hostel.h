#ifndef HOSTEL_H
#define HOSTEL_H
#include <string>
#include <vector>

class hostel {
    int sid[100], taka[100], c;
    std::string ch[100];
public:
    hostel() {
        this->c = 0;
    }
    // software information functions
    void header();
    void welcome();
    int idposition(int sid);
    void program_close();

    // report
    void available_room();

    // starting room engine
    std::vector<int> rnumber;
    std::vector<int> rfloor;
    std::vector<int> rcategory;
    std::vector<int> rseats;

    //starting room function
    void get_roominfo();
    void add_room();
    void update_room();
    void display_room();
    void search_room();
    void delete_room();
    int room_position(int num);
    int  generate_rnum();
    int check_room(int roomid);
    int avi_room(int roomid);
    void room_close();

    // starting student information
    std::vector <int> studentid;
    std::vector<std::string> studentname;
    std::vector<int> studentroom;

    // student information function
    int student_id_maker();
    void get_studentinfo();
    void display_student();
    void search_student();
    void update_student();
    void add_student();
    void delete_student();
    void student_clear();
    void student_insert();
    // end student information functions
};

#endif // HOSTEL_H
