
/* ==== FUN_0044af30 @ 0044af30 ==== 
 * signature: undefined8 __cdecl FUN_0044af30(char param_1, undefined8 * param_2)
 * body: 0044af30-0044af48
 */

undefined8 __cdecl FUN_0044af30(char param_1,undefined8 *param_2)

{
  if (param_1 == '\0') {
    return *param_2;
  }
  return CONCAT26(CONCAT11((char)*(undefined2 *)((int)param_2 + 4),
                           (char)((ushort)*(undefined2 *)((int)param_2 + 4) >> 8)),
                  CONCAT24(CONCAT11((char)*(undefined2 *)((int)param_2 + 6),
                                    (char)((ushort)*(undefined2 *)((int)param_2 + 6) >> 8)),
                           CONCAT22(CONCAT11((char)*(undefined2 *)param_2,
                                             (char)((ushort)*(undefined2 *)param_2 >> 8)),
                                    CONCAT11((char)*(undefined2 *)((int)param_2 + 2),
                                             (char)((ushort)*(undefined2 *)((int)param_2 + 2) >> 8))
                                   )));
}


