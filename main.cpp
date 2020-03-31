#include <iostream>
#include "View.h"
#include "TextView.h"
#include "Layout.h"
#include "Position.h"
#include "Size.h"

int main() {

    View view(Position(4.42,12.456),Size(6.733,10.844,"test"));
    View view1(Position(2.16,19.133),Size(7.711,11.8232,"test1"));
    View view2(Position(3.94,18.954),Size(8.761,12.825,"test2"));
    View view3(Position(7.88,9.157),Size(9.784,13.85,"test3"));

    TextView textView(Position(1.852,9.963),Size(77.566,68.665,"size"),"textview");
    TextView textView1(Position(2.741,8.357),Size(87.566,78.665,"size1"),"textview1");
    TextView textView2(Position(3.987,7.159),Size(97.566,88.665,"size2"),"textview2");
    TextView textView3(Position(4.123,6.452),Size(107.566,98.665,"size3"),"textview3");
    TextView textView4(Position(5.567,5.256),Size(117.566,108.665,"size4"),"textview4");

    Layout layout;
    layout.addView(&view);
    layout.addView(&view1);
    layout.addView(&view2);
    layout.addView(&view3);
    layout.addView(&textView);
    layout.addView(&textView1);
    layout.addView(&textView2);
    layout.addView(&textView3);
    layout.addView(&textView4);
    layout.draw();
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"------------------------------------------------------------------------------------------------------------------";
    std::cout<<std::endl<<"UPORABA CAPITALIZE"<<std::endl;
    std::cout<<"------------------------------------------------------------------------------------------------------------------";
    std::cout<<std::endl;
    std::cout<<std::endl;
    textView.setCapitalize(false);
    textView1.setCapitalize(true);
    textView2.setCapitalize(false);
    textView3.setCapitalize(true);
    textView4.setCapitalize(false);
    layout.draw();
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"------------------------------------------------------------------------------------------------------------------";
    std::cout<<std::endl<<"UPORABA VISIBLE"<<std::endl;
    std::cout<<"------------------------------------------------------------------------------------------------------------------";
    std::cout<<std::endl;
    std::cout<<std::endl;
    layout.getView(1)->setVisible(false);
    layout.getView(3)->setVisible(false);
    layout.getView(5)->setVisible(false);
    layout.getView(8)->setVisible(false);
    layout.draw();

    return 0;
}
