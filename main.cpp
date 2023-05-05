#include "base.h"
#include "d1.h"
#include "d11.h"
#include "d2.h"
#include "d21.h"
#include "d22.h"

#include "d11v.h"
#include "d1v.h"
#include "d21v.h"
#include "d22v.h"
#include "d2v.h"
#include <iostream>

#include "Task2.h"
#include "Task3.h"

using namespace std;

int main() {

  // TASK 1.8

  D11 threeD11(1, 2, 3);
  D11 fourD11(1, 2, 3, 4);
  D22 threeD22(1, 2, 3);
  D22 fourD22(1, 2, 3, 4);
  cout << "D11-D21-D2-Base size: " << sizeof(fourD11) << endl;
  cout << "D11-D1-Base: " << sizeof(threeD11) << endl;
  cout << "D22-D21-D2-Base size: " << sizeof(fourD22) << endl;
  cout << "D22-D2-Base size: " << sizeof(threeD11) << endl;
  threeD11.showDat();
  cout << endl;
  fourD11.showDat();
  cout << endl;
  threeD22.showDat();
  cout << endl;
  fourD22.showDat();
  cout << endl;

  D11 threeD11V(1, 2, 3);
  D11 fourD11V(1, 2, 3, 4);
  D22 threeD22V(1, 2, 3);
  D22 fourD22V(1, 2, 3, 4);
  cout << "D11V-D21V-D2V-Base size: " << sizeof(fourD11) << endl;
  cout << "D11V-D1V-Base size: " << sizeof(threeD11) << endl;
  cout << "D22V-D21V-D2V-Base size: " << sizeof(fourD22) << endl;
  cout << "D22V-D2V-Base size: " << sizeof(threeD11) << endl;
  threeD11V.showDat();
  cout << endl;
  fourD11V.showDat();
  cout << endl;
  threeD22V.showDat();
  cout << endl;
  fourD22V.showDat();
  cout << endl;

  // TASK 2.8
  Parallelepiped parallelepiped(2, 3, 4);
  printSurfaceArea(parallelepiped);

  Tetrahedron tetrahedron(5);
  printSurfaceArea(tetrahedron);

  Sphere sphere(6);
  printSurfaceArea(sphere);

  // TASK 3.8
  WaterBody *waterBody = new WaterBody("Lake Ontario", 19.5);
  waterBody->printInfo();
  delete waterBody;

  Bay *bay = new Bay("San Francisco Bay", 1.64, 27.5);
  bay->printInfo();
  delete bay;

  Cove *cove = new Cove("Marina del Rey", 0.67, true);
  cove->printInfo();
  delete cove;

  Sea *sea = new Sea("Mediterranean Sea", 2.5e6, 4.9e3, true);
  sea->printInfo();
  delete sea;
  return 0;
}
