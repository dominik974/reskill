#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
    private:
        double width_;
        double height_;
    public:
        Rectangle();

        Rectangle(double w, double h);

        void setDimensions(double w, double h);

        double calculateArea() const;
};

#endif // RECTANGLE_H_