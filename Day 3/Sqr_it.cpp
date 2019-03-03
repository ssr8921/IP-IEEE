#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

int main()
{
	int i, j;
	Mat img(200, 200, CV_8UC3, Scalar(0, 0, 0));

	for (i = 0; i < img.rows; i++)
	{
		for (j = 0; j < img.cols; j++)
		{
			if (i < j && i + j < 200)
			{
				img.at<Vec3b>(i, j)[2] = 255;
				img.at<Vec3b>(i, j)[1] = 0;
				img.at<Vec3b>(i, j)[0] = 0;
			}
			if (i < j && i + j > 200)
			{
				img.at<Vec3b>(i, j)[2] = 0;
				img.at<Vec3b>(i, j)[1] = 255;
				img.at<Vec3b>(i, j)[0] = 0;
			}
			if (i > j && i + j < 200)
			{
				img.at<Vec3b>(i, j)[2] = 0;
				img.at<Vec3b>(i, j)[1] = 0;
				img.at<Vec3b>(i, j)[0] = 255;
			}
			if (i > j && i + j > 200)
			{
				img.at<Vec3b>(i, j)[2] = 255;
				img.at<Vec3b>(i, j)[1] = 255;
				img.at<Vec3b>(i, j)[0] = 255;
			}

			if (i== 0 || j== 0 || i==199 || j==199 || i+j == 199 || i== j )
			{
				img.at<Vec3b>(i, j)[2] = 0;
				img.at<Vec3b>(i, j)[1] = 0;
				img.at<Vec3b>(i, j)[0] = 0;
			}
		}
	}
	namedWindow("Sqr", WINDOW_AUTOSIZE);
	imshow("Sqr", img);
	waitKey(0);

}