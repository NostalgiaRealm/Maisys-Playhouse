
/* ==== FUN_00402ba2 @ 00402ba2 ==== 
 * signature: undefined __cdecl FUN_00402ba2(int param_1, int param_2)
 * body: 00402ba2-00402bd2
 */

void __cdecl FUN_00402ba2(int param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(DAT_00413818,param_1);
  EnableWindow(hWnd,param_2);
  ShowWindow(hWnd,(uint)(param_2 != 0));
  return;
}


