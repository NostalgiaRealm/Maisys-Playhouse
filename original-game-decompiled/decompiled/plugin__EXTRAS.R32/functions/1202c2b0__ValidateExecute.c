
/* ==== _ValidateExecute @ 1202c2b0 ==== 
 * signature: int __cdecl _ValidateExecute(_func_int * param_1)
 * body: 1202c2b0-1202c2ca
 * note: Library Function - Single Match  int __cdecl _ValidateExecute(int (__stdcall*)(void))  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
   
   Library: Visual Studio 1998 Release */

int __cdecl _ValidateExecute(_func_int *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr((FARPROC)param_1);
  return (uint)(BVar1 == 0);
}


