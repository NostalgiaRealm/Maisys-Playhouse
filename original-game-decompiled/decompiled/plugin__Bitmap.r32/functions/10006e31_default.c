
/* ==== switchD_10006c18::default @ 10006e31 ==== 
 * signature: undefined __stdcall default(void)
 * body: 10006e31-10006e59
 */

void switchD_10006c18::default(void)

{
  HGLOBAL pvVar1;
  LPCVOID in_stack_00000088;
  
  pvVar1 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar1);
  return;
}


