#include <stdio.h>
#include<string.h>
#include"movieStr.h"
#include"ticket.h"

struct Movie GetMovieDetails() {
	struct Movie movie;
	int category1;
	printf("Enter Movie Name: ");
	fflush(stdin);
	gets(movie.movieName);
	printf("Enter the Duration (in minutes): ");
	fflush(stdin);
	scanf_s("%d", &movie.duration);
	printf("Select the Category(Select 2 for 2D and 3 for 3D): ");
	fflush(stdin);
	scanf_s("%d", &movie.category);
	return movie;
}
char* GetCircleDetails() {
	int num;
	printf("Enter Circle (1 for gold/2 for silver): ");
	scanf_s("%d", &num);
	if ((num == 1) || (num == 2)) {
		if (num == 1) {
			static char  circle[10] = { "gold" };
			return circle;
		}
		else if (num == 2) {
			static char  circle[10] = { "silver" };
			return circle;
		}
	}
	else {
		return 0;
	}
}
int CalculateTicketCost(struct Movie* m, const char circle[]) {
	char gold[10] = "gold";
	char silver[10] = "silver";
	if (strcmp(circle, gold) == 0) {
		if (m->category == 2) {
			m->ticketCost = 300;
		}
		else if (m->category == 3) {
			m->ticketCost = 500;
		}
		else {
			return -1;
		}
	}
	else if (strcmp(circle, silver) == 0) {
		if (m->category == 2) {
			m->ticketCost = 250;
		}
		else if (m->category == 3) {
			m->ticketCost = 450;
		}
		else {
			return -1;
		}
	}
	else {
		return -2;
	}

	return 0;
}