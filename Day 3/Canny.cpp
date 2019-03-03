#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "math.h"
using namespace cv;
using namespace std;
/*
int main()
{
	int r, g, b, i, j, grey, c;
	Mat img = imread("pic.PNG", 1);
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

	Mat fimg(img.rows, img.cols, CV_8UC1, Scalar(0));
	int ker[3][3];

	ker[0][0] = 1;
	ker[0][1] = 2;
	ker[0][2] = 1;
	ker[1][0] = 2;
	ker[1][1] = 4;
	ker[1][2] = 2;
	ker[2][0] = 1;
	ker[2][1] = 2;
	ker[2][2] = 1;

	for (i = 0; i < gimg.rows; i++)
	{

		for (j = 0; j < gimg.cols; j++)
		{
			fimg.at <uchar>(i, j) = gimg.at <uchar>(i, j);
		}
	}

	for (i = 1; i < gimg.rows - 1; i++)
	{

		for (j = 1; j < gimg.cols - 1; j++)
		{
			int m = 0;

			for (r = i - 1; r < i + 2; r++)
			{
				for (c = j - 1; c < j + 2; c++)
				{

					m = m + ker[r - i + 1][c - j + 1] * gimg.at <uchar>(r, c);
				}
			}


			m = m / 16;

			fimg.at <uchar>(i, j) = m;

		}
	}
	namedWindow("Gaussian", WINDOW_AUTOSIZE);
	imshow("Gaussian", fimg);
	waitKey(0);

	Mat simg(fimg.rows, fimg.cols, CV_8UC1, Scalar(0));
	int ker1[3][3];
	int ker2[3][3];

	ker1[0][0] = -1;
	ker1[0][1] = 0;
	ker1[0][2] = 1;
	ker1[1][0] = -2;
	ker1[1][1] = 0;
	ker1[1][2] = 2;
	ker1[2][0] = -1;
	ker1[2][1] = 0;
	ker1[2][2] = 1;

	ker2[0][0] = 1;
	ker2[0][1] = 2;
	ker2[0][2] = 1;
	ker2[1][0] = 0;
	ker2[1][1] = 0;
	ker2[1][2] = 0;
	ker2[2][0] = -1;
	ker2[2][1] = -2;
	ker2[2][2] = -1;


	for (i = 1; i < fimg.cols - 1; i++)
	{

		for (j = 1; j < fimg.rows - 1; j++)
		{

			
			int m1 = 0, m2 = 0;
			for (r = i - 1; r < i + 2; r++)
			{
				for (c = j - 1; c < j + 2; c++)
				{

					m1 = m1 + ker1[c - j + 1][r - i + 1] * fimg.at <uchar>(c, r);
					m2 = m2 + ker2[c - j + 1][r - i + 1] * fimg.at <uchar>(c, r);

				}
			}
			double teta, m, param;
			 m = sqrt(m1 * m1 + m2 * m2);
			if (m1 == 0)
			{
				teta = 90;
			}
			else
			{
				param = m2 / m1;
				teta = atan(param) * 180 * 7 / 22;
			}

			if (122.5 < teta)
			{

				teta = 135;
				if (fimg.at <uchar>(j - 1, i - 1)< m && m>fimg.at <uchar>(j + 1, i + 1))
					m = 255;
				else 
					m = 0;
			}
			else if (0 < teta && teta < 22.5)
			{
				teta = 0;
				if (fimg.at <uchar>(j, i - 1)< m && m>fimg.at <uchar>(j, i + 1))
					m = 255;
				else m = 0;
			}
			else if (22.5 < teta && teta < 67.5)
			{
				teta = 45;
				if (fimg.at <uchar>(j + 1, i - 1)< m && m>fimg.at <uchar>(j - 1, i + 1))
					m = 255;
				else
					m = 0;
			}
			else if (67.5 < teta && teta < 122.5)
			{
				teta = 90;
				if (fimg.at <uchar>(j -1, i)< m && m>fimg.at <uchar>(j +1, i))
					m = 255;
				else
					m = 0;
			}

		simg.at <uchar>(j, i) = (int)m;

		}
	}
	namedWindow("Canny", WINDOW_AUTOSIZE);
	imshow("Canny", simg);
	waitKey(0);

	return 0;
}*/

