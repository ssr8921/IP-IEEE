#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include<stack>
#include<iostream>

using namespace cv;
using namespace std;
Mat var1 = imread("asg.jpg", 1);
Mat var3(var1.rows, var1.cols, CV_8UC3, Scalar(255, 255, 255));

void displayimage(Mat image, String windowname)
{
	imshow(windowname, image);
}

stack<Point2d>S;
Point2d p;
void fill_bucket(int x, int y)
{
	int i = y;
	int j = x;


	p.x = i;
	p.y = j;
	S.push(p);

	while (S.empty() != 1)
	{
		Point2d g;
		Point2d a = S.top();
		S.pop();
		var1.at<Vec3b>(a.x, a.y)[2] = 0;
		var1.at<Vec3b>(a.x, a.y)[0] = 255;
		var1.at<Vec3b>(a.x, a.y)[1] = 0;
		int l, m, flag = 0;
		for (int l = a.x - 1; l < a.x + 2; l++)
		{
			for (m = a.y - 1; m < a.y + 2; m++)
			{
				if (l>0 && l <= var1.rows&&m > 0 && m <= var1.cols)
				{
					if (var1.at<Vec3b>(l, m)[0] == 0 && var1.at<Vec3b>(l, m)[1] == 0 && var1.at<Vec3b>(l, m)[2] == 0)
					{
						break;
					}
					else if (var1.at<Vec3b>(l, m)[0] == 255 && var1.at<Vec3b>(l, m)[1] == 255 && var1.at<Vec3b>(l, m)[2] == 255)

					{
						p.x = l;
						p.y = m;
						S.push(p);
					}
				}
			}
		}

	}

	displayimage(var1, "windows1");
}


void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		cout << "left button of mouse is clicked-position(" << x << "," << y << ")" << endl;
		fill_bucket(x, y);

	}
	if (event == EVENT_RBUTTONDOWN)
	{
		cout << "right button of mouse is clicked-position(" << x << "," << y << ")" << endl;
		fill_bucket(x, y);
	}
}

int main()
{
	namedWindow("windows1", WINDOW_AUTOSIZE);
	setMouseCallback("windows1", CallBackFunc, NULL);
	displayimage(var1, "windows1");
	waitKey(0);

	return 0;
}