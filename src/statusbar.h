#ifndef STATUSBAR_H
#define STATUSBAR_H

#include "button.h"
#include "image.h"
#include <vector>
#include <string>

class Statusbar {
private:
    float x;
    std::string noticeText;
    std::string activeTabTitle;
    Button *activeTabButton;
    Image *spinnerImage;
    std::vector<Button *> statusbarButtons;
public:
    Statusbar();
    
    bool loading;
    void initialize();
    void destroy();
    void update();
    void draw();
    void setNotice(std::string text);
    void setActiveTab(std::string title);
};

#endif