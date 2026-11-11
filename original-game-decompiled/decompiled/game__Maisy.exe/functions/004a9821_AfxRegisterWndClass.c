
/* ==== AfxRegisterWndClass @ 004a9821 ==== 
 * signature: char * __stdcall AfxRegisterWndClass(uint param_1, HICON__ * param_2, HBRUSH__ * param_3, HICON__ * param_4)
 * body: 004a9821-004a98d7
 * note: Library Function - Single Match  char const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__ *,struct HICON__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    char const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
   
   Library: Visual Studio 1998 Release */

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  HINSTANCE hInstance;
  _AFX_THREAD_STATE *p_Var1;
  int iVar2;
  BOOL BVar3;
  tagWNDCLASSA local_2c;
  
  p_Var1 = AfxGetThreadState();
  p_Var1 = p_Var1 + 0x5c;
  iVar2 = FUN_004bafca();
  hInstance = *(HINSTANCE *)(iVar2 + 8);
  if (((param_2 == (HICON__ *)0x0) && (param_3 == (HBRUSH__ *)0x0)) && (param_4 == (HICON__ *)0x0))
  {
    wsprintfA((LPSTR)p_Var1,"Afx:%x:%x",hInstance,param_1);
  }
  else {
    wsprintfA((LPSTR)p_Var1,"Afx:%x:%x:%x:%x:%x",hInstance,param_1,param_2,param_3,param_4);
  }
  BVar3 = GetClassInfoA(hInstance,(LPCSTR)p_Var1,&local_2c);
  if (BVar3 == 0) {
    local_2c.style = param_1;
    local_2c.lpfnWndProc = DefWindowProcA_exref;
    local_2c.cbWndExtra = 0;
    local_2c.cbClsExtra = 0;
    local_2c.hIcon = param_4;
    local_2c.hCursor = param_2;
    local_2c.hbrBackground = param_3;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.hInstance = hInstance;
    local_2c.lpszClassName = (LPCSTR)p_Var1;
    iVar2 = AfxRegisterClass(&local_2c);
    if (iVar2 == 0) {
      AfxThrowResourceException();
    }
  }
  return (char *)p_Var1;
}


