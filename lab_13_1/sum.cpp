#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	Pi = 4 * atan(1.0);
	n = 0;
	a = -1/x;
	s = (Pi/2)+a;
	do {
		n++;
		dod(); // ������ ��������� ���������� �������
		s += a;
	} while (fabs(a) > atan(x));
}