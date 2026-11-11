
/* ==== FUN_12016050 @ 12016050 ==== 
 * signature: undefined8 __fastcall FUN_12016050(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 12016050-1201607b
 */

undefined8 __fastcall
FUN_12016050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 in_EAX;
  
  *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) + 5;
  if (*(char *)(param_5 + 4) == '\0') {
    FUN_12004d40(*(undefined4 **)(param_5 + 6));
  }
  return CONCAT44(param_2,in_EAX);
}


