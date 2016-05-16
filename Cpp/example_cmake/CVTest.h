#ifndef CV_TEST_H_
#define CV_TEST_H_

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"

using namespace cv;

namespace CVTEST
{
    void ShowImage();
    void DrawTextTest();
    void drawText(Mat & image);
}

#endif
