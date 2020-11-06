//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat desMat;
//	cv::Mat scrMat = cv::imread("C://Users//Lenovo//source//repos//11.6//1.jpg");
//	if (scrMat.empty())return -1;
//
//	float angle = 10.0, scale = 1;
//
//	cv::Point2f center(scrMat.cols * 0.5, scrMat.rows * 0.5);
//
//	const cv::Mat affine_matrix = cv::getRotationMatrix2D(center, angle, scale);
//	cv::warpAffine(scrMat, desMat, affine_matrix, scrMat.size());
//
//	cv::imshow("scr", scrMat);
//	cv::imshow("des", desMat);
//	cv::waitKey(0);
//}