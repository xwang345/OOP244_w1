//
// Created by Xiaochen Wang on 2017-05-17.
//

#ifndef OOP244_W1_GRAPH_H
#define OOP244_W1_GRAPH_H

#define MAX_NO_OF_SAMPLES 20

// Finds the largest sample in the samples array, if it is larger than 70, therwise it will return 70.

int findMax(int samples[], int noOfSamples);

// Prints a graph comparing the sample values visually
void printGraph(int samples[], int noOfSamples);

// Fills the samples array with the statistic samples
void getSamples(int samples[], int noOfSamples);

// Prints a scaled bar relevant to the maximum value in samples array
void printBar(int val, int max);

#endif //OOP244_W1_GRAPH_H
