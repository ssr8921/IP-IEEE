#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	int r, g, b, i, j, grey;
	Mat img = imread("red.PNG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);


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
	//imshow("GreyImg", gimg);


	int a = 15;
	Mat bgimg(img.rows, img.cols, CV_8UC1, Scalar(0));
	Mat eimg(img.rows, img.cols, CV_8UC1, Scalar(0));
	namedWindow("BinaryImg", WINDOW_AUTOSIZE);
	namedWindow("Errosion", WINDOW_AUTOSIZE);
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
		waitKey(5);
		imshow("BinaryImg", bgimg);

		for (i = 1; i < bgimg.rows - 1; i++)
		{
			for (j = 1; j < bgimg.cols - 1; j++)
			{
				int p, q;
				int flag = 0;
				for (p = 0; p < 3; p++)
				{
					for (q = 0; q < 3; q++)
					{
						if (bgimg.at<uchar>(i - 1 + p, j - 1 + q) == 0)
							flag = 1;
					}
				}
				if (flag == 1)
					eimg.at<uchar>(i, j) = 0;
				else
					eimg.at<uchar>(i, j) = 255;
			}
		}
		//namedWindow("Errosion", WINDOW_AUTOSIZE);
		imshow("Errosion", eimg);
		waitKey(5);
	}
}*/

