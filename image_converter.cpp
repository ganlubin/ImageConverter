#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " input_image output_image output_format" << std::endl;
        return 1;
    }

    // 读取输入图片
    cv::Mat input_image = cv::imread(argv[1]);
    if (input_image.empty()) {
        std::cerr << "Could not open or find the input image." << std::endl;
        return 2;
    }

    // 提取输出格式
    std::string output_format = argv[3];

    // 保存输出图片
    if (cv::imwrite(argv[2], input_image)) {
        std::cout << "Image saved as " << argv[2] << " in " << output_format << " format." << std::endl;
        return 0;
    } else {
        std::cerr << "Could not save the output image." << std::endl;
        return 3;
    }
}

