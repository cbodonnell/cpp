#include <Python.h>

int main(int argc, wchar_t *argv[])
{
  int pyargc;
  wchar_t * pyargv[3];

  pyargc = 3;
  pyargv[0] = L"mypy.py";
  pyargv[1] = L"Arg1";
  pyargv[2] = L"ArgTwo!";

  Py_SetProgramName(argv[0]);  /* optional but recommended */
  Py_Initialize();
  PySys_SetArgv(pyargc, pyargv);
  // PyRun_SimpleString("from time import time,ctime\n"
  //                    "print('Today is',ctime(time()))\n");
  PyObject *obj = Py_BuildValue("s", "mypy.py");
  FILE *file = _Py_fopen_obj(obj, "r+");

  if(file != NULL) {
      PyRun_SimpleFile(file, "mypy.py");
  }
  Py_Finalize();
  return 0;
}