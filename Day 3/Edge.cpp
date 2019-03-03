#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include<math.h>

using namespace std;
using namespace cv;
/*
int main()
{
	int i, j, p, q;
	float gx = 0;
	float gy = 0;
	/*int kx[3][3] = { { -1, 0, 1 },
	{ -2, 0, 2 },
	{ -1, 0, 1 } };
	int ky[3][3] = { {1, 2, 1 },
	{ 0, 0, 0 },
	{ -1, -2, -1 } };*/

	/*int kx[3][3];

	kx[0][0] = -1;
	kx[0][1] = 0;
	kx[0][2] = 1;
	kx[1][0] = -2;
	kx[1][1] = 0;
	kx[1][2] = 2;
	kx[2][0] = -1;
	kx[2][1] = 0;
	kx[2][2] = 1;

	int ky[3][3];

	ky[0][0] = 1;
	ky[0][1] = 2;
	ky[0][2] = 1;
	ky[1][0] = 0;
	ky[1][1] = 0;
	ky[1][2] = 0;
	ky[2][0] = -1;
	ky[2][1] = -2;
	ky[2][2] = -1;

	Mat img = imread("pic.PNG", 0);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);

	Mat imgf(img.rows, img.cols, CV_8UC3, Scalar(0, 0, 0));

	namedWindow("Final", WINDOW_AUTOSIZE);

	for (i = 1; i < img.rows - 1; i++)
	{
		for (j = 1; j < img.cols - 1; j++)
		{
			grx = 0;
			for (p = 0; p < 3; p++)
			{
				for (q = 0; q < 3; q++)
				{
					grx = grx + kx[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[2]);
					ggx = ggx + kx[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[1]);
					gbx = gbx + kx[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[0]);

					gry = gry + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[2]);
					ggy = ggy + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[1]);
					gby = gby + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[0]);
				}
			}

			float gr = sqrt(grx*grx + gry*gry);
			float gg = sqrt(ggx*ggx + ggy*ggy);
			float gb = sqrt(gbx*gbx + gby*gby);

			if (gr > 255)
				gr = 255;
			if (gg > 255)
				gg = 255;
			if (gb > 255)
				gb = 255;

			imgf.at<Vec3b>(i, j)[2] = (int)gr;
			imgf.at<Vec3b>(i, j)[1] = (int)gg;
			imgf.at<Vec3b>(i, j)[0] = (int)gb;
		}
	}

	imshow("Final", imgf);
	waitKey(0);
	return 0;
}*/
