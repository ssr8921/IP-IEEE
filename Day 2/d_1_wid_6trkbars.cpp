#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	int i, j, r, b, g;
	Mat img1 = imread("pic.PNG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img1);
	waitKey(0);

	Mat img2(img1.rows, img1.cols, CV_8UC3, Scalar(0, 0, 0));
	namedWindow("Final", WINDOW_AUTOSIZE);

	int R = 0, B = 0, G = 0;
	int Re = 0, Be = 0, Ge = 0;
	createTrackbar("RedScale", "Final", &R, 255);
	createTrackbar("GreenScale", "Final", &G, 255);
	createTrackbar("BlueScale", "Final", &B, 255);
	createTrackbar("redScale", "Final", &Re, 10);
	createTrackbar("greenScale", "Final", &Ge, 10);
	createTrackbar("blueScale", "Final", &Be, 10);
	while (1)
	{
		for (i = 0; i < img1.rows; i++)
		{
			for (j = 0; j < img1.cols; j++)
			{
				r = img1.at<Vec3b>(i, j)[2];
				g = img1.at<Vec3b>(i, j)[1];
				b = img1.at<Vec3b>(i, j)[0];
				if (R + Re > r && r > R - Re)
					img2.at<Vec3b>(i, j)[2] = R;
				else
					img2.at<Vec3b>(i, j)[2] = 0;
				if (G + Ge > g && g > G - Ge)
					img2.at<Vec3b>(i, j)[1] = G;
				else
					img2.at<Vec3b>(i, j)[1] = 0;
				if (B + Be > b && b > B - Be)
					img2.at<Vec3b>(i, j)[0] = B;
				else
					img2.at<Vec3b>(i, j)[0] = 0;
			}
		}
		imshow("Final", img2);
		waitKey(5);
	}
}*/