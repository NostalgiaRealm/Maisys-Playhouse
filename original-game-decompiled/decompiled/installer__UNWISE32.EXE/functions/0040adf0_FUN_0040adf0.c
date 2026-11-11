
/* ==== FUN_0040adf0 @ 0040adf0 ==== 
 * signature: undefined __cdecl FUN_0040adf0(undefined * param_1)
 * body: 0040adf0-0040ae39
 */

void __cdecl FUN_0040adf0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = (byte *)FUN_0040c390(param_1,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_0040c3f0(local_4,(int)param_1,pbVar1);
      return;
    }
    HeapFree(DAT_00413ce4,0,lpMem);
  }
  return;
}


