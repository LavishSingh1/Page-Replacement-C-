# Page Replacement Algorithm - FIFO (First-In-First-Out)

## Overview

This C program simulates the First-In-First-Out (FIFO) page replacement algorithm. Page replacement algorithms are used in operating systems to manage the contents of the page table when a page fault occurs. FIFO replaces the oldest page in the memory when a page fault occurs.

## Usage

* Compiling
```bash

gcc fifo_page_replacement.c -o fifo_page_replacement

```
* Running

```bash
./fifo_page_replacement
```

* Enter the Number of Frames:
* Enter the desired number of frames for the page replacement algorithm.
* Enter the Number of Requests:
* Enter the total number of page requests.
* Enter the Reference String:
* Enter the sequence of page references separated by spaces.

* Sample Input Output

```mathematica
Enter Number of Frames : 3
Enter Number of Requests : 15
Enter Reference String : 7 0 1 2 0 3 0 4 2 3 0 3 1 2 0
Hits = 3
Faults = 12
Hit Ratio = 0.200000
Miss Ratio = 0.800000

```

## Implementation Details

* The program uses an array to represent the frames in memory.
* The in function checks if a page is present in the current set of frames.
* The main loop iterates through the page reference string, simulating page requests.
* It calculates the number of hits, faults, hit ratio, and miss ratio.

## Note

Uncomment the section in the code for "For seeing order" to print the state of frames after each page request for visualization.

Feel free to modify and adapt the program as needed for your use case.