#include <iostream>
#include <vector>
using namespace std;

int main(){
	// Assigning all the variables
	unsigned int K, N, currentDistance, maxDistance = 0, previousDistance = 0;
	vector<unsigned int> A_i;

	cin >> K;
	cin >> N;
	for(unsigned int i=0; i<N; i++){
		cin >> currentDistance; // Asking for current distance(A_i)
		A_i.push_back(currentDistance); // Adding the elements to the array(vector)
		maxDistance = max(maxDistance, A_i[i]-previousDistance); // Tracking the maximum distance with each loop. To be noted that is for distance between the points.
		previousDistance = A_i[i]; // Getting the previous distance, for comparing with the maximum distance.
	}
	/*
	 * Here, K-A_i.back()+A_i[0] is basically getting the distance from the last house to the first house.
	 * This part checks if the maximum distance between any two points given is less than the distance from last house to first house. If so,
	 * then the new maximum distance would be the distance from last house to first house. This is a very important part of our code as in our loop
	 * we have not checked for the distance between last house and the north point, so doing this will make sure we have the actual maximum distance.
	 * Using this then, we can use the logic that minimum distance would just be the perimeter minus the maximum distance and gives us the answer.
	 */
	maxDistance = max(maxDistance, K-A_i.back()+A_i[0]);
	cout << K-maxDistance << endl;
	return 0;
}
