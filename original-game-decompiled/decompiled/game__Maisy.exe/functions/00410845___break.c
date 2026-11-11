
/* ==== __break @ 00410845 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410845-00410845
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


