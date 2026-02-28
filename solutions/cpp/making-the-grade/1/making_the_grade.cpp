#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> result (student_scores.size());
    
    for (int i {}; i < student_scores.size(); i++ ){
        result[i] = static_cast<int>(student_scores[i]);
    }
return result;  
    
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int fails{};
    for(int i{}; i < student_scores.size(); i++){
        if (student_scores[i] <= 40){
            fails++;
        }
    }
return fails;

}
// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score - 40) / 4;
    return {41, 41 + step, 41 + 2 * step, 41+3 * step};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> result;
    for (int i{} ; i < student_scores.size(); i++){
        int rank = i + 1;
       
        std::string line = std::to_string(rank) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        result.push_back(line);
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i{}; i < student_scores.size(); i++){
        if (student_scores[i] == 100){
            return student_names[i];
        }
        
    }
    return "";
}
