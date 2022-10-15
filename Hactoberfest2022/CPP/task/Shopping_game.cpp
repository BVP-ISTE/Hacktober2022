// Faculty at CodingBlocks loves to purchase smartphones 
// and decides to play a game. Aayush and Harshit decides to shop for smartphones.
//  Aayush purchases 1 smartphone, then Harshit purchases 2 smartphones, then Aayush purchases 3 smartphones, then Harshit purchases 4 smartphones, and so on. Once someone can't purchase more smartphones, he loses.

// Aayush can purchase at most M smartphones and Harshit can purchase at most N smartphones. Who will win ? Print "Aayush" and "Harshit" accordingly.

// Si:-
// 2
// 9 3    
// 8 11

// So:-
// Aayush
// Harshit

// Explanation:-
// Test case 1. We have M = 9 and N = 3. 
// Aayush shops for 1 smartphone, and then Harshit shops for 2 smartphones. 
// Then Aayush shops for 3 smartphones and then Harshit shops for 4 smartphones but that would mean 2 + 4 = 6 smartphones in total. 
// It's impossible because Harshit can shop for at most N smartphones, so he loses. 
// Aayush wins, and so we print "Aayush".


// Test case 2. Now we have M = 8 and N = 11. 
// Aayush shops for 1 smartphone first, and then Harshit shops for 2 smartphones, then Aayush shops for 3 smartphones. 
// Now Harshit shops for 4 smartphones (he has 2 + 4 = 6 smartphones in total, which is allowed because it doesn't exceed N). Then Aayush tries to shop for 5 smartphones but he can't because 1 + 3 + 5 = 9 which is greater than M. 
// Aayush loses and Harshit is the winner.