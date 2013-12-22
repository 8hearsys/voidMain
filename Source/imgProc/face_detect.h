#ifndef FACE_DETECT
#define FACE_DETECT
#include <iostream>
#include <stdio.h>

//OpenCV Headers
#include <opencv/cv.h>
#include <opencv/highgui.h>
//Input-Output
#include <stdio.h>
#include <string>
//Blob Library Headers
#include <cvblob.h>
#include "../common/common.h"

#include <flycapture/FlyCapture2.h>
#include "camcapture.h"


using namespace std;
using namespace cvb;
using namespace cv;

bool tryflip = false;
double scale = 1;

double detectAndDraw( Mat& img, CascadeClassifier& cascade,
                    CascadeClassifier& nestedCascade,
                    double scale, bool tryflip );
double faceDetect(CamCapture &capture);
#endif
