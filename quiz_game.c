#include <stdio.h>

int main() {
  char ques[][100] = {
      {"Largest planet?"}, {"Biggest continent?"}, {"Smallest country? "}};

  char options[][100] = {{"A.Saturn\nB.Uranus\nC.Jupiter\nD.Earth"},
                         {"A.Asia\nB.Africa\nC.Russia\nD.Australia"},
                         {"A.China\nB.India\nC.Vatican City\nD.Sri Lanka"}};

  char answerKey[] = {'C', 'A', 'C'};

  char answer;
  int correct = 0;

  for (int i = 0; i < 3; i++) {
    printf("%s\n", ques[i]);
    printf("%s\n\n", options[i]);
    scanf(" %c", &answer);

    if (answer == answerKey[i]) {
      correct += 1;
      continue;
    }
  }

  printf("Congratulations! You got %d correct out of 4.\n", correct);
}