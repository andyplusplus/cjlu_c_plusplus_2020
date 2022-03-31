
class complex	//复数类声明
{
public:
	//构造函数
	complex(double r = 0.0, double i = 0.0) 
	{
		real = r;  imag = i;
	}

	void display() {};	//显示复数的值
private:
	double real;
	double imag;
};