#include<stdio.h>
#include"movieStr.h"
#include"ticket.h"


int main() {

	struct Movie movie = GetMovieDetails();
	char* circle = GetCircleDetails();
	if (circle == 0) {
		printf("\n");
		printf("Sorry, the circle is invalid\n");
		return 0;
	}

	int result = CalculateTicketCost(&movie, circle);
	printf("\n");
	if (result == 0) {
		printf("The ticket cost is %d\n", movie.ticketCost);
	}
	else if (result == -1) {
		printf("Sorry, there is no %d D type of category in the theatre\n", movie.category);
	}
	else if (result == -2) {
		printf("Sorry, the circle is invalid\n");
	}
	return 0;
}