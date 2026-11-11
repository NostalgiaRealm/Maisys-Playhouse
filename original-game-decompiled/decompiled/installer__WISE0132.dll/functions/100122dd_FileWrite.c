
/* ==== FileWrite @ 100122dd ==== 
 * signature: DWORD __stdcall FileWrite(HANDLE param_1, LPCVOID param_2, DWORD param_3)
 * body: 100122dd-10012302
 */

DWORD FileWrite(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  
                    /* 0x122dd  6  FileWrite */
  BVar1 = WriteFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    param_3 = 0;
  }
  return param_3;
}


