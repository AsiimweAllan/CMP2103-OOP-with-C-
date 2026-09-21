1. Overview
In data processing, the ceiling function rounds every numeric value up to the nearest integer that is greater than or equal to the original value (e.g., 2.1 3.0, and  -3.5 becomes -3.0).

2. Code Breakdown
 The Core Function Signature
DataFrame& ceil_op(const std::string& col, const std::string& target_col = "")

DataFrame&: Returns a reference to the current object, enabling method chaining(e.g., df.ceil_op("col1").floor_op("col2")).
col: The name of the source column you want to read data from.
target_col: An optional argument. If left blank, the function automatically generates a new column name.

Safety Validation
if (data.find(col) == data.end()) {
    throw std::runtime_error("Error: Column '" + col + "' does not exist.");
}

 Before doing any math, the code checks if the column actually exists in our internal hash map (std::unordered_map). If a user typos a column name, it throws a clear runtime error instead of crashing mysteriously or causing undefined behavior.

 Automatic Target Column Naming
std::string target = target_col.empty() ? col + "_ceil" : target_col;

If no target column name is provided by the user, it automatically appends _ceil to the original column name (e.g., "scores"becomes "scores_ceil"). If a custom name is passed, it uses that instead.

The Transformation Loop & C++ Math Library
std::vector<double> result;
for (double val : data[col]) {
    result.push_back(std::ceil(val));
}

The code loops through every double in the source vector.
 It utilizes std::ceil()from the standard C++ <cmath> library, which handles the math efficiently and correctly for both positive and negative floating-point numbers.
 Each computed result is pushed into a new temporary vector.

 Saving the Data
data[target] = result;
return *this;


Finally, the new result vector is stored back into the DataFrame’s hash map under the target column name, and `*this` is returned to keep the pipeline moving.


 3. Example Walkthrough

When you run the engine with a sample dataset:
DataFrame df({
    {"scores", {-3.5, 0.0, 2.1, 4.9}}
});
df.ceil_op("scores");


1. It looks up the vector {-3.5, 0.0, 2.1, 4.9} under"scores".
2. It passes each value to std::ceil():
std::ceil(-3.5) is -3.0
std::ceil(0.0) is 0.0
std::ceil(2.1) is 3.0
std::ceil(4.9) is 5.0


3. It creates a new column called "scores_ceil" containing {-3, 0, 3, 5}.
