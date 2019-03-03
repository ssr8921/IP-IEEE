#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	int r, g, b, i, j, grey;
	Mat img = imread("pic.PNG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);
	waitKey(0);

	Mat gimg(img.rows, img.cols, CV_8UC1, Scalar(0));
	for (i = 0; i < img.rows; i++)
	{
		for (j = 0; j < img.cols; j++)
		{
			b = img.at<Vec3b>(i, j)[0];
			g = img.at<Vec3b>(i, j)[1];
			r = img.at<Vec3b>(i, j)[2];
			grey = (r + g + b) / 3;
			(gimg.at<uchar>(i, j)) = grey;
		}
	}

	namedWindow("GreyImg", WINDOW_AUTOSIZE);
	imshow("GreyImg", gimg);
	waitKey(0);

	int a = 15;
	Mat bgimg(img.rows, img.cols, CV_8UC1, Scalar(0));
	namedWindow("BinaryImg", WINDOW_AUTOSIZE);
	createTrackbar("GreyBinary", "BinaryImg", &a, 255);
	while (1)
	{

		Mat bgimg(img.rows, img.cols, CV_8UC1, Scalar(0));
		for (i = 0; i < gimg.rows; i++)
		{
			for (j = 0; j < gimg.cols; j++)
			{
				if (a > gimg.at<uchar>(i, j))
				{
					bgimg.at<uchar>(i, j) = 0;
				}
				else
				{
					bgimg.at<uchar>(i, j) = 255;
				}
			}
		}

		imshow("BinaryImg", bgimg);
		waitKey(1);
	}


	return 0;
}*/