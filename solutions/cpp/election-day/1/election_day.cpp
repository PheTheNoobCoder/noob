#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count(ElectionResult& result){
    return result.votes;    
}

void increment_vote_count(ElectionResult& result, int votes ){
    result.votes += votes;
}

// TODO: Task 3
ElectionResult& determine_result(std::vector<ElectionResult>& final_count){
    int winner{0};
    for (int i{1}; i < final_count.size(); i++){
        if (final_count[i].votes > final_count[winner].votes){
            winner = i;
        }
        
    }
    final_count[winner].name = "President " + final_count[winner].name;
    return final_count[winner];
}



// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.

}  // namespace election
