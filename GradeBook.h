#include <string>

class GradeBook {
    public:
        explicit GradeBook (std::string);  // Constructor initialize courseName
        void SetCourseName(std::string);  // Set course name
        std::string GetCourseName() const; // Get course name
        void DisplayMessage() const;  // Display a welcome message
    private:
        std::string courseName;  // Course name for this gradebook
};