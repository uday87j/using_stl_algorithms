#include "util.h"

#include <iostream>
#include <random>

using namespace std;

namespace ns_stl	{
	
	std::vector<int> create_random_int_vector(const std::uint32_t size)	{
    	std::uniform_int_distribution<int> dist(1, 100);
		std::random_device rd;
		std::vector<int> ivec(size);
		for(auto& i : ivec)	{
			i	= dist(rd);
		}
		return ivec;
	}

    std::vector<rect_t> create_random_rectangle_vector(const std::uint32_t size)	{
    	std::uniform_int_distribution<int> h_dist(5, 10);
		std::uniform_int_distribution<int> w_dist(10, 20);
		std::random_device rd;

        std::vector<rect_t> rectangles(20);
        for(auto& i : rectangles)	{
        	i	= rect_t(h_dist(rd), w_dist(rd));
		}
		return rectangles;
	}
}