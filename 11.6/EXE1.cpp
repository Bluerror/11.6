//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	VideoCapture cap;
//
//	cap.open(0);
//
//	if (!cap.isOpened())
//	{
//		std::cout << "不能打开视频文件" << std::endl;
//		return -1;
//
//	}
//	double fps = cap.get(CAP_PROP_FPS);
//	std::cout << "fps" << fps << std::endl;
//	while (1)
//	{
//		cv::Mat frame;
//		cv::Mat frame1;
//
//		bool rSucess = cap.read(frame);
//		if (!rSucess)
//		{
//			std::cout << "不能从视频文件中读取数据" << std::endl;
//			break;
//
//		}
//		else
//		{
//			Canny(frame, frame1, 10, 250, 3, false);
//			cv::imshow("frame", frame1);
//		}
//		waitKey(30);
//	}
//}
