
/* ==== FUN_1001234f @ 1001234f ==== 
 * signature: undefined __cdecl FUN_1001234f(HANDLE param_1, LPWORD param_2, LPWORD param_3)
 * body: 1001234f-10012385
 */

void __cdecl FUN_1001234f(HANDLE param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_14;
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_c);
  FileTimeToLocalFileTime(&local_c,&local_14);
  FileTimeToDosDateTime(&local_14,param_2,param_3);
  return;
}


