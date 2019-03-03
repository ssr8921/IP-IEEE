#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
/*
using namespace cv;
using namespace std;

int main()
{
Mat var1(400,400, CV_8UC1, Scalar(0));
for (int i = 0; i < var1.cols; i++)
{
for (int j = 0; j < var1.rows; j++)
{
if ((i/40) % 2 == 0)
{
if ((j/40) % 2 != 0)
(var1.at<uchar>(j, i)) = 255;
}
else
{
if ((j/40) % 2 == 0)
(var1.at<uchar>(j, i)) = 255;
}
}
}
namedWindow("windows1", WINDOW_AUTOSIZE);
imshow("windows1", var1);
waitKey(0);

return 0;
}
*/