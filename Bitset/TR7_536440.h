#ifndef TR65_536440_H
#define TR65_536440_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
  int *elements;
  int size, maximum;
  float loadFactor;
} Set;

Set *emptySet();
Set *readSet(FILE *file);
void insert(Set *set, int element);
void print(Set *set);
void writeSet(FILE *file, Set *set);
void unionSet(Set *setC, Set *setA, Set *setB);
void intersecSet(Set *setC, Set *setA, Set *setB);

#endif
