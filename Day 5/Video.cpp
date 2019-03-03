#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include<math.h>

using namespace std;
using namespace cv;

/// Global variables
/*Mat src, src_gray;
Mat dst, detected_edges;

int edgeThresh = 1;
int lowThreshold;
int const max_lowThreshold = 100;
int ratio = 3;
int kernel_size = 3;
char* window_name = "Edge Map";

void CannyThreshold(int, void*)
{
	/// Reduce noise with a kernel 3x3
	blur(src_gray, detected_edges, Size(3, 3));

	/// Canny detector
	Canny(detected_edges, detected_edges, lowThreshold, lowThreshold*ratio, kernel_size);

	/// Using Canny's output as a mask, we display our result
	dst = Scalar::all(0);

	src.copyTo(dst, detected_edges);
	imshow(window_name, dst);
}


int main()
{
	VideoCapture a(0);

	Mat img(1280, 720, CV_8UC3, Scalar(0,0,0));

	//namedWindow("Video", WINDOW_AUTOSIZE);

	while (a.isOpened())
	{
		a >> src;

		if (!src.data)
		{
			return -1;
		}

		/// Create a matrix of the same type and size as src (for dst)
		dst.create(src.size(), src.type());

		/// Convert the image to grayscale
		cvtColor(src, src_gray, CV_BGR2GRAY);

		/// Create a window
		namedWindow(window_name, CV_WINDOW_AUTOSIZE);

		/// Create a Trackbar for user to enter threshold
		createTrackbar("Min Threshold:", window_name, &lowThreshold, max_lowThreshold, CannyThreshold);

		/// Show the image
		CannyThreshold(0, 0);

		/// Wait until user exit program by pressing a key
		waitKey(30);

	/*	imshow("Video", img);
		waitKey(30);*/
/*	}


	return 0;
}*/