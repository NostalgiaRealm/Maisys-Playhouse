
/* ==== __break @ 00419032 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00419032-00419032
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


