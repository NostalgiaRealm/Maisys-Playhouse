
/* ==== FUN_0045fbf0 @ 0045fbf0 ==== 
 * signature: undefined __cdecl FUN_0045fbf0(HDC param_1, int param_2)
 * body: 0045fbf0-0045fc30
 */

void __cdecl FUN_0045fbf0(HDC param_1,int param_2)

{
  HGDIOBJ pvVar1;
  uint uVar2;
  
  pvVar1 = GetStockObject(4);
  pvVar1 = SelectObject(param_1,pvVar1);
  uVar2 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  Rectangle(param_1,0,0,*(int *)(param_2 + 4),(*(uint *)(param_2 + 8) ^ uVar2) - uVar2);
  SelectObject(param_1,pvVar1);
  return;
}


