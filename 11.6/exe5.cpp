#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	cv::Mat desMat;
	cv::Mat srcMat = cv::imread("C://Users//Lenovo//source//repos//11.6//1.jpg",0);
	if (srcMat.empty())return -1;

	int height = srcMat.rows;
	int width = srcMat.cols;

	int a=0;
	int b=0;
	int c=0;

   for (int j = 0; j < height; j++)
	{
			if (srcMat.at<uchar>(j,0) < 230)  a = j;
	}
	for (int i = 0; i < width; i++)
	{
			if (srcMat.at<uchar>(0,i) < 230) b = i;
	}
	for (int i = 0; i < width; i++)
		{
			if (srcMat.at<uchar>(height, i) < 240)  c= i;
		}
	
    

const cv::Point2f src_pt[] = {
							   cv::Point2f(a ,0),
							   cv::Point2f(0,b),
							   cv::Point2f(width - 1,c) };

const cv::Point2f dst_pt[] = { cv::Point2f(0,srcMat.rows),
							  cv::Point2f(0,0),
							  cv::Point2f(srcMat.rows - 1,0) };

const cv::Mat affine_matrix = cv::getAffineTransform(src_pt, dst_pt);

cv::warpAffine(srcMat, desMat, affine_matrix, srcMat.size());

    cv::imshow("scr", srcMat);
    cv::imshow("des", desMat);
   cv::waitKey(0);
}