#pragma once

#include "stdafx.h"


class LaneDetect
{
	int Right0_x, Left0_x;
	
public:

	int find_R0_x(Mat binary_img, int img_height, int *framecount_R , int Right0_x);
	int find_L0_x(Mat binary_img, int img_height, int *framecount_L , int Left0_x);

	int find_RN_x(Mat binary_img, int Right0_x, int img_height, int THRESHOLD);
	int find_LN_x(Mat binary_img, int Left0_x, int img_height ,int THRESHOLD);

};