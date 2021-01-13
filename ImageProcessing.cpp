// ImageProcessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	string name = "IMAGE-press any key to exit";
	Mat img = imread("lena.jpg");
	if (img.empty())
	{
		cout << "\n\nERROR LOADING IMAGE!" << endl;
		cin.get();
		return -1;
	}
	cout << "DISPLAYING IMAGE!" << endl;
	namedWindow(name, WINDOW_NORMAL);
	imshow(name, img);
	waitKey(0);
	destroyWindow(name);
	rotate(img, img, ROTATE_90_CLOCKWISE);
	namedWindow(name, WINDOW_NORMAL);
	imshow(name, img);
	waitKey(0);
	destroyWindow(name);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
