#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	Mat ipImg = imread("pic.PNG", 1);
	Mat opImg(ipImg.rows, ipImg.cols, CV_8UC1, Scalar(0));

	cvtColor(ipImg, opImg, CV_RGB2GRAY);

	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", ipImg);
	waitKey(0);

	namedWindow("Grey", WINDOW_AUTOSIZE);
	imshow("Grey", opImg);
	waitKey(0);

	return 0;

}*/