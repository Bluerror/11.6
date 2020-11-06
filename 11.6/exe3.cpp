//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat desMat;
//	cv::Mat srcMat = cv::imread("C://Users//Lenovo//source//repos//11.6//1.jpg");
//	if (srcMat.empty())return -1;
//
//	const cv::Point2f src_pt[] = {
//		cv::Point2f(200,200),
//		cv::Point2f(250,200),
//		cv::Point2f(200, 100)
//	};
//	const cv::Point2f des_pt[] = {
//		cv::Point2f(300,100),
//		cv::Point2f(300,50),
//		cv::Point2f(200, 100)
//	};
//
//	const cv::Mat affine_matrix = cv::getAffineTransform(src_pt, des_pt);
//	cv::warpAffine(srcMat, desMat, affine_matrix, srcMat.size());
//
//	cv::imshow("scr", srcMat);
//	cv::imshow("des", desMat);
//	cv::waitKey(0);
//}