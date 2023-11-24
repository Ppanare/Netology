#include "Triangle_h.h"
#include "CorrectTriangle.h"
#include "RavnTriangle.h"
#include "PryamoUgolnik.h"
#include "Square.h"

void out(Triangle &inf){
	inf.print_information();
}


int main()
{
Triangle triangle(10,20,30,60,60,60);
out(triangle);
CorrectTriangle correctTriangle(10,20,30,45,45);
out(correctTriangle);
RavnTriangle ravnTriangle(10,20,60,60);
out(ravnTriangle);
PryamoUgolnik pryamoUgolnik(10,20,30,40,90,90,90,90);
out(pryamoUgolnik);	
Square square(20,90);
out(square);
}