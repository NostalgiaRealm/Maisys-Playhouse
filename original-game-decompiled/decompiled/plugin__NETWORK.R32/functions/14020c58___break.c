
/* ==== __break @ 14020c58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c58-14020c58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


