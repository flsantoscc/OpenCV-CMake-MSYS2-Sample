#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/ml.hpp>
#include <opencv2/highgui.hpp>

int main(){
    cv::Mat image = cv::imread("opencv.jpg");
    cv::imshow("opencv.jpg",image);
    cv::waitKey(0);

    return 0;
}
