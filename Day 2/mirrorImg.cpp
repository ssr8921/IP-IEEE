#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include<math.h>

using namespace std;
using namespace cv;
/*
int main()
{
	Mat img = imread("pic.PNG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);
	waitKey(0);
	
	Mat imgf(img.rows, img.cols, CV_8UC3, Scalar(0, 0, 0));
	int i, j;

	for (i = 0; i < img.rows; i++)
	{
		for (j = 0; j < img.cols; j++)
		{
			imgf.at <Vec3b>(i, imgf.cols - j-1)[2] = img.at <Vec3b>(i, j)[2];
			imgf.at <Vec3b>(i, imgf.cols - j-1)[1] = img.at <Vec3b>(i, j)[1];
			imgf.at <Vec3b>(i, imgf.cols - j-1)[0] = img.at <Vec3b>(i, j)[0];
		}
	}
	namedWindow("Final", WINDOW_AUTOSIZE);
	imshow("Final", imgf);
	waitKey(0);

	return 0;
}*/