#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;
using namespace std;
/*
int main()
{
	Mat img = imread("pic.PNG", 1);
	Mat fimg(img.rows, img.cols, CV_8UC3, Scalar(0, 0, 0));
	int i, j, a, b, c, r, sumB, sumG, sumR;
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

	for (i = 0; i < img.rows; i++)
	{

		for (j = 0; j < img.cols; j++)
		{
			fimg.at <Vec3b>(i,j)[0] = img.at <Vec3b>(i,j)[0];
			fimg.at <Vec3b>(i,j)[1] = img.at <Vec3b>(i,j)[1];
			fimg.at <Vec3b>(i,j)[2] = img.at <Vec3b>(i,j)[2];
		}
	}
	
		for (i = 1; i < img.rows - 1; i++)
		{

			for (j = 1; j < img.cols - 1; j++)
			{

				int mb = 0, mg = 0, mr = 0;

				for (r = i - 1; r < i + 2; r++)
				{
					for (c = j - 1; c < j + 2; c++)
					{

						mb = mb + ker[r - i + 1][c - j + 1] * img.at <Vec3b>(r, c)[0];
						mg = mg + ker[r - i + 1][c - j + 1] * img.at <Vec3b>(r, c)[1];
						mr = mr + ker[r - i + 1][c - j + 1] * img.at <Vec3b>(r, c)[2];
					}
				}


				mb = mb / 16;
				mr = mr / 16;
				mg = mg / 16;


				fimg.at <Vec3b>(i,j)[0] = mb;
				fimg.at <Vec3b>(i, j)[1] = mg;
				fimg.at <Vec3b>(i, j)[2] = mr;


			}
		}
	
	namedWindow("window2", WINDOW_AUTOSIZE);
	imshow("window2", img);

	namedWindow("window1", WINDOW_AUTOSIZE);
	imshow("window1", fimg);

	waitKey(0);
}*/
