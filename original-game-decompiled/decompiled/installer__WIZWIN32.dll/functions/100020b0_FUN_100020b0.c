
/* ==== FUN_100020b0 @ 100020b0 ==== 
 * signature: undefined __cdecl FUN_100020b0(HDC param_1, int * param_2, int param_3)
 * body: 100020b0-100021af
 */

void __cdecl FUN_100020b0(HDC param_1,int *param_2,int param_3)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HGDIOBJ h;
  int iVar3;
  int iVar4;
  RECT local_20;
  int local_8;
  
  local_8 = param_2[2] + -1;
  local_20.top = param_2[1] + 3;
  local_20.left = *param_2 + 2;
  local_20.bottom = param_2[3] + -3;
  local_20.right = local_20.left + param_2[5];
  DVar1 = GetSysColor(0xd);
  pHVar2 = CreateSolidBrush(DVar1);
  h = SelectObject(param_1,pHVar2);
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar4 = iVar3 + 1;
      FillRect(param_1,&local_20,pHVar2);
      local_20.left = local_20.right + 2;
      if (param_2[6] < iVar3 + 2) {
        local_20.right = local_8 + -2;
      }
      else {
        local_20.right = local_20.left + param_2[5];
      }
      iVar3 = iVar4;
    } while ((int)(1000 / (longlong)param_2[6]) * iVar4 < param_3);
  }
  local_20.right = param_2[2] + -1;
  local_20.top = param_2[1] + 1;
  local_20.bottom = param_2[3] + -1;
  SelectObject(param_1,h);
  DeleteObject(pHVar2);
  DVar1 = GetSysColor(0xf);
  pHVar2 = CreateSolidBrush(DVar1);
  FillRect(param_1,&local_20,pHVar2);
  DeleteObject(pHVar2);
  return;
}


