#include <math.h>
#include <stdio.h>

int main(void) {
  // aX*X + bX +c = 0
  int a = 1; //=表示赋值,==表示相等
  int b = 2;
  int c = 1;
  //双精度浮点型(double)相比单精度浮点型(float)
  // double占8个字节,float占4个字节,double能存放更加精确的数据
  double delta = 0.0;  // delta存放的是b*b - 4*a*c
  double X1, X2 = 0.0; // X1和X2分别存放一元二次方程的两个解
  delta = b * b - 4 * a * c;
  printf("%lf \n", delta);
  // sqrt是词组squar root的缩写（平方根）
  // sqrt()是<math.h>这个文件提供的函数
  if (delta > 0) {
    //方程有2个相异实数根
    X1 = (-b + sqrt(delta)) / (2 * a);
    X2 = (-b - sqrt(delta)) / (2 * a);
    printf("该一元二次方程有2个不同的解, X1 = %lf, X2 = %lf \n", X1, X2);
  } else if (delta == 0) {
    //方程有2个相等实数根
    X1 = (-b) / (2 * a);
    X2 = X1; //将X1的值赋给X2
    printf("该一元二次方程有1个唯一的解, X1 = X2 = %lf \n", X1);
  } else {
    //方程无实数根
    printf("无实数解");
  }
  return 0;
}