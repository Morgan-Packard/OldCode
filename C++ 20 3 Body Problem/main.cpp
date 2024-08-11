#include <iostream>
#include <string>
#include <math.h>

class PointMass {
        double x, y, vx, vy;
    public:
        void setValues (double, double, double, double);
        double getAcceleration (PointMass, PointMass, bool); //true = x false = y
        double getXValue () {return x;};
        double getYValue () {return y;};
        double getVXValue () {return vx;};
        double getVYValue () {return vy;};
};

void PointMass::setValues (double xin, double yin, double vxin, double vyin) {
    x = xin;
    y = yin;
    vx = vxin;
    vy = vyin;
}

double PointMass::getAcceleration (PointMass oth1, PointMass oth2, bool xTrueYFalse) {
    double xRatio = (oth1.getXValue() + oth2.getXValue())/2-x;
    double yRatio = (oth1.getYValue() + oth2.getYValue())/2-y;
    double acc = (100)/(xRatio*xRatio + yRatio*yRatio);
    if (xTrueYFalse) {
        return (sqrt((acc*acc)/((1+(yRatio*yRatio))/(xRatio*xRatio))));
    } else {
        return (sqrt((acc*acc)/((1+(xRatio*xRatio))/(yRatio*yRatio))));
    }
}

int main(){
    int endTime, deltaT;
    PointMass massA, massB, massC;
    massA.setValues(10, 50, 0, 0);
    massB.setValues(40, 0, 0, 0);
    massC.setValues(-60, 0, 0, 0);
    std::cin >> deltaT >> endTime;
    for (int t = 0; t < endTime; t += deltaT)
    {
        std::cout << std::to_string(t) + "a: (" + std::to_string(massA.getXValue()) + ", " + std::to_string(massA.getYValue()) + ") ";
        std::cout << "b: (" + std::to_string(massB.getXValue()) + ", " + std::to_string(massB.getYValue()) + ") ";
        std::cout << "c: (" + std::to_string(massC.getXValue()) + ", " + std::to_string(massC.getYValue()) + ") " << std::endl;
        massA.setValues(massA.getXValue() + massA.getVXValue() * deltaT, massA.getYValue() + massA.getVYValue() * deltaT, massA.getVXValue() + massA.getAcceleration(massB, massC, true) * deltaT, massA.getVYValue() + massA.getAcceleration(massB, massC, false) * deltaT);
        massB.setValues(massB.getXValue() + massB.getVXValue() * deltaT, massB.getYValue() + massB.getVYValue() * deltaT, massB.getVXValue() + massB.getAcceleration(massA, massC, true) * deltaT, massB.getVYValue() + massB.getAcceleration(massA, massC, false) * deltaT);
        massC.setValues(massC.getXValue() + massC.getVXValue() * deltaT, massC.getYValue() + massC.getVYValue() * deltaT, massC.getVXValue() + massC.getAcceleration(massA, massB, true) * deltaT, massC.getVYValue() + massC.getAcceleration(massA, massB, false) * deltaT);
    }
}