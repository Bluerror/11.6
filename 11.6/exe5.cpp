#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	cv::Mat desMat;
	cv::Mat srcMat = cv::imread("C://Users//Lenovo//source//repos//11.6//1.jpg");
	if (srcMat.empty())return -1;

	const cv::Point2f src_pt[] = {
		cv::Point2f(150,150),
		cv::Point2f(150,300),
		cv::Point2f(350, 300),
		cv::Point2f(350,150)
	};
	const cv::Point2f des_pt[] = {
		cv::Point2f(200,150),
		cv::Point2f(200,300),
		cv::Point2f(340, 270),
		cv::Point2f(340,180)
	};

	const cv::Mat perspective_matrix= cv::getPerspectiveTransform(src_pt, des_pt);
	cv::warpPerspective(srcMat, desMat, perspective_matrix, srcMat.size());

	cv::imshow("scr", srcMat);
	cv::imshow("des", desMat);
	cv::waitKey(0);
}