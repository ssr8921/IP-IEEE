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
	int grx=0, ggx=0, gbx=0;
	int gry=0, ggy=0, gby=0;
	int kx[3][3] = { ( -1, 0, 1 ),
	                 ( -2, 0, 2 ),
	                 ( -1, 0, 1 )};
	int ky[3][3] = { ( 1, 2, 1),
		             ( 0, 0, 0),
		             (-1,-2,-1) };
	Mat img = imread("pic.PNG", 1);
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", img);
	waitKey(0);
	
	Mat imgf(img.rows, img.cols, CV_8UC3, Scalar(0, 0, 0));
	for (i = 0; i < img.rows; i++)
	{
		for (j = 0; j < img.cols; j++)
		{
			imgf.at<Vec3b>(i, j)[2] = img.at<Vec3b>(i, j)[2];
			imgf.at<Vec3b>(i, j)[1] = img.at<Vec3b>(i, j)[1];
			imgf.at<Vec3b>(i, j)[0] = img.at<Vec3b>(i, j)[0];
		}
	}

	namedWindow("Final", WINDOW_AUTOSIZE);
	
	for (i = 1; i < img.rows-1; i++)
	{
		for (j = 1; j < img.cols - 1; j++)
		{
			for (p = 0; p < 3; p++)
			{
				for (q = 0; q < 3;q++)
				{
					grx = grx + kx[p][q] * (img.at<Vec3b>(i-1+p,j-1+q )[2]);
					ggx = ggx + kx[p][q] * (img.at<Vec3b>(i-1+p, j-1+q)[1]);
					gbx = gbx + kx[p][q] * (img.at<Vec3b>(i-1+p, j-1+q)[0]);

					gry = gry + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[2]);
					ggy = ggy + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[1]);
					gby = gby + ky[p][q] * (img.at<Vec3b>(i - 1 + p, j - 1 + q)[0]);
				}

			}
			int gr = sqrt(grx*grx + gry*gry);
			int gg = sqrt(ggx*ggx + ggy*ggy);
			int gb = sqrt(gbx*gbx + gby*gby);

			if (gr > 255) gr = 255;
			if (gg > 255) gg = 255;
			if (gb > 255) gb = 255;

			imgf.at<Vec3b>(i, j)[2] = gr;
			imgf.at<Vec3b>(i, j)[1] = gg;
			imgf.at<Vec3b>(i, j)[0] = gb;
		}
	}

	imshow("Final", imgf);
	waitKey(0);
	return 0;
}**/
