
/* ==== __break @ 0045bed3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bed3-0045bed3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


