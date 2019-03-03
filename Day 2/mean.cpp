#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;
/*
int main()
{
	int i, j;
	Mat img = imread("pic.png", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);
	waitKey(0);
	
	namedWindow("Final", WINDOW_AUTOSIZE);

	Mat img1(img.rows, img.cols, CV_8UC3, Scalar(0, 0, 0));
	for (i = 0; i < img.rows; i++)
	{
		for (j = 0; j < img.cols; j++)
		{
			img1.at<Vec3b>(i, j)[2] = img.at<Vec3b>(i, j)[2];
			img1.at<Vec3b>(i, j)[1] = img.at<Vec3b>(i, j)[1];
			img1.at<Vec3b>(i, j)[0] = img.at<Vec3b>(i, j)[0];
		}
	}
	
	
	for (i = 1; i < img.rows - 1; i++)
	{
		for (j = 1; j < img.cols - 1; j++)
		{
			int i1, j1;
			int rmean = 0, gmean = 0, bmean = 0;
			for (i1 = i - 1; i1 <= i + 1; i1++)
			{
				for (j1 = j - 1; j1 <= j + 1; j1++)
				{
					rmean = rmean + img.at<Vec3b>(i1, j1)[2];
					gmean = gmean + img.at<Vec3b>(i1, j1)[1];
					bmean = bmean + img.at<Vec3b>(i1, j1)[0];
				}
			}
			rmean = rmean / 9;
			gmean = gmean / 9;
			bmean = bmean / 9;
			img1.at<Vec3b>(i, j)[2] = rmean;
			img1.at<Vec3b>(i, j)[1] = gmean;
			img1.at<Vec3b>(i, j)[0] = bmean;
		}
	}
	imshow("Final", img1);
	waitKey(0);

	return 0;

}*/