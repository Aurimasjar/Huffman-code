#ifndef DECODING_H
#define DECODING_H

#include <iostream>
#include <fstream>
#include <bitset>
#include <vector>
#include <cmath>
#include <cstdlib>

#include "hufftree.h"

using namespace std;

typedef std::vector<bool> HuffCode;

//for creating map between old value and Hufmann code
typedef std::map<int, HuffCode> HuffCodeMap;

class Decoding
{
    public:
        Streamer *stream;
        Hufftree *hufftree;
        int k;
        int wordCount;
        //hufftree.freq = 0;

        Decoding(string fileRec, string fileWrite);
        ~Decoding();

        void ReadTable();

};

#endif