#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include<math.h>

using namespace std;
using namespace cv;
/*
void on_low_r_thresh_trackbar(int, void *);
void on_high_r_thresh_trackbar(int, void *);
void on_low_g_thresh_trackbar(int, void *);
void on_high_g_thresh_trackbar(int, void *);
void on_low_b_thresh_trackbar(int, void *);
void on_high_b_thresh_trackbar(int, void *);
int low_h = 0, low_s = 0, low_v = 0;
int high_h = 255, high_s = 255, high_v = 255;

int main()
{
	VideoCapture a(0);

	Mat img(2000, 2000, CV_8UC3, Scalar(0, 0, 0));
	Mat fimg(2000, 2000, CV_8UC3, Scalar(0, 0, 0));
	int h, s, v, i, j;
	while (a.isOpened())
	{
		a >> img;
		cvtColor(img, fimg, CV_BGR2HSV);
		namedWindow("HSV", WINDOW_AUTOSIZE);
		createTrackbar("tfimg", "HSV", &h, 255);
		createTrackbar("tfimg", "HSV", &s, 255);
		createTrackbar("tfimg", "HSV", &v, 255);
		createTrackbar("tfimg", "HSV", &s, 255);
		createTrackbar("tfimg", "HSV", &s, 255);
		createTrackbar("tfimg", "HSV", &s, 255);

		Mat tfimg(img.rows, img.cols, CV_8UC1, Scalar(0));
		for (i = 0; i < img.rows; i++)
		{
			for (j = 0; j < img.cols; j++)
			{
				if (h > img.at<Vec3b>(i, j)[])
				{
					tfimg.at<Vec3b>(i, j)[] = 255;
				}
				else
				{
					tfimg.at<Vec3b>(i, j)[] = 0;
				}

			}
		}

		imshow("HSV", fimg);
		waitKey(30);

	}
	return 0;
}

void on_low_h_thresh_trackbar(int, void *)
{
	low_h = min(high_h - 1, low_h);
	setTrackbarPos("Low R", "Object Detection", low_h);
}
void on_high_h_thresh_trackbar(int, void *)
{
	high_h = max(high_h, low_h + 1);
	setTrackbarPos("High R", "Object Detection", high_h);
}
void on_low_s_thresh_trackbar(int, void *)
{
	low_s = min(high_s - 1, low_s);
	setTrackbarPos("Low G", "Object Detection", low_s);
}
void on_high_s_thresh_trackbar(int, void *)
{
	high_s = max(high_s, low_s + 1);
	setTrackbarPos("High G", "Object Detection", high_s);
}
void on_low_v_thresh_trackbar(int, void *)
{
	low_v = min(high_v - 1, low_v);
	setTrackbarPos("Low B", "Object Detection", low_v);
}
void on_high_v_thresh_trackbar(int, void *)
{
	high_v = max(high_v, low_v + 1);
	setTrackbarPos("High B", "Object Detection", high_v);
}*/