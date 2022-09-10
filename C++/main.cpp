#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a11,a12,a13,a14,a21,a22,a23,a24,a31,a32,a33,a34,a41,a42,a43,a44;
    float dp1,dp2,dp3,ds1,ds2,ds3,D11,D21,D31,D41;
    float b11,b21,b31,b41,det;

    cout << "                        " << endl;
    cout << "   a11   a12   a13   a14" << endl;
    cout << "   a21   a22   a23   a24" << endl;
    cout << "   a31   a32   a33   a34" << endl;
    cout << "   a41   a42   a43   a44" << endl;
    cout << "                        " << endl;
    cout << "------------------------" << endl;
    cout << "Digite o valor de a11, a12, a13, a14, respectivamente: " << endl;
    cin >>a11>>a12>>a13>>a14;
    cout << "Digite o valor de a21, a22, a23, a24, respectivamente: " << endl;
    cin >>a21>>a22>>a23>>a24;
    cout << "Digite o valor de a31, a32, a33, a34, respectivamente: " << endl;
    cin >>a31>>a32>>a33>>a34;
    cout << "Digite o valor de a41, a42, a43, a44, respectivamente: " << endl;
    cin >>a41>>a42>>a43>>a44;

    //calcular o menor complementar D11
    dp1 = a22*a33*a44;
    dp2 = a23*a34*a42;
    dp3 = a24*a32*a43;
    ds1 = a24*a33*a42;
    ds2 = a22*a34*a43;
    ds3 = a23*a32*a44;
    D11 = dp1+dp2+dp3-(ds1+ds2+ds3);

    //calcular o menor complementar D21
    dp1 = a12*a33*a44;
    dp2 = a13*a34*a42;
    dp3 = a14*a32*a43;
    ds1 = a14*a33*a42;
    ds2 = a12*a34*a43;
    ds3 = a13*a32*a44;
    D21 = dp1+dp2+dp3-(ds1+ds2+ds3);

    //calcular o menor complementar D31
    dp1 = a12*a23*a44;
    dp2 = a13*a24*a42;
    dp3 = a14*a22*a43;
    ds1 = a14*a23*a42;
    ds2 = a12*a24*a43;
    ds3 = a13*a22*a44;
    D31 = dp1+dp2+dp3-(ds1+ds2+ds3);

    //calcular o menor complementar D41
    dp1 = a12*a23*a34;
    dp2 = a13*a24*a32;
    dp3 = a14*a22*a33;
    ds1 = a14*a23*a32;
    ds2 = a12*a24*a33;
    ds3 = a13*a22*a34;
    D41 = dp1+dp2+dp3-(ds1+ds2+ds3);

    b11 = a11*pow(-1,1+1)*D11;
    b21 = a21*pow(-1,1+2)*D21;
    b31 = a31*pow(-1,3+1)*D31;
    b41 = a41*pow(-1,4+1)*D41;

    det = b11+b21+b31+b41;

    cout << "O valor da determinante eh: " << det;

    return 0;
}
