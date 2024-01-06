vector<string> explode_by_token(string const& s, char delimeter) {
	vector<string> result;
    // Create a string stream from the string, allowing to perform input/output operations on strings.
	istringstream iss(s);
    // Read the string stream, tokenizing it by the delimeter
	for(string token; getline(iss, token, delimeter);) {
        // Split the string by the delimeter and push it to the result vector
		result.push_back(move(token));
	}
    // Return the result vector
	return result;
}