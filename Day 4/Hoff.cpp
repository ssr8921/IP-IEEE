#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main()
{
	Mat var1 = imread("rect.PNG", 0);
	namedWindow("windows1", WINDOW_AUTOSIZE);
	int k[3][3];
	int i, j, p, q, r = 0;
	Mat var2(var1.rows, var1.cols, CV_8UC1, Scalar(0));
	k[0][0] = 1; k[0][1] = 2; k[0][2] = 1; k[1][0] = 2; k[1][1] = 4; k[1][2] = 2; k[2][0] = 1; k[2][1] = 2; k[2][2] = 1;
	for (i = 0; i < var1.rows; i++)
	{
		for (j = 0; j < var1.cols; j++)
		{
			var2.at<uchar>(i, j) = var1.at<uchar>(i, j);
		}
	}
	for (i = 1; i < var1.rows - 1; i++)
	{
		for (j = 1; j < var1.cols - 1; j++)
		{
			for (p = i - 1; p <= i + 1; p++)
			{

				for (q = j - 1; q <= j + 1; q++)
				{
					r = r + (var1.at<uchar>(p, q))*k[(p - i + 1)][(q - j + 1)];
				}
			}
			r = r / 16;

			if (r <= 255 && r >= 0)
			{
				var2.at<uchar>(i, j) = r;

			}
			else
				r = 0;
		}

	}
	Mat var3(var2.rows, var2.cols, CV_8UC1, Scalar(0));
	int  a, b, c, sumB1, sumG1, sumR1, sumB2, sumG2, sumR2;
	int ker1[3][3];
	int ker2[3][3];

	ker1[0][0] = -1;
	ker1[0][1] = 0;
	ker1[0][2] = 1;
	ker1[1][0] = 0;
	ker1[1][1] = 0;
	ker1[1][2] = 0;
	ker1[2][0] = 0;
	ker1[2][1] = 0;
	ker1[2][2] = 0;

	ker2[0][0] = 1;
	ker2[0][1] = 0;
	ker2[0][2] = 0;
	ker2[1][0] = 0;
	ker2[1][1] = 0;
	ker2[1][2] = 0;
	ker2[2][0] = -1;
	ker2[2][1] = 0;
	ker2[2][2] = 0;

	for (i = 0; i < var2.cols; i++)
	{

		for (j = 0; j < var2.rows; j++)
		{
			var3.at <uchar>(j, i) = var2.at < uchar>(j, i);
		}
	}

	for (i = 1; i < var2.cols - 1; i++)
	{

		for (j = 1; j < var2.rows - 1; j++)
		{
			int mb1 = 0, mg1 = 0, mr1 = 0, mb2 = 0, mg2 = 0, mr2 = 0;

			for (r = i - 1; r < i + 2; r++)
			{
				for (c = j - 1; c < j + 2; c++)
				{
					sumB1 = ker1[c - j + 1][r - i + 1] * var2.at <uchar>(c, r);

					mb1 = mb1 + sumB1;

					sumB2 = ker2[c - j + 1][r - i + 1] * var2.at <uchar>(c, r);

					mb2 = mb2 + sumB2;
				}
			}

			int mg, mb, mr;
			mb = sqrt(mb1 * mb1 + mb2 * mb2) / 2;



			if (mb < 0) mb = 0;
			if (mb > 255) mb = 255;
			var3.at <uchar>(j, i) = mb;


		}
	}
	int low = 10;
	//createTrackbar("track1", "windows1", &low, 255);
	Mat var4(var1.rows, var1.cols, CV_8UC1, Scalar(0));

	for (i = 0; i < var3.rows; i++)
	{
		for (j = 0; j < var3.cols; j++)
		{
			var4.at <uchar>(i, j) = var3.at <uchar>(i, j);
			if (var3.at <uchar>(i, j) < 255)
				var4.at <uchar>(i, j) = var3.at <uchar>(i, j);
			else
				var4.at <uchar>(i, j) = 0;
		}
	}
	imshow("windows1", var4);
	waitKey(0);

	int T = 15;
	Mat bgimg(var4.rows, var4.cols, CV_8UC1, Scalar(0));
	for (i = 0; i < var4.rows; i++)
	{
		for (j = 0; j <var4.cols; j++)
		{
			if (T > var4.at<uchar>(i, j))
			{
				bgimg.at<uchar>(i, j) = 0;
			}
			else
			{
				bgimg.at<uchar>(i, j) = 255;
			}
		}
	}

	namedWindow("BinaryImg", WINDOW_AUTOSIZE);
	imshow("BinaryImg", bgimg);
	//waitKey(0);

	int pnts[201][201];
	int val[290][182];

	for (i = 0; i < 201; i++)
	{
		for (j = 0; j < 201; j++)
		{
			pnts[i][j] = 0;
		}
	}
	for (i = 0; i < 290; i++)
	{
		for (j = 0; j < 182; j++)
		{
			val[i][j] = 0;
		}
	}

	for (i = 0; i < bgimg.rows; i++)
	{
		for (j = 0; j < bgimg.cols; j++)
		{
			if (bgimg.at<uchar>(i, j) == 255)
				pnts[i][j] = 1;
		}
	}
	int ri = sqrt(bgimg.rows*var4.rows + bgimg.cols*var4.cols);
	Mat final(bgimg.rows, bgimg.cols, CV_8UC1, Scalar(0));
	int d, teta, thr = 6;
	int rad;
	for (rad = 0; rad < ri+ 1; rad++)
	{
		for (teta = 0; teta < 180 + 2; teta++)
		{
			for (i = 0; i < bgimg.rows; i++)
			{
				for (j = 0; j < bgimg.cols; j++)
				{
					if (pnts[i][j] = 1)
					{
						float d = i*sin(teta) + j*(tan(teta) - (1 / cos(teta))) + rad;
						if (d < thr)
							val[rad][teta]++;
					}
				}
			}
		}
	}

	for (rad = 0; rad < ri+ 1; rad++)
	{
		for (teta = 0; teta < 180 + 2; teta++)
		{
			int x, y;
			if (val[rad][teta]> 200)
			{
				for (x = 0; i < bgimg.rows; i++)
				{
					y = (i*sin(teta) + rad) / cos(teta);
					final.at<uchar>(x,y) = 255;
				}
			}
		}
	}

	namedWindow("show", WINDOW_AUTOSIZE);
	imshow("show", final);
	waitKey(0);

	return (0);
}*/

