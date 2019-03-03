#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	int i, j;
	Mat img1 = imread("small.JPG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img1);
	waitKey(0);
	namedWindow("Final", WINDOW_AUTOSIZE);
	Mat img2(img1.rows*2, img1.cols*2, CV_8UC3, Scalar(0,0,0));
	for (i = 0; i < img1.rows; i++)
	{
		for (j = 0; j < img1.cols; j++ )
		{
			img2.at<Vec3b>(2 * i, 2 * j)[0] = img1.at<Vec3b>(i, j)[0];
			img2.at<Vec3b>(2 * i + 1, 2 * j)[0] = img1.at<Vec3b>(i, j)[0];
			img2.at<Vec3b>(2 * i, 2 * j + 1)[0] = img1.at<Vec3b>(i, j)[0];
			img2.at<Vec3b>(2*i+1, 2 * j + 1)[0] = img1.at<Vec3b>(i, j)[0];
			img2.at<Vec3b>(2 * i, 2 * j)[1] = img1.at<Vec3b>(i, j)[1];
			img2.at<Vec3b>(2 * i + 1, 2 * j)[1] = img1.at<Vec3b>(i, j)[1];
			img2.at<Vec3b>(2 * i, 2 * j + 1)[1] = img1.at<Vec3b>(i, j)[1];
			img2.at<Vec3b>(2*i+1, 2 * j + 1)[1] = img1.at<Vec3b>(i, j)[1];
			img2.at<Vec3b>(2 * i, 2 * j)[2] = img1.at<Vec3b>(i, j)[2];
			img2.at<Vec3b>(2 * i + 1, 2 * j)[2] = img1.at<Vec3b>(i, j)[2];
			img2.at<Vec3b>(2 * i, 2 * j + 1)[2] = img1.at<Vec3b>(i, j)[2];
			img2.at<Vec3b>(2*i+1, 2 * j + 1)[2] = img1.at<Vec3b>(i, j)[2];
		}
	}
	imshow("Final", img2);
	waitKey(0);
	return 0;
}*/