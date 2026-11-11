
/* ==== FUN_10012d5b @ 10012d5b ==== 
 * signature: undefined __cdecl FUN_10012d5b(HWND param_1, HWND param_2, LPRECT param_3)
 * body: 10012d5b-10012db8
 */

void __cdecl FUN_10012d5b(HWND param_1,HWND param_2,LPRECT param_3)

{
  tagPOINT local_c;
  
  GetWindowRect(param_2,param_3);
  local_c.x = param_3->left;
  local_c.y = param_3->top;
  ScreenToClient(param_1,&local_c);
  param_3->left = local_c.x;
  param_3->top = local_c.y;
  local_c.x = param_3->right;
  local_c.y = param_3->bottom;
  ScreenToClient(param_1,&local_c);
  param_3->right = local_c.x;
  param_3->bottom = local_c.y;
  return;
}


