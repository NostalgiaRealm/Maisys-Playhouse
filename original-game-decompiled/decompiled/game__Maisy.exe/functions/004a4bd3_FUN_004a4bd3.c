
/* ==== FUN_004a4bd3 @ 004a4bd3 ==== 
 * signature: undefined __cdecl FUN_004a4bd3(CString * param_1, LPCVOID param_2)
 * body: 004a4bd3-004a4c1e
 */

void __cdecl FUN_004a4bd3(CString *param_1,LPCVOID param_2)

{
  va_list local_c;
  char *local_8;
  
  local_c = &stack0x0000000c;
  FormatMessageA(0x500,param_2,0,0,(LPSTR)&local_8,0,&local_c);
  if (local_8 == (char *)0x0) {
    FUN_004a3538();
  }
  CString::operator=(param_1,local_8);
  LocalFree(local_8);
  return;
}


