
/* ==== AfxIsDescendant @ 004b7e27 ==== 
 * signature: int __stdcall AfxIsDescendant(HWND__ * param_1, HWND__ * param_2)
 * body: 004b7e27-004b7e46
 * note: Library Function - Single Match  int __stdcall AfxIsDescendant(struct HWND__ *,struct HWND__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxIsDescendant(struct HWND__ *,struct HWND__ *)
   
   Library: Visual Studio 1998 Release */

int AfxIsDescendant(HWND__ *param_1,HWND__ *param_2)

{
  do {
    if (param_2 == param_1) {
      return 1;
    }
    param_2 = AfxGetParentOwner(param_2);
  } while (param_2 != (HWND__ *)0x0);
  return 0;
}


