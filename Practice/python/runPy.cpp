// #include <Python.h>
// #include <stdio.h>

// void main()
// {
//     FILE* file;
//     int argc;
//     wchar_t * argv[3];

//     argc = 3;
//     argv[0] = L"mypy.py";
//     argv[1] = L"-m";
//     argv[2] = L"/tmp/targets.list";

//     Py_SetProgramName(argv[0]);
//     Py_Initialize();
//     PySys_SetArgv(argc, argv);
//     file = fopen("mypy.py","r");
//     PyRun_SimpleFile(file, "mypy.py");
//     Py_Finalize();

//     return;
// }

#include <Python.h>

int main(int argc, wchar_t *argv[])
{
  Py_SetProgramName(argv[0]);  /* optional but recommended */
  Py_Initialize();
  PyRun_SimpleString("from time import time,ctime\n"
                     "print('Today is',ctime(time()))\n");
  Py_Finalize();
  return 0;
}